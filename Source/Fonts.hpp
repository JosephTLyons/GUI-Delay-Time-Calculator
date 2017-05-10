//
//  Fonts.hpp
//  The Lyons' Den Delay Time Calculator
//
//  Created by Joseph Lyons on 5/9/17.
//
//

#ifndef Fonts_hpp
#define Fonts_hpp

#include "../JuceLibraryCode/JuceHeader.h"

class Fonts
{
private:
    static ScopedPointer<Fonts> instance_;
    
    Font calistoMT;
    
public:
    Fonts();
    
    virtual ~Fonts() {}
    
    Font& getCalistoMT() { return calistoMT; }
    
    static Fonts* instance()
    {
        static Fonts instance;
        
        return &instance;
    }
};


#endif /* Fonts_hpp */
