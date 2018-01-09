//
//  MillisecondValues.cpp
//  Delay Time Calculator
//
//  Created by Joseph Lyons on 4/14/17.
//
//

#include "MillisecondValues.hpp"

MillisecondValues::~MillisecondValues() {}

void MillisecondValues::calculateValues (const double &input)
{
    tempo = input;
    
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
