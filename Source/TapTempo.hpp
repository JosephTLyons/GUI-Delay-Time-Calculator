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
    long int intervalCount;
    
    int64 startingTimeInMilliseconds;

    double minutes;
    
public:
    TapTempo();
    
    void resetMainCalculationHolders();
    double calculateTempo();
    unsigned long int getTapCount() const;
};

#endif /* TapTempo_hpp */
