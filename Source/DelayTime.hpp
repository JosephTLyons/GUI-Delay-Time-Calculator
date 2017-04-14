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
    
    int   intervalChosen;
    enum  intervals
    {
        wholeNote = 1,
        halfNote,
        quarterNote,
        eigthNote,
        sixteenthNote,
        thirtySecondNote,
        sixtyForthNote
    };
    
    int   valueModificationChosen;
    enum  valueModification
    {
        normal = 1,
        dotted,
        triplet
    };
    
public:
    DelayTime();
    
    void setTempo(const float &input);
    float getDelayTime();
    int getIntervalChosen();
    int getValueModificationChosen();
    void calculateDelayTime();
};

#endif /* DelayTime_hpp */
