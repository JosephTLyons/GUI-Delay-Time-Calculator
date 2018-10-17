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
    seconds = timeElapsedInMilliseconds / (double) 1000;
    minutes = seconds / 60;
}

unsigned long int TapTempo::getTapCount() const
{
    return intervalCount + 1;
}
