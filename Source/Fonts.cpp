//
//  Fonts.cpp
//  The Lyons' Den Delay Time Calculator
//
//  Created by Joseph Lyons on 5/9/17.
//
//

#include "Fonts.hpp"

Fonts::Fonts()
{
    calistoMT = Font(Typeface::createSystemTypefaceFor(BinaryData::Calisto_MT,
                                                       BinaryData::Calisto_MTSize));
}
