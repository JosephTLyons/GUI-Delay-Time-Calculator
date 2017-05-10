//
//  MillisecondValues.hpp
//  Delay Time Calculator
//
//  Created by Joseph Lyons on 4/14/17.
//
//

#ifndef MillisecondValues_hpp
#define MillisecondValues_hpp

class MillisecondValues
{
private:
    double tempo;
    
    double wholeNormal;
    double wholeDotted;
    double wholeTriplet;
    
    double halfNormal;
    double halfDotted;
    double halfTriplet;
    
    double quarterNormal;
    double quarterDotted;
    double quarterTriplet;
    
    double eighthNormal;
    double eighthDotted;
    double eighthTriplet;
    
    double sixteenthNormal;
    double sixteenthDotted;
    double sixteenthTriplet;
    
    double thirtySecondNormal;
    double thirtySecondDotted;
    double thirtySecondTriplet;
    
    double sixtyFourthNormal;
    double sixtyFourthDotted;
    double sixtyFourthTriplet;
    
    double oneHundredAndTwentyEighthNormal;
    double oneHundredAndTwentyEighthDotted;
    double oneHundredAndTwentyEighthTriplet;
    
    double dotted;
    double triplet;
    
public:
    MillisecondValues();
    
    void calculate(const double &input);
    
    double getWholeNormal();
    double getWholeDotted();
    double getWholeTriplet();
    
    double getHalfNormal();
    double getHalfDotted();
    double getHalfTriplet();
    
    double getQuarterNormal();
    double getQuarterDotted();
    double getQuarterTriplet();
    
    double getEighthNormal();
    double getEighthDotted();
    double getEighthTriplet();
    
    double getSixteenthNormal();
    double getSixteenthDotted();
    double getSixteenthTriplet();
    
    double getThirtySecondNormal();
    double getThirtySecondDotted();
    double getThirtySecondTriplet();
    
    double getSixtyFouthNormal();
    double getSixtyFouthDotted();
    double getSixtyFouthTriplet();
    
    double getOneHundredAndTwentyEighthNormal();
    double getOneHundredAndTwentyEighthDotted();
    double getOneHundredAndTwentyEighthTriplet();
};

#endif /* MillisecondValues_hpp */
