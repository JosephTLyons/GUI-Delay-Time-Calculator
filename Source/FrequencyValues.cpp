//
//  FrequencyValues.cpp
//  The Lyons' Den Delay Time Calculator
//
//  Created by Joseph Lyons on 5/9/17.
//
//

#include "FrequencyValues.hpp"

void FrequencyValues::calculateFrequencyValues(const double &input)
{
    tempo = input;
    
    // quarterNormal value must be calculated first, since other values depend on it
    quarterNormal                    = 0;
    
    wholeNormal                      = 0;
    wholeDotted                      = 0;
    wholeTriplet                     = 0;
    
    halfNormal                       = 0;
    halfDotted                       = 0;
    halfTriplet                      = 0;
    
    // quarterNormal
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
