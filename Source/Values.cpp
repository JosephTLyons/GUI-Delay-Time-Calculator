//
//  MillisecondFrequencyValueBase.cpp
//  The Lyons' Den Delay Time Calculator
//
//  Created by Joseph Lyons on 5/9/17.
//
//

#include "Values.hpp"

Values::Values()
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

void Values::calculateMilliseconds (const double &tempo)
{
    // quarterNormal value must be calculated first, since other values depend on it
    quarterNormal                    = 60000 / tempo;
    
    wholeNormal                      = quarterNormal * 4;
    wholeDotted                      = wholeNormal * 1.5;
    wholeTriplet                     = wholeNormal * (2 / 3.0f);
    
    halfNormal                       = quarterNormal * 2;
    halfDotted                       = halfNormal * 1.5;
    halfTriplet                      = halfNormal * (2 / 3.0f);
    
    // quarterNormal
    quarterDotted                    = quarterNormal * 1.5;
    quarterTriplet                   = quarterNormal * (2 / 3.0f);
    
    eighthNormal                     = quarterNormal / 2;
    eighthDotted                     = eighthNormal * 1.5;
    eighthTriplet                    = eighthNormal * (2 / 3.0f);
    
    sixteenthNormal                  = quarterNormal / 4;
    sixteenthDotted                  = sixteenthNormal * 1.5;
    sixteenthTriplet                 = sixteenthNormal * (2 / 3.0f);
    
    thirtySecondNormal               = quarterNormal / 8;
    thirtySecondDotted               = thirtySecondNormal * 1.5;
    thirtySecondTriplet              = thirtySecondNormal * (2 / 3.0f);
    
    sixtyFourthNormal                = quarterNormal / 16;
    sixtyFourthDotted                = sixtyFourthNormal * 1.5;
    sixtyFourthTriplet               = sixtyFourthNormal * (2 / 3.0f);
    
    oneHundredAndTwentyEighthNormal  = quarterNormal / 32;
    oneHundredAndTwentyEighthDotted  = oneHundredAndTwentyEighthNormal * 1.5;
    oneHundredAndTwentyEighthTriplet = oneHundredAndTwentyEighthNormal * (2 / 3.0f);
}

void Values::calculateHertz (const double &tempo)
{
    // quarterNormal value must be calculated first, since other values depend on it
    quarterNormal                    = tempo / 60;
    
    wholeNormal                      = quarterNormal / 4;
    wholeDotted                      = wholeNormal * (2 / 3.0f);
    wholeTriplet                     = wholeNormal * 1.5;
    
    halfNormal                       = quarterNormal / 2;
    halfDotted                       = halfNormal * (2 / 3.0f);
    halfTriplet                      = halfNormal * 1.5;
    
    // quarterNormal
    quarterDotted                    = quarterNormal * (2 / 3.0f);
    quarterTriplet                   = quarterNormal * 1.5;
    
    eighthNormal                     = quarterNormal * 2;
    eighthDotted                     = eighthNormal * (2 / 3.0f);
    eighthTriplet                    = eighthNormal * 1.5;
    
    sixteenthNormal                  = quarterNormal * 4;
    sixteenthDotted                  = sixteenthNormal * (2 / 3.0f);
    sixteenthTriplet                 = sixteenthNormal * 1.5;
    
    thirtySecondNormal               = quarterNormal * 8;
    thirtySecondDotted               = thirtySecondNormal * (2 / 3.0f);
    thirtySecondTriplet              = thirtySecondNormal * 1.5;
    
    sixtyFourthNormal                = quarterNormal * 16;
    sixtyFourthDotted                = sixtyFourthNormal * (2 / 3.0f);
    sixtyFourthTriplet               = sixtyFourthNormal * 1.5;
    
    oneHundredAndTwentyEighthNormal  = quarterNormal * 32;
    oneHundredAndTwentyEighthDotted  = oneHundredAndTwentyEighthNormal * (2 / 3.0f);
    oneHundredAndTwentyEighthTriplet = oneHundredAndTwentyEighthNormal * 1.5;
}

double Values::getWholeNormal() const
{
    return wholeNormal;
}

double Values::getWholeDotted() const
{
    return wholeDotted;
}

double Values::getWholeTriplet() const
{
    return wholeTriplet;
}

double Values::getHalfNormal() const
{
    return halfNormal;
}

double Values::getHalfDotted() const
{
    return halfDotted;
}

double Values::getHalfTriplet() const
{
    return halfTriplet;
}

double Values::getQuarterNormal() const
{
    return quarterNormal;
}

double Values::getQuarterDotted() const
{
    return quarterDotted;
}

double Values::getQuarterTriplet() const
{
    return quarterTriplet;
}

double Values::getEighthNormal() const
{
    return eighthNormal;
}

double Values::getEighthDotted() const
{
    return eighthDotted;
}

double Values::getEighthTriplet() const
{
    return eighthTriplet;
}

double Values::getSixteenthNormal() const
{
    return sixteenthNormal;
}

double Values::getSixteenthDotted() const
{
    return sixteenthDotted;
}

double Values::getSixteenthTriplet() const
{
    return sixteenthTriplet;
}

double Values::getThirtySecondNormal() const
{
    return thirtySecondNormal;
}

double Values::getThirtySecondDotted() const
{
    return thirtySecondDotted;
}

double Values::getThirtySecondTriplet() const
{
    return thirtySecondTriplet;
}

double Values::getSixtyFouthNormal() const
{
    return sixtyFourthNormal;
}

double Values::getSixtyFouthDotted() const
{
    return sixtyFourthDotted;
}

double Values::getSixtyFouthTriplet() const
{
    return sixtyFourthTriplet;
}

double Values::getOneHundredAndTwentyEighthNormal() const
{
    return oneHundredAndTwentyEighthNormal;
}

double Values::getOneHundredAndTwentyEighthDotted() const
{
    return oneHundredAndTwentyEighthDotted;
}

double Values::getOneHundredAndTwentyEighthTriplet() const
{
    return oneHundredAndTwentyEighthTriplet;
}
