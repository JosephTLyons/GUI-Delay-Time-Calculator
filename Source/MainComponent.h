/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 5.2.0

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

#pragma once

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
#include "MillisecondValues.hpp"
#include "HertzValues.hpp"
#include "TapTempo.hpp"
#include "BasicWindow.cpp"
#include "EmbeddedFonts.hpp"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class MainComponent  : public Component,
                       public Button::Listener,
                       public Slider::Listener
{
public:
    //==============================================================================
    MainComponent ();
    ~MainComponent();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.

    bool keyPressed (const juce::KeyPress &key) override;
    void roundTempo();
    void resolutionSetting (const bool &isCoarseSelected, const bool &isStandardSelected,
                            const bool &isFineSelected, const double &increment);
    void populateFieldsWithMillisecondValues();
    void populateFieldsWithHertzValues();
    void setupLabelCustomFont();


    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;
    void buttonClicked (Button* buttonThatWasClicked) override;
    void sliderValueChanged (Slider* sliderThatWasMoved) override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.

    MillisecondValues millisecondValuesObject;
    HertzValues hertzValuesObject;
    TapTempo tapTempoObject;
    SafePointer<BasicWindow> basicWindow;
    EmbeddedFonts customFont;

    //[/UserVariables]

    //==============================================================================
    ScopedPointer<TextButton> doubleTempoButton;
    ScopedPointer<TextButton> halfTempoButton;
    ScopedPointer<Slider> tempoSlider;
    ScopedPointer<Label> delayTimeCalculatorLabel;
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
    ScopedPointer<TextButton> tapButton;
    ScopedPointer<TextButton> resetButton;
    ScopedPointer<Label> wholeNormalLabel;
    ScopedPointer<Label> wholeDottedLabel;
    ScopedPointer<Label> wholeTripletLabel;
    ScopedPointer<Label> halfNormalLabel;
    ScopedPointer<Label> halfDottedLabel;
    ScopedPointer<Label> halfTripletLabel;
    ScopedPointer<Label> quarterNormalLabel;
    ScopedPointer<Label> quarterDottedLabel;
    ScopedPointer<Label> quarterTripletLabel;
    ScopedPointer<Label> eighthNormalLabel;
    ScopedPointer<Label> eighthDottedLabel;
    ScopedPointer<Label> eighthTripletLabel;
    ScopedPointer<Label> sixteenthNormalLabel;
    ScopedPointer<Label> sixteenthDottedLabel;
    ScopedPointer<Label> sixteenthTripletLabel;
    ScopedPointer<Label> thirtySecondNormalLabel;
    ScopedPointer<Label> thirtySecondDottedLabel;
    ScopedPointer<Label> thirtySecondTripletLabel;
    ScopedPointer<Label> sixtyFourthNormalLabel;
    ScopedPointer<Label> sixtyFourthDottedLabel;
    ScopedPointer<Label> sixtyFourthTripletLabel;
    ScopedPointer<Label> oneTwentyEighthNormalLabel;
    ScopedPointer<Label> oneTwentyEighthDottedLabel;
    ScopedPointer<Label> oneTwentyEighthTripletLabel;
    ScopedPointer<TextButton> emailMeButton;
    ScopedPointer<TextButton> donateButton;
    ScopedPointer<TextButton> facebookButton;
    ScopedPointer<TextButton> theCodeButton;
    ScopedPointer<TextButton> informationButton;
    ScopedPointer<ToggleButton> hzToggle;
    ScopedPointer<ToggleButton> msToggle;
    ScopedPointer<Label> resolutionLabel;
    ScopedPointer<ToggleButton> coarseResolutionToggle;
    ScopedPointer<ToggleButton> standardResolutionToggle;
    ScopedPointer<ToggleButton> fineResolutionToggle;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};

//[EndFile] You can add extra defines here...
//[/EndFile]
