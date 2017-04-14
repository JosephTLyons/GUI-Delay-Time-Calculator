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
        eighthNote,
        sixteenthNote,
        thirtySecondNote,
        sixtyForthNote,
        oneHundredAndTwenthyEighth
    };
    
    int   valueModificationChosen;
    enum  valueModification
    {
        normal = 1,
        dotted,
        triplet
    };
    
    // Private function members
    void calculateDelayTimeBasedOnInterval();
    void calculateDelayTiemBasedOnModification();
    
public:
    DelayTime();
    
    void setTempo(const float &input);
    void setIntervalChosen(const int &input);
    void setValueModificationChosen(const int &input);
    int getIntervalChosen();
    int getValueModificationChosen();
    float calculateDelayTime();
};

#endif /* DelayTime_hpp */
