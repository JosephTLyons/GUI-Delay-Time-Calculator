/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 5.0.1

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

#pragma once

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
#include "DelayTime.hpp"
#include "TapTempo.hpp"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class MainComponent  : public Component,
                       public ButtonListener,
                       public SliderListener
{
public:
    //==============================================================================
    MainComponent ();
    ~MainComponent();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;
    void buttonClicked (Button* buttonThatWasClicked) override;
    void sliderValueChanged (Slider* sliderThatWasMoved) override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.

    DelayTime delayTimeObject;
    int textEditorFontSize;
    TapTempo tapTempo;

    //[/UserVariables]

    //==============================================================================
    ScopedPointer<TextButton> doubleTempoButton;
    ScopedPointer<TextButton> halfTempoButton;
    ScopedPointer<HyperlinkButton> emailHyperlink;
    ScopedPointer<Slider> tempoSlider;
    ScopedPointer<Label> theLyonsDenDelayTimeCalculator;
    ScopedPointer<HyperlinkButton> donateHyperlink;
    ScopedPointer<Label> normalLabel;
    ScopedPointer<Label> dottedLabel;
    ScopedPointer<Label> tripletLabel;
    ScopedPointer<Label> wholeLabel;
    ScopedPointer<Label> halfLabel;
    ScopedPointer<Label> quarterLabel;
    ScopedPointer<Label> eighthLabel;
    ScopedPointer<Label> sixteenthLabel;
    ScopedPointer<Label> thirtySecondLabel;
    ScopedPointer<Label> sixtyFourthLabel;
    ScopedPointer<Label> oneHundreAndTwentyEighthLabel;
    ScopedPointer<TextEditor> quarterDottedEditor;
    ScopedPointer<TextEditor> quarterTripletEditor;
    ScopedPointer<TextEditor> eighthNormalEditor;
    ScopedPointer<TextEditor> eighthDottedEditor;
    ScopedPointer<TextEditor> eighthTripletEditor;
    ScopedPointer<TextEditor> sixteenthNormalEditor;
    ScopedPointer<TextEditor> sixteenthDottedEditor;
    ScopedPointer<TextEditor> sixteenthTripletEditor;
    ScopedPointer<TextEditor> thirtySecondNormalEditor;
    ScopedPointer<TextEditor> thirtySecondDottedEditor;
    ScopedPointer<TextEditor> thirtySecondTripletEditor;
    ScopedPointer<TextEditor> sixtyFourthNormalEditor;
    ScopedPointer<TextEditor> sixtyFourthDottedEditor;
    ScopedPointer<TextEditor> sixtyFourthTripletEditor;
    ScopedPointer<TextEditor> oneTwentyEighthNormalEditor;
    ScopedPointer<TextEditor> oneTwentyEighthDottedEditor;
    ScopedPointer<TextEditor> oneTwentyEighthTripletEditor;
    ScopedPointer<TextButton> tapButton;
    ScopedPointer<TextButton> resetButton;
    ScopedPointer<Label> versionNumberLabel;
    ScopedPointer<TextEditor> versionNumberEditor;
    ScopedPointer<Label> wholeNormalLabel;
    ScopedPointer<Label> wholeDottedLabel;
    ScopedPointer<Label> wholeTripletLabel;
    ScopedPointer<Label> halfNormalLabel;
    ScopedPointer<Label> halfDottedLabel;
    ScopedPointer<Label> halfTripletLabel;
    ScopedPointer<Label> quarterNormalLabel;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};

//[EndFile] You can add extra defines here...
//[/EndFile]
