//
//  MillisecondsHertzValueBase.hpp
//  The Lyons' Den Delay Time Calculator
//
//  Created by Joseph Lyons on 5/9/17.
//
//

#ifndef MillisecondsHertzValueBase_hpp
#define MillisecondsHertzValueBase_hpp

class Values
{
private:
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
    
public:
    Values();
    
    void calculateMilliseconds (const double &tempo);
    void calculateHertz (const double &tempo);
    
    double getWholeNormal() const;
    double getWholeDotted() const;
    double getWholeTriplet() const;
    
    double getHalfNormal() const;
    double getHalfDotted() const;
    double getHalfTriplet() const;
    
    double getQuarterNormal() const;
    double getQuarterDotted() const;
    double getQuarterTriplet() const;
    
    double getEighthNormal() const;
    double getEighthDotted() const;
    double getEighthTriplet() const;
    
    double getSixteenthNormal() const;
    double getSixteenthDotted() const;
    double getSixteenthTriplet() const;
    
    double getThirtySecondNormal() const;
    double getThirtySecondDotted() const;
    double getThirtySecondTriplet() const;
    
    double getSixtyFouthNormal() const;
    double getSixtyFouthDotted() const;
    double getSixtyFouthTriplet() const;
    
    double getOneHundredAndTwentyEighthNormal() const;
    double getOneHundredAndTwentyEighthDotted() const;
    double getOneHundredAndTwentyEighthTriplet() const;
};

#endif /* MillisecondsHertzValueBase */
