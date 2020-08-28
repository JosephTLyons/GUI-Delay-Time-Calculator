//
//  ToValues.hpp
//  Lyons' Den Delay Time Calculator - App
//
//  Created by Joseph Lyons on 6/20/19.
//  Copyright © 2019 Lyons' Den. All rights reserved.
//

#ifndef ToValues_hpp
#define ToValues_hpp

#include "Enums.h"

double toMilliseconds (const double& tempo, const Note& note, const NoteModifier& noteModifier);
double toHertz (const double& tempo, const Note& note, const NoteModifier& noteModifier);

#endif /* ToValues_hpp */
