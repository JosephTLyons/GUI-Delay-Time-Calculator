//
//  BPM.hpp
//  BPM Finder
//
//  Created by Joseph Lyons on 1/18/17.
//
//
#include "../JuceLibraryCode/JuceHeader.h"

#ifndef TimeClass_hpp
#define TimeClass_hpp

class BPM
{
private:
    unsigned long int tapCount;
    int64 startingMillisecondHolder;
    int64 endingMillisecondHolder;
    int64 timeElapsed;
    
public:
    BPM();
    
    void incrementTapCount();
    
    unsigned long int getIntTapCount();
    void setIntTapCount(const unsigned long int &input);
    String getStringTapCount();
    
    void setStartingTime(const int64 &input);
    int64 getStartingTime();
    
    void setEndingTime(const int64 &input);
    int64 getEndingTime();
    
    void calculateTimeElapsed();
    int64 getTotalTimeElapsed();
};

#endif /* TIme_hpp */
