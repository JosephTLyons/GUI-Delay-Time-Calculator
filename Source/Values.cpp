//
//  MillisecondFrequencyValueBase.cpp
//  The Lyons' Den Delay Time Calculator
//
//  Created by Joseph Lyons on 5/9/17.
//
//

#include "Values.hpp"

Values::Values()
{
    wholeNormal    = 0;
    wholeDotted    = 0;
    wholeTriplet   = 0;
    
    halfNormal     = 0;
    halfDotted     = 0;
    halfTriplet    = 0;
    
    quarterNormal  = 0;
    quarterDotted  = 0;
    quarterTriplet = 0;
    
    v8thNormal     = 0;
    v8thDotted     = 0;
    v8thTriplet    = 0;
    
    v16thNormal    = 0;
    v16thDotted    = 0;
    v16thTriplet   = 0;
    
    v32Normal      = 0;
    v32ndDotted    = 0;
    v32ndTriplet   = 0;
    
    v64thNormal    = 0;
    v64thDotted    = 0;
    v64Triplet     = 0;
    
    v128thNormal   = 0;
    v128thDotted   = 0;
    v128thTriplet  = 0;
}

void Values::calculateMilliseconds (const double &tempo)
{
    // quarterNormal value must be calculated first, since other values depend on it
    quarterNormal  = 60000 / tempo;
    
    wholeNormal    = quarterNormal * 4;
    wholeDotted    = wholeNormal * 1.5;
    wholeTriplet   = wholeNormal * (2 / 3.0f);
    
    halfNormal     = quarterNormal * 2;
    halfDotted     = halfNormal * 1.5;
    halfTriplet    = halfNormal * (2 / 3.0f);
    
    // quarterNormal
    quarterDotted  = quarterNormal * 1.5;
    quarterTriplet = quarterNormal * (2 / 3.0f);
    
    v8thNormal     = quarterNormal / 2;
    v8thDotted     = v8thNormal * 1.5;
    v8thTriplet    = v8thNormal * (2 / 3.0f);
    
    v16thNormal    = quarterNormal / 4;
    v16thDotted    = v16thNormal * 1.5;
    v16thTriplet   = v16thNormal * (2 / 3.0f);
    
    v32Normal      = quarterNormal / 8;
    v32ndDotted    = v32Normal * 1.5;
    v32ndTriplet   = v32Normal * (2 / 3.0f);
    
    v64thNormal    = quarterNormal / 16;
    v64thDotted    = v64thNormal * 1.5;
    v64Triplet     = v64thNormal * (2 / 3.0f);
    
    v128thNormal   = quarterNormal / 32;
    v128thDotted   = v128thNormal * 1.5;
    v128thTriplet  = v128thNormal * (2 / 3.0f);
}

void Values::calculateHertz (const double &tempo)
{
    // quarterNormal value must be calculated first, since other values depend on it
    quarterNormal                    = tempo / 60;
    
    wholeNormal                      = quarterNormal / 4;
    wholeDotted                      = wholeNormal * (2 / 3.0f);
    wholeTriplet                     = wholeNormal * 1.5;
    
    halfNormal                       = quarterNormal / 2;
    halfDotted                       = halfNormal * (2 / 3.0f);
    halfTriplet                      = halfNormal * 1.5;
    
    // quarterNormal
    quarterDotted                    = quarterNormal * (2 / 3.0f);
    quarterTriplet = quarterNormal * 1.5;
    
    v8thNormal                     = quarterNormal * 2;
    v8thDotted                     = v8thNormal * (2 / 3.0f);
    v8thTriplet                    = v8thNormal * 1.5;
    
    v16thNormal                  = quarterNormal * 4;
    v16thDotted                  = v16thNormal * (2 / 3.0f);
    v16thTriplet                 = v16thNormal * 1.5;
    
    v32Normal               = quarterNormal * 8;
    v32ndDotted               = v32Normal * (2 / 3.0f);
    v32ndTriplet              = v32Normal * 1.5;
    
    v64thNormal                = quarterNormal * 16;
    v64thDotted                = v64thNormal * (2 / 3.0f);
    v64Triplet               = v64thNormal * 1.5;
    
    v128thNormal  = quarterNormal * 32;
    v128thDotted  = v128thNormal * (2 / 3.0f);
    v128thTriplet = v128thNormal * 1.5;
}

double Values::getWholeNormal() const
{
    return wholeNormal;
}

double Values::getWholeDotted() const
{
    return wholeDotted;
}

double Values::getWholeTriplet() const
{
    return wholeTriplet;
}

double Values::getHalfNormal() const
{
    return halfNormal;
}

double Values::getHalfDotted() const
{
    return halfDotted;
}

double Values::getHalfTriplet() const
{
    return halfTriplet;
}

double Values::getQuarterNormal() const
{
    return quarterNormal;
}

double Values::getQuarterDotted() const
{
    return quarterDotted;
}

double Values::getQuarterTriplet() const
{
    return quarterTriplet;
}

double Values::get8thNormal() const
{
    return v8thNormal;
}

double Values::get8thDotted() const
{
    return v8thDotted;
}

double Values::get8thTriplet() const
{
    return v8thTriplet;
}

double Values::get16thNormal() const
{
    return v16thNormal;
}

double Values::get16thDotted() const
{
    return v16thDotted;
}

double Values::get16thTriplet() const
{
    return v16thTriplet;
}

double Values::get32ndNormal() const
{
    return v32Normal;
}

double Values::get32ndDotted() const
{
    return v32ndDotted;
}

double Values::get32ndTriplet() const
{
    return v32ndTriplet;
}

double Values::get64thNormal() const
{
    return v64thNormal;
}

double Values::get64thDotted() const
{
    return v64thDotted;
}

double Values::get64thTriplet() const
{
    return v64Triplet;
}

double Values::get128thNormal() const
{
    return v128thNormal;
}

double Values::get128thDotted() const
{
    return v128thDotted;
}

double Values::get128thTriplet() const
{
    return v128thTriplet;
}
