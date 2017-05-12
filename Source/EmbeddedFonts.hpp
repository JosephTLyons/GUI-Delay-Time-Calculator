//
//  EmbeddedFonts.hpp
//  The Lyons' Den Delay Time Calculator
//
//  Created by Joseph Lyons on 5/9/17.
//
//

#ifndef EmbeddedFonts_hpp
#define EmbeddedFonts_hpp

#include "../JuceLibraryCode/JuceHeader.h"

// Dismiss this file until future versions that will have embedded fonts

class EmbeddedFonts
{
private:
    static ScopedPointer<EmbeddedFonts> instance_;
    Font calistoMT;
    
public:
    EmbeddedFonts();
    
    static EmbeddedFonts* instance()
    {
        static EmbeddedFonts instance;
        return &instance;
    }
    
    Font& getCalistoMT();
};

//struct CalistoMT
//{
//    Font font;
//    
//    CalistoMT()
//    {
//        Typeface::Ptr ptr = Typeface::createSystemTypefaceFor(BinaryData::Calisto_MT,
//                                                              BinaryData::Calisto_MTSize);
//        
//        font = Font(ptr);
//    }
//};


#endif /* EmbeddedFonts_hpp */
