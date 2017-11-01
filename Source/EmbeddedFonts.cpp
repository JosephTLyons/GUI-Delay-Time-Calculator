//
//  EmbeddedFonts.cpp
//  The Lyons' Den Delay Time Calculator
//
//  Created by Joseph Lyons on 5/9/17.
//
//

// Dismiss this file until future versions that will have embedded fonts

#include "EmbeddedFonts.hpp"

EmbeddedFonts::EmbeddedFonts()
{
    calistoMT = Font(Typeface::createSystemTypefaceFor(BinaryData::CalistoMT_ttf,
                                                       BinaryData::CalistoMT_ttfSize));
}

Font& EmbeddedFonts::getCalistoMT()
{
    return calistoMT;
}
