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

float DelayTime::getWholeDotted()
{
    return whole * dotted;
}

float DelayTime::getWholeTriplet()
{
    return whole * triplet;
}

float DelayTime::getHalfNormal()
{
    return half;
}

float DelayTime::getHalfDotted()
{
    return half * dotted;
}

float DelayTime::getHalfTriplet()
{
    return half * triplet;
}

float DelayTime::getQuarterNormal()
{
    return quarter;
}

float DelayTime::getQuarterDotted()
{
    return quarter * dotted;
}

float DelayTime::getQuarterTriplet()
{
    return quarter * triplet;
}

float DelayTime::getEighthNormal()
{
    return eighth;
}

float DelayTime::getEighthDotted()
{
    return eighth * dotted;
}

float DelayTime::getEighthTriplet()
{
    return eighth * triplet;
}

float DelayTime::getSixteenthNormal()
{
    return sixteenth;
}

float DelayTime::getSixteenthDotted()
{
    return sixteenth * dotted;
}

float DelayTime::getSixteenthTriplet()
{
    return sixteenth * triplet;
}

float DelayTime::getThirtySecondNormal()
{
    return thirtySecond;
}

float DelayTime::getThirtySecondDotted()
{
    return thirtySecond * dotted;
}

float DelayTime::getThirtySecondTriplet()
{
    return thirtySecond * triplet;
}

float DelayTime::getSixtyFouthNormal()
{
    return sixtyFourth;
}

float DelayTime::getSixtyFouthDotted()
{
    return sixtyFourth * dotted;
}

float DelayTime::getSixtyFouthTriplet()
{
    return sixtyFourth * triplet;
}
