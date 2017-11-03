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
    double tempo;
    unsigned long int tapCount;
    
    int64 startingTimeInMilliseconds;
    int64 endingTimeInMilliseconds;
    int64 timeElapsedInMilliseconds;
    
    double seconds;
    double minutes;
    
    int millisecondsInASecond;
    int secondsInAMinute;
    
    Time juceTimeObject;
    
    // Private Member Functions
    void calculateTimeElapsed();
    void getTimeElapsedInMinutes();
    
public:
    TapTempo();
    
    void resetMainCalculationHolders();
    double calculateTempo();
    unsigned long int getTapCount() const;
};

#endif /* TapTempo_hpp */
