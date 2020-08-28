//
//  Enums.h
//  Lyons' Den Delay Time Calculator
//
//  Created by Joseph Lyons on 6/20/19.
//  Copyright © 2019 Lyons' Den. All rights reserved.
//

#ifndef Enums_h
#define Enums_h

enum class Note
{
    whole,
    half,
    quarter,
    v8th,
    v16th,
    v32nd,
    v64th,
    v128th,
};

enum class NoteModifier
{
    normal,
    dotted,
    triplet,
};

#endif /* Enums_h */
