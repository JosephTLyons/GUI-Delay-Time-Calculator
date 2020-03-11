/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 5.4.7

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2017 - ROLI Ltd.

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
                       public Button::Listener,
                       public Slider::Listener,
                       public Label::Listener
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

    void paint (Graphics& g) override;
    void resized() override;
    void buttonClicked (Button* buttonThatWasClicked) override;
    void sliderValueChanged (Slider* sliderThatWasMoved) override;
    void labelTextChanged (Label* labelThatHasChanged) override;
    void mouseEnter (const MouseEvent& e) override;
    void mouseExit (const MouseEvent& e) override;
    void mouseUp (const MouseEvent& e) override;
    bool keyPressed (const KeyPress& key) override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.

    TapTempo tapTempo;
    String tapCountString;
    SafePointer<BasicWindow> basicWindowSafePtr;

    Font typewriterFont;

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
    std::unique_ptr<Label> wholeNLabel;
    std::unique_ptr<Label> wholeDLabel;
    std::unique_ptr<Label> wholeTLabel;
    std::unique_ptr<Label> halfNLabel;
    std::unique_ptr<Label> halfDLabel;
    std::unique_ptr<Label> halfTLabel;
    std::unique_ptr<Label> quarterNLabel;
    std::unique_ptr<Label> quarterDLabel;
    std::unique_ptr<Label> quarterTLabel;
    std::unique_ptr<Label> v8thNLabel;
    std::unique_ptr<Label> v8thDLabel;
    std::unique_ptr<Label> v8thTLabel;
    std::unique_ptr<Label> v16thNLabel;
    std::unique_ptr<Label> v16thDLabel;
    std::unique_ptr<Label> v16thTLabel;
    std::unique_ptr<Label> v32ndNLabel;
    std::unique_ptr<Label> v32ndDLabel;
    std::unique_ptr<Label> v32ndTLabel;
    std::unique_ptr<Label> v64thNLabel;
    std::unique_ptr<Label> v64thDLabel;
    std::unique_ptr<Label> v64thTLabel;
    std::unique_ptr<Label> v128thNLabel;
    std::unique_ptr<Label> v128thDLabel;
    std::unique_ptr<Label> v128thTLabel;
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

