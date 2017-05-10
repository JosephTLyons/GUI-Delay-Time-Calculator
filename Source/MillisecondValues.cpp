//
//  MillisecondValues.cpp
//  Delay Time Calculator
//
//  Created by Joseph Lyons on 4/14/17.
//
//

#include "MillisecondValues.hpp"

MillisecondValues::MillisecondValues()
{
    tempo                            = 0;
    
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
    
    dotted                    = 1.5;
    triplet                   = 2 / 3.0f;
}

void MillisecondValues::calculate(const double &input)
{
    tempo = input;
    
    // quarterNormal value must be calculated first, since other values depend on it
    quarterNormal                    = 60000 / tempo;
    
    wholeNormal                      = quarterNormal * 4;
    wholeDotted                      = wholeNormal * dotted;
    wholeTriplet                     = wholeNormal * triplet;
    
    halfNormal                       = quarterNormal * 2;
    halfDotted                       = halfNormal * dotted;
    halfTriplet                      = halfNormal * triplet;
    
    // quarterNormal
    quarterDotted                    = quarterNormal * dotted;
    quarterTriplet                   = quarterNormal * triplet;
    
    eighthNormal                     = quarterNormal / 2;
    eighthDotted                     = eighthNormal * dotted;
    eighthTriplet                    = eighthNormal * triplet;
    
    sixteenthNormal                  = quarterNormal / 4;
    sixteenthDotted                  = sixteenthNormal * dotted;
    sixteenthTriplet                 = sixteenthNormal * triplet;
    
    thirtySecondNormal               = quarterNormal / 8;
    thirtySecondDotted               = thirtySecondNormal * dotted;
    thirtySecondTriplet              = thirtySecondNormal * triplet;
    
    sixtyFourthNormal                = quarterNormal / 16;
    sixtyFourthDotted                = sixtyFourthNormal * dotted;
    sixtyFourthTriplet               = sixtyFourthNormal * triplet;
    
    oneHundredAndTwentyEighthNormal  = quarterNormal / 32;
    oneHundredAndTwentyEighthDotted  = oneHundredAndTwentyEighthNormal * dotted;
    oneHundredAndTwentyEighthTriplet = oneHundredAndTwentyEighthNormal * triplet;
}

double MillisecondValues::getWholeNormal()
{
    return wholeNormal;
}

double MillisecondValues::getWholeDotted()
{
    return wholeDotted;
}

double MillisecondValues::getWholeTriplet()
{
    return wholeTriplet;
}

double MillisecondValues::getHalfNormal()
{
    return halfNormal;
}

double MillisecondValues::getHalfDotted()
{
    return halfDotted;
}

double MillisecondValues::getHalfTriplet()
{
    return halfTriplet;
}

double MillisecondValues::getQuarterNormal()
{
    return quarterNormal;
}

double MillisecondValues::getQuarterDotted()
{
    return quarterDotted;
}

double MillisecondValues::getQuarterTriplet()
{
    return quarterTriplet;
}

double MillisecondValues::getEighthNormal()
{
    return eighthNormal;
}

double MillisecondValues::getEighthDotted()
{
    return eighthDotted;
}

double MillisecondValues::getEighthTriplet()
{
    return eighthTriplet;
}

double MillisecondValues::getSixteenthNormal()
{
    return sixteenthNormal;
}

double MillisecondValues::getSixteenthDotted()
{
    return sixteenthDotted;
}

double MillisecondValues::getSixteenthTriplet()
{
    return sixteenthTriplet;
}

double MillisecondValues::getThirtySecondNormal()
{
    return thirtySecondNormal;
}

double MillisecondValues::getThirtySecondDotted()
{
    return thirtySecondDotted;
}

double MillisecondValues::getThirtySecondTriplet()
{
    return thirtySecondTriplet;
}

double MillisecondValues::getSixtyFouthNormal()
{
    return sixtyFourthNormal;
}

double MillisecondValues::getSixtyFouthDotted()
{
    return sixtyFourthDotted;
}

double MillisecondValues::getSixtyFouthTriplet()
{
    return sixtyFourthTriplet;
}

double MillisecondValues::getOneHundredAndTwentyEighthNormal()
{
    return oneHundredAndTwentyEighthNormal;
}

double MillisecondValues::getOneHundredAndTwentyEighthDotted()
{
    return oneHundredAndTwentyEighthDotted;
}

double MillisecondValues::getOneHundredAndTwentyEighthTriplet()
{
    return oneHundredAndTwentyEighthTriplet;
}
