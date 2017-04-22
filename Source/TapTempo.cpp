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

float TapTempo::calculateTempo()
{
    Time juceTimeObject(Time::getCurrentTime());
    
    // start timer - only do this once
    if(tapCount == 0)
    {
        // Set minutes to one, otherwise, first tap will result in a division with
        // 0 in the denominator, which will output "nan" on the first tap
        minutes = 1;
        
        startingMillisecondHolder = juceTimeObject.toMilliseconds();
    }
    
    tapCount++;
    
    // set end time
    endingMillisecondHolder = juceTimeObject.toMilliseconds();
    
    calculateTimeElapsed();
    
    // get new current time to calculate new duration, do this everytime
    if(tapCount > 1)
    {
        getTimeElapsedInMinutes(juceTimeObject);
    }
    
    // calculate BPM - subtract 1 from bpm count because intervals are always 1
    // less than the BPM count
    tempo = (tapCount - 1) / minutes;
    
    return tempo;
}

void TapTempo::calculateTimeElapsed()
{
    timeElapsed = endingMillisecondHolder - startingMillisecondHolder;
}

void TapTempo::getTimeElapsedInMinutes(const Time &juceTimeObject)
{
    // convert elapsed time to seconds
    seconds = timeElapsed / (double) millisecondsInASecond;
    
    // convert elapsed time to minutes
    minutes = seconds / secondsInAMinute;
}

void TapTempo::resetMainCalculationHolders()
{
    tempo                     = 0;
    tapCount                  = 0;
    
    startingMillisecondHolder = 0;
    endingMillisecondHolder   = 0;
    timeElapsed               = 0;
    
    seconds                   = 0;
    minutes                   = 0;
}
