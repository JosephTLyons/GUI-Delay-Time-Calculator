//
//  TapTempo.cpp
//  TapTempo Finder
//
//  Created by Joseph Lyons on 1/18/17.
//
//

#include "TapTempo.hpp"

TapTempo::TapTempo()
{
    resetMainCalculationHolders();
    
    millisecondsInASecond     = 1000;
    secondsInAMinute          = 60;
}

void TapTempo::resetMainCalculationHolders()
{
    tempo                      = 0;
    tapCount                   = 0;
    
    startingTimeInMilliseconds = 0;
    endingTimeInMilliseconds   = 0;
    timeElapsedInMilliseconds  = 0;
    
    seconds                    = 0;
    minutes                    = 0;
}

double TapTempo::calculateTempo()
{
    juceTimeObject = Time::getCurrentTime();
    
    // Set start time, this should happen only once (on first tap)
    // and maintain this value the entire time so that the total average can be calculated
    if (tapCount == 0)
    {
        // Set minutes to one, otherwise, first tap will result in a division with
        // 0 in the denominator, which will output "nan" on the first tap
        minutes = 1;
        
        startingTimeInMilliseconds = juceTimeObject.toMilliseconds();
    }
    
    tapCount++;
    
    // Set end time
    endingTimeInMilliseconds = juceTimeObject.toMilliseconds();
    
    calculateTimeElapsedInMilliseconds();
    
    // Only calculate minutes after the first hit because minutes are automatically set to one
    // the very first hit to avoid division by 0.
    if (tapCount > 1)
    {
        convertTimeElapsedToMinutes();
    }
    
    // Calculate tempo by subtracting 1 from tap count count because intervals are always 1
    // less than the tempo count
    tempo = (tapCount - 1) / minutes;
    
    return tempo;
}

void TapTempo::calculateTimeElapsedInMilliseconds()
{
    timeElapsedInMilliseconds = endingTimeInMilliseconds - startingTimeInMilliseconds;
}

void TapTempo::convertTimeElapsedToMinutes()
{
    // convert elapsed time to seconds
    seconds = timeElapsedInMilliseconds / (double) millisecondsInASecond;
    
    // convert elapsed time to minutes
    minutes = seconds / secondsInAMinute;
}

unsigned long int TapTempo::getTapCount() const
{
    return tapCount;
}
