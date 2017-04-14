//
//  DelayTime.cpp
//  Delay Time Calculator
//
//  Created by Joseph Lyons on 4/14/17.
//
//

#include "DelayTime.hpp"

DelayTime::DelayTime()
{
    tempo                   = 0;
    delayTime               = 0;
    intervalChosen          = quarterNote;
    valueModificationChosen = normal;
}

void DelayTime::setTempo(const float &input)
{
    tempo = input;
}

void DelayTime::setIntervalChosen(const int &input)
{
    intervalChosen = input;
}

void DelayTime::setValueModificationChosen(const int &input)
{
    valueModificationChosen = input;
}

int DelayTime::getIntervalChosen()
{
    return intervalChosen;
}

int DelayTime::getValueModificationChosen()
{
    return valueModificationChosen;
}

float DelayTime::calculateDelayTime()
{
    const int milliseconds = 60000;
    
    delayTime = milliseconds / tempo;
    calculateDelayTimeBasedOnInterval();
    calculateDelayTiemBasedOnModification();
    
    return delayTime;
}

void DelayTime::calculateDelayTimeBasedOnInterval()
{
    if(intervalChosen == wholeNote)
    {
        delayTime *= 4;
    }
    
    else if(intervalChosen == halfNote)
    {
        delayTime *= 2;
    }
    
    else if(intervalChosen == quarterNote)
    {
        // Do nothing
    }
    
    else if(intervalChosen == eigthNote)
    {
        delayTime /= 2;
    }
    
    else if(intervalChosen == sixteenthNote)
    {
        delayTime /= 4;
    }

    else if(intervalChosen == thirtySecondNote)
    {
        delayTime /= 8;
    }
    
    else if(intervalChosen == sixtyForthNote)
    {
        delayTime /= 16;
    }
}

void DelayTime::calculateDelayTiemBasedOnModification()
{
    if(valueModificationChosen == normal)
    {
        // Do Nothing
    }
    
    else if(valueModificationChosen == dotted)
    {
        delayTime *= 1.5;
    }
    
    else if(valueModificationChosen == triplet)
    {
        delayTime *= ((float) 2 / 3);
    }
}


