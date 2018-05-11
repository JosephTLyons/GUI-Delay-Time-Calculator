/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 5.3.2

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2017 - ROLI Ltd.

  ==============================================================================
*/

#pragma once

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
#include "Values.hpp"
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
                       public Slider::Listener,
                       public Label::Listener
{
public:
    //==============================================================================
    MainComponent ();
    ~MainComponent();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.

    bool keyPressed (const juce::KeyPress &key) override;
    void adjustTempo (const int &adjustmentValue);
    void setupLabelCustomFont();
    void launchURL (const char *hyperLink);
    void roundTempo();
    bool userWantsStandardResolution();
    void coarseResolutionChosen();
    void fineResolutionChosen();
    void standardResolutionChosen();
    void engageResolutionSetting (const bool &isCoarseSelected,
                                  const bool &isFineSelected, const double &increment);
    void setBpmLabelValue();
    void updateValuesAndFields();
    void populateFieldsWithValues();
    void resetTapTempo();
    void buildInformationWindow();

    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;
    void buttonClicked (Button* buttonThatWasClicked) override;
    void sliderValueChanged (Slider* sliderThatWasMoved) override;
    void labelTextChanged (Label* labelThatHasChanged) override;
    void mouseMove (const MouseEvent& e) override;
    void mouseEnter (const MouseEvent& e) override;
    void mouseExit (const MouseEvent& e) override;
    void mouseUp (const MouseEvent& e) override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.

    Values values;
    TapTempo tapTempo;
    SafePointer<BasicWindow> basicWindow;
    EmbeddedFonts customFont;

    //[/UserVariables]

    //==============================================================================
    std::unique_ptr<TextButton> doubleTempoButton;
    std::unique_ptr<TextButton> halfTempoButton;
    std::unique_ptr<Slider> tempoSlider;
    std::unique_ptr<Label> delayTimeCalculatorLabel;
    std::unique_ptr<Label> normalLabel;
    std::unique_ptr<Label> dottedLabel;
    std::unique_ptr<Label> tripletLabel;
    std::unique_ptr<Label> wholeLabel;
    std::unique_ptr<Label> halfLabel;
    std::unique_ptr<Label> quarterLabel;
    std::unique_ptr<Label> eighthLabel;
    std::unique_ptr<Label> sixteenthLabel;
    std::unique_ptr<Label> thirtySecondLabel;
    std::unique_ptr<Label> sixtyFourthLabel;
    std::unique_ptr<Label> oneHundreAndTwentyEighthLabel;
    std::unique_ptr<TextButton> tapButton;
    std::unique_ptr<Label> wholeNormalLabel;
    std::unique_ptr<Label> wholeDottedLabel;
    std::unique_ptr<Label> wholeTripletLabel;
    std::unique_ptr<Label> halfNormalLabel;
    std::unique_ptr<Label> halfDottedLabel;
    std::unique_ptr<Label> halfTripletLabel;
    std::unique_ptr<Label> quarterNormalLabel;
    std::unique_ptr<Label> quarterDottedLabel;
    std::unique_ptr<Label> quarterTripletLabel;
    std::unique_ptr<Label> eighthNormalLabel;
    std::unique_ptr<Label> eighthDottedLabel;
    std::unique_ptr<Label> eighthTripletLabel;
    std::unique_ptr<Label> sixteenthNormalLabel;
    std::unique_ptr<Label> sixteenthDottedLabel;
    std::unique_ptr<Label> sixteenthTripletLabel;
    std::unique_ptr<Label> thirtySecondNormalLabel;
    std::unique_ptr<Label> thirtySecondDottedLabel;
    std::unique_ptr<Label> thirtySecondTripletLabel;
    std::unique_ptr<Label> sixtyFourthNormalLabel;
    std::unique_ptr<Label> sixtyFourthDottedLabel;
    std::unique_ptr<Label> sixtyFourthTripletLabel;
    std::unique_ptr<Label> oneTwentyEighthNormalLabel;
    std::unique_ptr<Label> oneTwentyEighthDottedLabel;
    std::unique_ptr<Label> oneTwentyEighthTripletLabel;
    std::unique_ptr<ToggleButton> hzToggle;
    std::unique_ptr<ToggleButton> msToggle;
    std::unique_ptr<ToggleButton> coarseResolutionToggle;
    std::unique_ptr<ToggleButton> fineResolutionToggle;
    std::unique_ptr<Label> bpmLabel;
    std::unique_ptr<Label> bpmValuesLabel;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};

//[EndFile] You can add extra defines here...
//[/EndFile]
