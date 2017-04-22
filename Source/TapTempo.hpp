//
//  TapTempo.hpp
//  TapTempo Finder
//
//  Created by Joseph Lyons on 1/18/17.
//
//
#include "../JuceLibraryCode/JuceHeader.h"

#ifndef TapTempo_hpp
#define TapTempo_hpp

class TapTempo
{
private:
    float tempo;
    unsigned long int tapCount;
    
    int64 startingMillisecondHolder;
    int64 endingMillisecondHolder;
    int64 timeElapsed;
    
    double seconds;
    double minutes;
    
    int millisecondsInASecond;
    int secondsInAMinute;
    
    // Private Member Functions
    void calculateTimeElapsed();
    void getTimeElapsedInMinutes(const Time &juceTimeObject);
    
public:
    TapTempo();
    
    float calculateTempo();
    void resetMainCalculationHolders();
};

#endif /* TapTempo_hpp */
