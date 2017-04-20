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
    tempo                     = 0;
    
    whole                     = 0;
    half                      = 0;
    quarter                   = 0;
    eighth                    = 0;
    sixteenth                 = 0;
    thirtySecond              = 0;
    sixtyFourth               = 0;
    oneHundredAndTwentyEighth = 0;
    
    dotted                    = 1.5;
    triplet                   = 2 / 3.0f;
}

void DelayTime::setTempo(const float &input)
{
    tempo = input;
    calculateDelayTimes();
}

void DelayTime::calculateDelayTimes()
{
    quarter                   = 60000 / tempo;
    
    whole                     = quarter * 4;
    
    half                      = quarter * 2;
    
    eighth                    = quarter / 2;
    
    sixteenth                 = quarter / 4;
    
    thirtySecond              = quarter / 8;
    
    sixtyFourth               = quarter / 16;
    
    oneHundredAndTwentyEighth = quarter / 32;
}

float DelayTime::getWholeNormal()
{
    return whole;
}

float DelayTime::getWholeDottedNormal()
{
    return whole * dotted;
}



