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
    float tempo;
    
    float whole;
    float half;
    float quarter;
    float eighth;
    float sixteenth;
    float thirtySecond;
    float sixtyFourth;
    float oneHundredAndTwentyEighth;
    
    float dotted;
    float triplet;
    
    
public:
    DelayTime();
    
    void setTempo(const float &input);
    void calculateDelayTimes();
    
    float getWholeNormal();
    float getWholeDottedNormal();
};

#endif /* DelayTime_hpp */
