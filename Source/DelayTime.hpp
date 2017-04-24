//
//  DelayTime.hpp
//  Delay Time Calculator
//
//  Created by Joseph Lyons on 4/14/17.
//
//

#ifndef DelayTime_hpp
#define DelayTime_hpp

class DelayTime
{
private:
    double tempo;
    
    double whole;
    double half;
    double quarter;
    double eighth;
    double sixteenth;
    double thirtySecond;
    double sixtyFourth;
    double oneHundredAndTwentyEighth;
    
    double dotted;
    double triplet;
    
    
public:
    DelayTime();
    
    void setTempo(const double &input);
    void calculateDelayTimes();
    
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

#endif /* DelayTime_hpp */
