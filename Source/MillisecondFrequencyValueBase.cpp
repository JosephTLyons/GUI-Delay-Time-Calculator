//
//  MillisecondFrequencyValueBase.cpp
//  The Lyons' Den Delay Time Calculator
//
//  Created by Joseph Lyons on 5/9/17.
//
//

#include "MillisecondFrequencyValueBase.hpp"

MillisecondFrequencyValueBase::MillisecondFrequencyValueBase()
{
    tempo   = 0;
    dotted  = 1.5;
    triplet = 2 / 3.0f;
    
    wholeNormal                      = 0;
    wholeDotted                      = 0;
    wholeTriplet                     = 0;
    
    halfNormal                       = 0;
    halfDotted                       = 0;
    halfTriplet                      = 0;
    
    quarterNormal                    = 0;
    quarterDotted                    = 0;
    quarterTriplet                   = 0;
    
    eighthNormal                     = 0;
    eighthDotted                     = 0;
    eighthTriplet                    = 0;
    
    sixteenthNormal                  = 0;
    sixteenthDotted                  = 0;
    sixteenthTriplet                 = 0;
    
    thirtySecondNormal               = 0;
    thirtySecondDotted               = 0;
    thirtySecondTriplet              = 0;
    
    sixtyFourthNormal                = 0;
    sixtyFourthDotted                = 0;
    sixtyFourthTriplet               = 0;
    
    oneHundredAndTwentyEighthNormal  = 0;
    oneHundredAndTwentyEighthDotted  = 0;
    oneHundredAndTwentyEighthTriplet = 0;
}

double MillisecondFrequencyValueBase::getWholeNormal()
{
    return wholeNormal;
}

double MillisecondFrequencyValueBase::getWholeDotted()
{
    return wholeDotted;
}

double MillisecondFrequencyValueBase::getWholeTriplet()
{
    return wholeTriplet;
}

double MillisecondFrequencyValueBase::getHalfNormal()
{
    return halfNormal;
}

double MillisecondFrequencyValueBase::getHalfDotted()
{
    return halfDotted;
}

double MillisecondFrequencyValueBase::getHalfTriplet()
{
    return halfTriplet;
}

double MillisecondFrequencyValueBase::getQuarterNormal()
{
    return quarterNormal;
}

double MillisecondFrequencyValueBase::getQuarterDotted()
{
    return quarterDotted;
}

double MillisecondFrequencyValueBase::getQuarterTriplet()
{
    return quarterTriplet;
}

double MillisecondFrequencyValueBase::getEighthNormal()
{
    return eighthNormal;
}

double MillisecondFrequencyValueBase::getEighthDotted()
{
    return eighthDotted;
}

double MillisecondFrequencyValueBase::getEighthTriplet()
{
    return eighthTriplet;
}

double MillisecondFrequencyValueBase::getSixteenthNormal()
{
    return sixteenthNormal;
}

double MillisecondFrequencyValueBase::getSixteenthDotted()
{
    return sixteenthDotted;
}

double MillisecondFrequencyValueBase::getSixteenthTriplet()
{
    return sixteenthTriplet;
}

double MillisecondFrequencyValueBase::getThirtySecondNormal()
{
    return thirtySecondNormal;
}

double MillisecondFrequencyValueBase::getThirtySecondDotted()
{
    return thirtySecondDotted;
}

double MillisecondFrequencyValueBase::getThirtySecondTriplet()
{
    return thirtySecondTriplet;
}

double MillisecondFrequencyValueBase::getSixtyFouthNormal()
{
    return sixtyFourthNormal;
}

double MillisecondFrequencyValueBase::getSixtyFouthDotted()
{
    return sixtyFourthDotted;
}

double MillisecondFrequencyValueBase::getSixtyFouthTriplet()
{
    return sixtyFourthTriplet;
}

double MillisecondFrequencyValueBase::getOneHundredAndTwentyEighthNormal()
{
    return oneHundredAndTwentyEighthNormal;
}

double MillisecondFrequencyValueBase::getOneHundredAndTwentyEighthDotted()
{
    return oneHundredAndTwentyEighthDotted;
}

double MillisecondFrequencyValueBase::getOneHundredAndTwentyEighthTriplet()
{
    return oneHundredAndTwentyEighthTriplet;
}
