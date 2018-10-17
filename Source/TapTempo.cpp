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
    minutes = (timeElapsedInMilliseconds / (double) 1000) / 60;
}

unsigned long int TapTempo::getTapCount() const
{
    return intervalCount + 1;
}
