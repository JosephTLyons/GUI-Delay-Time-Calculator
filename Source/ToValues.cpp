//
//  ToValues.cpp
//  Lyons' Den Delay Time Calculator - App
//
//  Created by Joseph Lyons on 6/20/19.
//  Copyright © 2019 Lyons' Den. All rights reserved.
//

#include "ToValues.hpp"

double toMilliseconds (const double& tempo, const Note& note, const NoteModifier& noteModifier)
{
    // Set value for the quarter note normal here
    double millseconds = 60000 / tempo;

    switch (note)
    {
        case Note::whole:
            millseconds *= 4;
            break;

        case Note::half:
            millseconds *= 2;
            break;

        case Note::quarter:
            // Skip, this is the first calculation done at the top of the function
            break;

        case Note::v8th:
            millseconds /= 2;
            break;

        case Note::v16th:
            millseconds /= 4;
            break;

        case Note::v32nd:
            millseconds /= 8;
            break;

        case Note::v64th:
            millseconds /= 16;
            break;

        case Note::v128th:
            millseconds /= 32;
            break;
    }

    switch (noteModifier)
    {
        case NoteModifier::normal:
            // Skip, this is the first calculation done at the top of the function
            break;
            
        case NoteModifier::dotted:
            millseconds *= 1.5;
            break;

        case NoteModifier::triplet:
            millseconds *= (2 / 3.0f);
            break;
    }

    return millseconds;
}

double toHertz (const double& tempo, const Note& note, const NoteModifier& noteModifier)
{
    // Set value for the quarter note normal here
    double hertz = tempo / 60;

    switch (note)
    {
        case Note::whole:
            hertz /= 4;
            break;
        case Note::half:
            hertz /= 2;
            break;
        case Note::quarter:
            // Skip, this is the first calculation done at the top of the function
            break;
        case Note::v8th:
            hertz *= 2;
            break;
        case Note::v16th:
            hertz *= 4;
            break;
        case Note::v32nd:
            hertz *= 8;
            break;
        case Note::v64th:
            hertz *= 16;
            break;
        case Note::v128th:
            hertz *= 32;
            break;
    }

    switch (noteModifier)
    {
        case NoteModifier::normal:
            // Skip, this is the first calculation done at the top of the function
            break;
        case NoteModifier::dotted:
            hertz *= (2 / 3.0f);
            break;
        case NoteModifier::triplet:
            hertz *= 1.5;
            break;
    }

    return hertz;
}
