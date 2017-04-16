//
//  BPM.cpp
//  BPM Finder
//
//  Created by Joseph Lyons on 1/18/17.
//
//

#include "BPM.hpp"

BPM::BPM()
{
    tapCount = 0;
    startingMillisecondHolder = 0;
    endingMillisecondHolder = 0;
}

void BPM::incrementTapCount()
{
    tapCount++;
}

unsigned long int BPM::getIntTapCount()
{
    return tapCount;
}

void BPM::setIntTapCount(const unsigned long int &input)
{
    tapCount = input;
}

String BPM::getStringTapCount()
{
    // typecast unsigned long int to juce string and return
    return (String) tapCount;
}

void BPM::setStartingTime(const int64 &input)
{
    startingMillisecondHolder = input;
}

int64 BPM::getStartingTime()
{
    return startingMillisecondHolder;
}

void BPM::setEndingTime(const int64 &input)
{
    endingMillisecondHolder = input;
    
    calculateTimeElapsed();
}

int64 BPM::getEndingTime()
{
    return endingMillisecondHolder;
}

void BPM::calculateTimeElapsed()
{
    timeElapsed = endingMillisecondHolder - startingMillisecondHolder;
}

int64 BPM::getTotalTimeElapsed()
{
    return timeElapsed;
}
