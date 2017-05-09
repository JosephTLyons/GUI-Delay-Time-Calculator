//
//  BasicWindow.cpp
//  The Lyons' Den Delay Time Calculator
//
//  Created by Joseph Lyons on 5/9/17.
//
//

#include "../JuceLibraryCode/JuceHeader.h"

// I got this code entirely from the JUCE Windows DEMO
class BasicWindow : public DocumentWindow
{
private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (BasicWindow)
    
public:
    BasicWindow (const String& name, Colour backgroundColour, int buttonsNeeded)
    : DocumentWindow (name, backgroundColour, buttonsNeeded)
    {
    }
    
    void closeButtonPressed() override
    {
        delete this;
    }
};
