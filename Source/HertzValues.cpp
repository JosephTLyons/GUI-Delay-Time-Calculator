//
//  FrequencyValues.cpp
//  The Lyons' Den Delay Time Calculator
//
//  Created by Joseph Lyons on 5/9/17.
//
//

#include "HertzValues.hpp"

void HertzValues::calculateHertzValues(const double &input)
{
    tempo = input;
    
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
