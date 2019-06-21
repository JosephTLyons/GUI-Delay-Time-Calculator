//
//  ToTempo.hpp
//  The Lyons' Den Delay Time Calculator - App
//
//  Created by Joseph Lyons on 6/20/19.
//  Copyright © 2019 The Lyons' Den. All rights reserved.
//

#ifndef ToTempo_hpp
#define ToTempo_hpp

#include "Enums.h"

double millisecondsToTempo (const double& millseconds, const Note& note, const NoteModifier& noteModifier);
double hertzToTempo (const double& hertz, const Note& note, const NoteModifier& noteModifier);

#endif /* ToTempo_hpp */
