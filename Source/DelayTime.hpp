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
    float delayTime;
    bool  isDotted;
    bool  isTriplet;
    int   intervalChosen;
    enum  intervals
    {
        wholeNote,
        halfNote,
        quarterNote,
        eigthNote,
        sixteenthNote,
        thirtySecondNote,
        sixtyForthNote
    };
    
public:
    DelayTime();
    
    void setTempo(const float &input);
    float getDelayTime();
    void calculateDelayTime();
};

#endif /* DelayTime_hpp */
