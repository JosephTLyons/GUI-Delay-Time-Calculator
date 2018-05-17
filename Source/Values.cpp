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
    wholeN   = 0;
    wholeD   = 0;
    wholeT   = 0;
    
    halfN    = 0;
    halfD    = 0;
    halfT    = 0;
    
    quarterN = 0;
    quarterD = 0;
    quarterT = 0;
    
    v8thN    = 0;
    v8thD    = 0;
    v8thT    = 0;
    
    v16thN   = 0;
    v16thD   = 0;
    v16thT   = 0;
    
    v32ndN   = 0;
    v32ndD   = 0;
    v32ndT   = 0;
    
    v64thN   = 0;
    v64thD   = 0;
    v64thT   = 0;
    
    v128thN  = 0;
    v128thD  = 0;
    v128thT  = 0;
}

void Values::calculateMilliseconds (const double &tempo)
{
    // quarterN value must be calculated first, since other values depend on it
    quarterN = 60000 / tempo;
    
    wholeN   = quarterN * 4;
    wholeD   = wholeN * 1.5;
    wholeT   = wholeN * (2 / 3.0f);
    
    halfN    = quarterN * 2;
    halfD    = halfN * 1.5;
    halfT    = halfN * (2 / 3.0f);
    
    // quarterN
    quarterD = quarterN * 1.5;
    quarterT = quarterN * (2 / 3.0f);
    
    v8thN    = quarterN / 2;
    v8thD    = v8thN * 1.5;
    v8thT    = v8thN * (2 / 3.0f);
    
    v16thN   = quarterN / 4;
    v16thD   = v16thN * 1.5;
    v16thT   = v16thN * (2 / 3.0f);
    
    v32ndN   = quarterN / 8;
    v32ndD   = v32ndN * 1.5;
    v32ndT   = v32ndN * (2 / 3.0f);
    
    v64thN   = quarterN / 16;
    v64thD   = v64thN * 1.5;
    v64thT   = v64thN * (2 / 3.0f);
    
    v128thN  = quarterN / 32;
    v128thD  = v128thN * 1.5;
    v128thT  = v128thN * (2 / 3.0f);
}

void Values::calculateHertz (const double &tempo)
{
    // quarterN value must be calculated first, since other values depend on it
    quarterN = tempo / 60;
    
    wholeN   = quarterN / 4;
    wholeD   = wholeN * (2 / 3.0f);
    wholeT   = wholeN * 1.5;
    
    halfN    = quarterN / 2;
    halfD    = halfN * (2 / 3.0f);
    halfT    = halfN * 1.5;
    
    // quarterN
    quarterD = quarterN * (2 / 3.0f);
    quarterT = quarterN * 1.5;
    
    v8thN    = quarterN * 2;
    v8thD    = v8thN * (2 / 3.0f);
    v8thT    = v8thN * 1.5;
    
    v16thN   = quarterN * 4;
    v16thD   = v16thN * (2 / 3.0f);
    v16thT   = v16thN * 1.5;
    
    v32ndN   = quarterN * 8;
    v32ndD   = v32ndN * (2 / 3.0f);
    v32ndT   = v32ndN * 1.5;
    
    v64thN   = quarterN * 16;
    v64thD   = v64thN * (2 / 3.0f);
    v64thT   = v64thN * 1.5;
    
    v128thN  = quarterN * 32;
    v128thD  = v128thN * (2 / 3.0f);
    v128thT  = v128thN * 1.5;
}

double Values::getWholeN() const { return wholeN; }
double Values::getWholeD() const { return wholeD; }
double Values::getWholeT() const { return wholeT; }

double Values::getHalfN() const { return halfN; }
double Values::getHalfD() const { return halfD; }
double Values::getHalfT() const { return halfT; }

double Values::getQuarterN() const { return quarterN; }
double Values::getQuarterD() const { return quarterD; }
double Values::getQuarterT() const { return quarterT; }

double Values::get8thN() const { return v8thN; }
double Values::get8thD() const { return v8thD; }
double Values::get8thT() const { return v8thT; }

double Values::get16thN() const { return v16thN; }
double Values::get16thD() const { return v16thD; }
double Values::get16thT() const { return v16thT; }

double Values::get32ndN() const { return v32ndN; }
double Values::get32ndD() const { return v32ndD; }
double Values::get32ndT() const { return v32ndT; }

double Values::get64thN() const { return v64thN; }
double Values::get64thD() const { return v64thD; }
double Values::get64thT() const { return v64thT; }

double Values::get128thN() const { return v128thN; }
double Values::get128thD() const { return v128thD; }
double Values::get128thT() const { return v128thT; }
