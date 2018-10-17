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
    
    millisecondsInASecond = 1000;
    secondsInAMinute      = 60;
}

void TapTempo::resetMainCalculationHolders()
{
    intervalCount              = -1;
    
    startingTimeInMilliseconds = 0;
    timeElapsedInMilliseconds  = 0;
    
    seconds                    = 0;
    minutes                    = 0;
}

double TapTempo::calculateTempo()
{
    if (++intervalCount == 0)
    {
        startingTimeInMilliseconds = Time::getCurrentTime().toMilliseconds();
        return 0;
    }

    timeElapsedInMilliseconds = Time::getCurrentTime().toMilliseconds() - startingTimeInMilliseconds;

    convertTimeElapsedToMinutes();

    return intervalCount / minutes;
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
    return intervalCount + 1;
}
