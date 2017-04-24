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

void DelayTime::setTempo(const double &input)
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

double DelayTime::getWholeNormal()
{
    return whole;
}

double DelayTime::getWholeDotted()
{
    return whole * dotted;
}

double DelayTime::getWholeTriplet()
{
    return whole * triplet;
}

double DelayTime::getHalfNormal()
{
    return half;
}

double DelayTime::getHalfDotted()
{
    return half * dotted;
}

double DelayTime::getHalfTriplet()
{
    return half * triplet;
}

double DelayTime::getQuarterNormal()
{
    return quarter;
}

double DelayTime::getQuarterDotted()
{
    return quarter * dotted;
}

double DelayTime::getQuarterTriplet()
{
    return quarter * triplet;
}

double DelayTime::getEighthNormal()
{
    return eighth;
}

double DelayTime::getEighthDotted()
{
    return eighth * dotted;
}

double DelayTime::getEighthTriplet()
{
    return eighth * triplet;
}

double DelayTime::getSixteenthNormal()
{
    return sixteenth;
}

double DelayTime::getSixteenthDotted()
{
    return sixteenth * dotted;
}

double DelayTime::getSixteenthTriplet()
{
    return sixteenth * triplet;
}

double DelayTime::getThirtySecondNormal()
{
    return thirtySecond;
}

double DelayTime::getThirtySecondDotted()
{
    return thirtySecond * dotted;
}

double DelayTime::getThirtySecondTriplet()
{
    return thirtySecond * triplet;
}

double DelayTime::getSixtyFouthNormal()
{
    return sixtyFourth;
}

double DelayTime::getSixtyFouthDotted()
{
    return sixtyFourth * dotted;
}

double DelayTime::getSixtyFouthTriplet()
{
    return sixtyFourth * triplet;
}

double DelayTime::getOneHundredAndTwentyEighthNormal()
{
    return oneHundredAndTwentyEighth;
}

double DelayTime::getOneHundredAndTwentyEighthDotted()
{
    return oneHundredAndTwentyEighth * dotted;
}

double DelayTime::getOneHundredAndTwentyEighthTriplet()
{
    return oneHundredAndTwentyEighth * triplet;
}
