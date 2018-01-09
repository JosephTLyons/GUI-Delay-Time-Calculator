//
//  MillisecondFrequencyValueBase.cpp
//  The Lyons' Den Delay Time Calculator
//
//  Created by Joseph Lyons on 5/9/17.
//
//

#include "MillisecondsHertzValueBase.hpp"

MillisecondsHertzValueBase::MillisecondsHertzValueBase()
{
    tempo   = 0;
    
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

MillisecondsHertzValueBase::~MillisecondsHertzValueBase() {}

double MillisecondsHertzValueBase::getWholeNormal()
{
    return wholeNormal;
}

double MillisecondsHertzValueBase::getWholeDotted()
{
    return wholeDotted;
}

double MillisecondsHertzValueBase::getWholeTriplet()
{
    return wholeTriplet;
}

double MillisecondsHertzValueBase::getHalfNormal()
{
    return halfNormal;
}

double MillisecondsHertzValueBase::getHalfDotted()
{
    return halfDotted;
}

double MillisecondsHertzValueBase::getHalfTriplet()
{
    return halfTriplet;
}

double MillisecondsHertzValueBase::getQuarterNormal()
{
    return quarterNormal;
}

double MillisecondsHertzValueBase::getQuarterDotted()
{
    return quarterDotted;
}

double MillisecondsHertzValueBase::getQuarterTriplet()
{
    return quarterTriplet;
}

double MillisecondsHertzValueBase::getEighthNormal()
{
    return eighthNormal;
}

double MillisecondsHertzValueBase::getEighthDotted()
{
    return eighthDotted;
}

double MillisecondsHertzValueBase::getEighthTriplet()
{
    return eighthTriplet;
}

double MillisecondsHertzValueBase::getSixteenthNormal()
{
    return sixteenthNormal;
}

double MillisecondsHertzValueBase::getSixteenthDotted()
{
    return sixteenthDotted;
}

double MillisecondsHertzValueBase::getSixteenthTriplet()
{
    return sixteenthTriplet;
}

double MillisecondsHertzValueBase::getThirtySecondNormal()
{
    return thirtySecondNormal;
}

double MillisecondsHertzValueBase::getThirtySecondDotted()
{
    return thirtySecondDotted;
}

double MillisecondsHertzValueBase::getThirtySecondTriplet()
{
    return thirtySecondTriplet;
}

double MillisecondsHertzValueBase::getSixtyFouthNormal()
{
    return sixtyFourthNormal;
}

double MillisecondsHertzValueBase::getSixtyFouthDotted()
{
    return sixtyFourthDotted;
}

double MillisecondsHertzValueBase::getSixtyFouthTriplet()
{
    return sixtyFourthTriplet;
}

double MillisecondsHertzValueBase::getOneHundredAndTwentyEighthNormal()
{
    return oneHundredAndTwentyEighthNormal;
}

double MillisecondsHertzValueBase::getOneHundredAndTwentyEighthDotted()
{
    return oneHundredAndTwentyEighthDotted;
}

double MillisecondsHertzValueBase::getOneHundredAndTwentyEighthTriplet()
{
    return oneHundredAndTwentyEighthTriplet;
}
