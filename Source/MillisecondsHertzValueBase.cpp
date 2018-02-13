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

double MillisecondsHertzValueBase::getWholeNormal() const
{
    return wholeNormal;
}

double MillisecondsHertzValueBase::getWholeDotted() const
{
    return wholeDotted;
}

double MillisecondsHertzValueBase::getWholeTriplet() const
{
    return wholeTriplet;
}

double MillisecondsHertzValueBase::getHalfNormal() const
{
    return halfNormal;
}

double MillisecondsHertzValueBase::getHalfDotted() const
{
    return halfDotted;
}

double MillisecondsHertzValueBase::getHalfTriplet() const
{
    return halfTriplet;
}

double MillisecondsHertzValueBase::getQuarterNormal() const
{
    return quarterNormal;
}

double MillisecondsHertzValueBase::getQuarterDotted() const
{
    return quarterDotted;
}

double MillisecondsHertzValueBase::getQuarterTriplet() const
{
    return quarterTriplet;
}

double MillisecondsHertzValueBase::getEighthNormal() const
{
    return eighthNormal;
}

double MillisecondsHertzValueBase::getEighthDotted() const
{
    return eighthDotted;
}

double MillisecondsHertzValueBase::getEighthTriplet() const
{
    return eighthTriplet;
}

double MillisecondsHertzValueBase::getSixteenthNormal() const
{
    return sixteenthNormal;
}

double MillisecondsHertzValueBase::getSixteenthDotted() const
{
    return sixteenthDotted;
}

double MillisecondsHertzValueBase::getSixteenthTriplet() const
{
    return sixteenthTriplet;
}

double MillisecondsHertzValueBase::getThirtySecondNormal() const
{
    return thirtySecondNormal;
}

double MillisecondsHertzValueBase::getThirtySecondDotted() const
{
    return thirtySecondDotted;
}

double MillisecondsHertzValueBase::getThirtySecondTriplet() const
{
    return thirtySecondTriplet;
}

double MillisecondsHertzValueBase::getSixtyFouthNormal() const
{
    return sixtyFourthNormal;
}

double MillisecondsHertzValueBase::getSixtyFouthDotted() const
{
    return sixtyFourthDotted;
}

double MillisecondsHertzValueBase::getSixtyFouthTriplet() const
{
    return sixtyFourthTriplet;
}

double MillisecondsHertzValueBase::getOneHundredAndTwentyEighthNormal() const
{
    return oneHundredAndTwentyEighthNormal;
}

double MillisecondsHertzValueBase::getOneHundredAndTwentyEighthDotted() const
{
    return oneHundredAndTwentyEighthDotted;
}

double MillisecondsHertzValueBase::getOneHundredAndTwentyEighthTriplet() const
{
    return oneHundredAndTwentyEighthTriplet;
}
