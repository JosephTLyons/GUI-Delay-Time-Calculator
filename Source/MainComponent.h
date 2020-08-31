/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 6.0.1

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2020 - Raw Material Software Limited.

  ==============================================================================
*/

#pragma once

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
#include "Enums.h"
#include "TapTempo.hpp"
#include "BasicWindow.cpp"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class MainComponent  : public Component,
                       private Timer,
                       public juce::Button::Listener,
                       public juce::Slider::Listener,
                       public juce::Label::Listener
{
public:
    //==============================================================================
    MainComponent ();
    ~MainComponent() override;

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.

    void adjustTempo (const int &adjustmentValue);
    void setupLabelCustomFont();
    void launchURL (const char *hyperLink);
    bool userWantsStandardResolution();
    void coarseResolutionChosen();
    void fineResolutionChosen();
    void standardResolutionChosen();
    void engageResolutionSetting (const bool &isCoarseSelected,
                                  const bool &isFineSelected, const double &increment);
    void populateLabelsWithValues();
    void resetTapTempo();
    void buildInformationWindow();

    void timerCallback() override;

    void setTempoFromLabelValue (const std::unique_ptr<Label>& label,  const Note& note,
                                 const NoteModifier& noteModifier);
    bool setTempoSlider (const double &tempo);
    void msHzToggle (const bool& toggleMsOne);

    //[/UserMethods]

    void paint (juce::Graphics& g) override;
    void resized() override;
    void buttonClicked (juce::Button* buttonThatWasClicked) override;
    void sliderValueChanged (juce::Slider* sliderThatWasMoved) override;
    void labelTextChanged (juce::Label* labelThatHasChanged) override;
    void mouseEnter (const juce::MouseEvent& e) override;
    void mouseExit (const juce::MouseEvent& e) override;
    void mouseUp (const juce::MouseEvent& e) override;
    bool keyPressed (const juce::KeyPress& key) override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.

    TapTempo tapTempo;
    String tapCountString;
    SafePointer<BasicWindow> basicWindowSafePtr;

    Font typewriterFont;

    //[/UserVariables]

    //==============================================================================
    std::unique_ptr<juce::TextButton> doubleTempoButton;
    std::unique_ptr<juce::TextButton> halfTempoButton;
    std::unique_ptr<juce::Slider> tempoSlider;
    std::unique_ptr<juce::Label> delayTimeCalculatorLabel;
    std::unique_ptr<juce::Label> normalLabel;
    std::unique_ptr<juce::Label> dottedLabel;
    std::unique_ptr<juce::Label> tripletLabel;
    std::unique_ptr<juce::Label> wholeLabel;
    std::unique_ptr<juce::Label> halfLabel;
    std::unique_ptr<juce::Label> quarterLabel;
    std::unique_ptr<juce::Label> eighthLabel;
    std::unique_ptr<juce::Label> sixteenthLabel;
    std::unique_ptr<juce::Label> thirtySecondLabel;
    std::unique_ptr<juce::Label> sixtyFourthLabel;
    std::unique_ptr<juce::Label> oneHundreAndTwentyEighthLabel;
    std::unique_ptr<juce::TextButton> tapButton;
    std::unique_ptr<juce::Label> wholeNLabel;
    std::unique_ptr<juce::Label> wholeDLabel;
    std::unique_ptr<juce::Label> wholeTLabel;
    std::unique_ptr<juce::Label> halfNLabel;
    std::unique_ptr<juce::Label> halfDLabel;
    std::unique_ptr<juce::Label> halfTLabel;
    std::unique_ptr<juce::Label> quarterNLabel;
    std::unique_ptr<juce::Label> quarterDLabel;
    std::unique_ptr<juce::Label> quarterTLabel;
    std::unique_ptr<juce::Label> v8thNLabel;
    std::unique_ptr<juce::Label> v8thDLabel;
    std::unique_ptr<juce::Label> v8thTLabel;
    std::unique_ptr<juce::Label> v16thNLabel;
    std::unique_ptr<juce::Label> v16thDLabel;
    std::unique_ptr<juce::Label> v16thTLabel;
    std::unique_ptr<juce::Label> v32ndNLabel;
    std::unique_ptr<juce::Label> v32ndDLabel;
    std::unique_ptr<juce::Label> v32ndTLabel;
    std::unique_ptr<juce::Label> v64thNLabel;
    std::unique_ptr<juce::Label> v64thDLabel;
    std::unique_ptr<juce::Label> v64thTLabel;
    std::unique_ptr<juce::Label> v128thNLabel;
    std::unique_ptr<juce::Label> v128thDLabel;
    std::unique_ptr<juce::Label> v128thTLabel;
    std::unique_ptr<juce::ToggleButton> hzToggle;
    std::unique_ptr<juce::ToggleButton> msToggle;
    std::unique_ptr<juce::ToggleButton> coarseResolutionToggle;
    std::unique_ptr<juce::ToggleButton> fineResolutionToggle;
    std::unique_ptr<juce::Label> bpmLabel;
    std::unique_ptr<juce::Label> bpmValuesLabel;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

