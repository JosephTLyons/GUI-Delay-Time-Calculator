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
    isDotted       = false;
    isTriplet      = false;
    intervalChosen = quarterNote;
}

void DelayTime::setTempo(const float &input)
{
    tempo = input;
}

void DelayTime::calculateDelayTime()
{
    
}
