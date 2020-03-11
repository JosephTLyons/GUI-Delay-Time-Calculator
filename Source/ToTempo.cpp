//
//  ToTempo.cpp
//  The Lyons' Den Delay Time Calculator - App
//
//  Created by Joseph Lyons on 6/20/19.
//  Copyright © 2019 The Lyons' Den. All rights reserved.
//

#include "ToTempo.hpp"

double millisecondsToTempo (const double& milliseconds, const Note& note,
                            const NoteModifier& noteModifier)
{
    // Set value for the quarter note normal here
    double tempo = 60000 / milliseconds;

    switch (note)
    {
        case Note::whole:
            tempo *= 4;
            break;

        case Note::half:
            tempo *= 2;
            break;

        case Note::quarter:
            // Skip, this is the first calculation done at the top of the function
            break;

        case Note::v8th:
            tempo /= 2;
            break;

        case Note::v16th:
            tempo /= 4;
            break;

        case Note::v32nd:
            tempo /= 8;
            break;

        case Note::v64th:
            tempo /= 16;
            break;

        case Note::v128th:
            tempo /= 32;
            break;
    }

    switch (noteModifier)
    {
        case NoteModifier::normal:
            // Skip, this is the first calculation done at the top of the function
            break;

        case NoteModifier::dotted:
            tempo *= 1.5;
            break;

        case NoteModifier::triplet:
            tempo *= (2 / 3.0f);
            break;
    }

    return tempo;
}

double hertzToTempo (const double& hertz, const Note& note, const NoteModifier& noteModifier)
{
    // Set value for the quarter note normal here
    double tempo = 60 * hertz;

    switch (note)
    {
        case Note::whole:
            tempo *= 4;
            break;
        case Note::half:
            tempo *= 2;
            break;
        case Note::quarter:
            // Skip, this is the first calculation done at the top of the function
            break;
        case Note::v8th:
            tempo /= 2;
            break;
        case Note::v16th:
            tempo /= 4;
            break;
        case Note::v32nd:
            tempo /= 8;
            break;
        case Note::v64th:
            tempo /= 16;
            break;
        case Note::v128th:
            tempo /= 32;
            break;
    }

    switch (noteModifier)
    {
        case NoteModifier::normal:
            // Skip, this is the first calculation done at the top of the function
            break;
        case NoteModifier::dotted:
            tempo /= (2 / 3.0f);
            break;
        case NoteModifier::triplet:
            tempo /= 1.5;
            break;
    }

    return tempo;
}
