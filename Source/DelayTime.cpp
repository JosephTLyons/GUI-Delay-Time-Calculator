//
//  DelayTime.cpp
//  Delay Time Calculator
//
//  Created by Joseph Lyons on 4/14/17.
//
//

#include "DelayTime.hpp"

DelayTime::DelayTime()
{
    tempo          = 0;
    delayTime      = 0;
    isDotted       = false;
    isTriplet      = false;
    intervalChosen = quarterNote;
}

void DelayTime::setTempo(const float &input)
{
    tempo = input;
}

float DelayTime::getDelayTime()
{
    return delayTime;
}

void DelayTime::calculateDelayTime()
{
    const int milliseconds = 60000;
    
    delayTime = tempo / milliseconds;
}
