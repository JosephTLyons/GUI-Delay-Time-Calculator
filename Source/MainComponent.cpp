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

//[Headers] You can add your own extra header files here...
#include "InformationComponent.h"
#include <ctype.h>
//[/Headers]

#include "MainComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
MainComponent::MainComponent ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    addAndMakeVisible (doubleTempoButton = new TextButton ("doubleTempoButton"));
    doubleTempoButton->setButtonText (TRANS("2x"));
    doubleTempoButton->addListener (this);
    doubleTempoButton->setColour (TextButton::buttonColourId, Colour (0xffadaaaa));
    doubleTempoButton->setColour (TextButton::textColourOffId, Colour (0xff353535));

    addAndMakeVisible (halfTempoButton = new TextButton ("halfTempoButton"));
    halfTempoButton->setButtonText (TRANS("1/2x"));
    halfTempoButton->addListener (this);
    halfTempoButton->setColour (TextButton::buttonColourId, Colour (0xffadaaaa));
    halfTempoButton->setColour (TextButton::textColourOffId, Colour (0xff353535));

    addAndMakeVisible (tempoSlider = new Slider ("tempoSlider"));
    tempoSlider->setRange (1, 1000, 0.1);
    tempoSlider->setSliderStyle (Slider::LinearHorizontal);
    tempoSlider->setTextBoxStyle (Slider::TextBoxLeft, false, 50, 20);
    tempoSlider->setColour (Slider::backgroundColourId, Colours::black);
    tempoSlider->setColour (Slider::thumbColourId, Colours::white);
    tempoSlider->setColour (Slider::trackColourId, Colour (0xffadaaaa));
    tempoSlider->setColour (Slider::textBoxTextColourId, Colours::white);
    tempoSlider->setColour (Slider::textBoxBackgroundColourId, Colour (0xff353535));
    tempoSlider->setColour (Slider::textBoxHighlightColourId, Colour (0xffadaaaa));
    tempoSlider->setColour (Slider::textBoxOutlineColourId, Colour (0xff353535));
    tempoSlider->addListener (this);
    tempoSlider->setSkewFactor (0.5);

    addAndMakeVisible (delayTimeCalculatorLabel = new Label ("delayTimeCalculatorLabel",
                                                             TRANS("Delay Time Calculator")));
    delayTimeCalculatorLabel->setFont (Font ("Arial", 47.40f, Font::plain).withTypefaceStyle ("Regular").withExtraKerningFactor (0.095f));
    delayTimeCalculatorLabel->setJustificationType (Justification::centred);
    delayTimeCalculatorLabel->setEditable (false, false, false);
    delayTimeCalculatorLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    delayTimeCalculatorLabel->setColour (TextEditor::textColourId, Colours::black);
    delayTimeCalculatorLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (normalLabel = new Label ("normalLabel",
                                                TRANS("Normal\n")));
    normalLabel->setFont (Font ("Arial", 30.00f, Font::plain).withTypefaceStyle ("Regular"));
    normalLabel->setJustificationType (Justification::centredLeft);
    normalLabel->setEditable (false, false, false);
    normalLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    normalLabel->setColour (TextEditor::textColourId, Colours::black);
    normalLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (dottedLabel = new Label ("dottedLabel",
                                                TRANS("Dotted")));
    dottedLabel->setFont (Font ("Arial", 30.00f, Font::plain).withTypefaceStyle ("Regular"));
    dottedLabel->setJustificationType (Justification::centredLeft);
    dottedLabel->setEditable (false, false, false);
    dottedLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    dottedLabel->setColour (TextEditor::textColourId, Colours::black);
    dottedLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (tripletLabel = new Label ("tripletLabel",
                                                 TRANS("Triplet")));
    tripletLabel->setFont (Font ("Arial", 30.00f, Font::plain).withTypefaceStyle ("Regular"));
    tripletLabel->setJustificationType (Justification::centredLeft);
    tripletLabel->setEditable (false, false, false);
    tripletLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    tripletLabel->setColour (TextEditor::textColourId, Colours::black);
    tripletLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (wholeLabel = new Label ("wholeLabel",
                                               TRANS("1:")));
    wholeLabel->setFont (Font ("Arial", 30.00f, Font::plain).withTypefaceStyle ("Regular"));
    wholeLabel->setJustificationType (Justification::centredLeft);
    wholeLabel->setEditable (false, false, false);
    wholeLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    wholeLabel->setColour (TextEditor::textColourId, Colours::black);
    wholeLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (halfLabel = new Label ("halfLabel",
                                              TRANS("1/2:")));
    halfLabel->setFont (Font ("Arial", 30.00f, Font::plain).withTypefaceStyle ("Regular"));
    halfLabel->setJustificationType (Justification::centredLeft);
    halfLabel->setEditable (false, false, false);
    halfLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    halfLabel->setColour (TextEditor::textColourId, Colours::black);
    halfLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (quarterLabel = new Label ("quarterLabel",
                                                 TRANS("1/4:")));
    quarterLabel->setFont (Font ("Arial", 30.00f, Font::plain).withTypefaceStyle ("Regular"));
    quarterLabel->setJustificationType (Justification::centredLeft);
    quarterLabel->setEditable (false, false, false);
    quarterLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    quarterLabel->setColour (TextEditor::textColourId, Colours::black);
    quarterLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (eighthLabel = new Label ("eighthLabel",
                                                TRANS("1/8:")));
    eighthLabel->setFont (Font ("Arial", 30.00f, Font::plain).withTypefaceStyle ("Regular"));
    eighthLabel->setJustificationType (Justification::centredLeft);
    eighthLabel->setEditable (false, false, false);
    eighthLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    eighthLabel->setColour (TextEditor::textColourId, Colours::black);
    eighthLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (sixteenthLabel = new Label ("sixteenthLabel",
                                                   TRANS("1/16:")));
    sixteenthLabel->setFont (Font ("Arial", 30.00f, Font::plain).withTypefaceStyle ("Regular"));
    sixteenthLabel->setJustificationType (Justification::centredLeft);
    sixteenthLabel->setEditable (false, false, false);
    sixteenthLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    sixteenthLabel->setColour (TextEditor::textColourId, Colours::black);
    sixteenthLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (thirtySecondLabel = new Label ("thirtySecondLabel",
                                                      TRANS("1/32:")));
    thirtySecondLabel->setFont (Font ("Arial", 30.00f, Font::plain).withTypefaceStyle ("Regular"));
    thirtySecondLabel->setJustificationType (Justification::centredLeft);
    thirtySecondLabel->setEditable (false, false, false);
    thirtySecondLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    thirtySecondLabel->setColour (TextEditor::textColourId, Colours::black);
    thirtySecondLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (sixtyFourthLabel = new Label ("sixtyFourthLabel",
                                                     TRANS("1/64:")));
    sixtyFourthLabel->setFont (Font ("Arial", 30.00f, Font::plain).withTypefaceStyle ("Regular"));
    sixtyFourthLabel->setJustificationType (Justification::centredLeft);
    sixtyFourthLabel->setEditable (false, false, false);
    sixtyFourthLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    sixtyFourthLabel->setColour (TextEditor::textColourId, Colours::black);
    sixtyFourthLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (oneHundreAndTwentyEighthLabel = new Label ("oneHundreAndTwentyEighthLabel",
                                                                  TRANS("1/128:")));
    oneHundreAndTwentyEighthLabel->setFont (Font ("Arial", 30.00f, Font::plain).withTypefaceStyle ("Regular"));
    oneHundreAndTwentyEighthLabel->setJustificationType (Justification::centredLeft);
    oneHundreAndTwentyEighthLabel->setEditable (false, false, false);
    oneHundreAndTwentyEighthLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    oneHundreAndTwentyEighthLabel->setColour (TextEditor::textColourId, Colours::black);
    oneHundreAndTwentyEighthLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (tapButton = new TextButton ("tapButton"));
    tapButton->setButtonText (TRANS("Tap Tempo"));
    tapButton->addListener (this);
    tapButton->setColour (TextButton::buttonColourId, Colour (0xffadaaaa));
    tapButton->setColour (TextButton::textColourOffId, Colour (0xff353535));

    addAndMakeVisible (resetButton = new TextButton ("resetButton"));
    resetButton->setButtonText (TRANS("Reset Tap Tempo"));
    resetButton->addListener (this);
    resetButton->setColour (TextButton::buttonColourId, Colour (0xffadaaaa));
    resetButton->setColour (TextButton::textColourOffId, Colour (0xff353535));

    addAndMakeVisible (wholeNormalLabel = new Label ("new label",
                                                     String()));
    wholeNormalLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    wholeNormalLabel->setJustificationType (Justification::centredLeft);
    wholeNormalLabel->setEditable (false, false, false);
    wholeNormalLabel->setColour (TextEditor::textColourId, Colours::black);
    wholeNormalLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (wholeDottedLabel = new Label ("wholeDottedLabel",
                                                     String()));
    wholeDottedLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    wholeDottedLabel->setJustificationType (Justification::centredLeft);
    wholeDottedLabel->setEditable (false, false, false);
    wholeDottedLabel->setColour (TextEditor::textColourId, Colours::black);
    wholeDottedLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (wholeTripletLabel = new Label ("wholeTripletLabel",
                                                      TRANS("\n")));
    wholeTripletLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    wholeTripletLabel->setJustificationType (Justification::centredLeft);
    wholeTripletLabel->setEditable (false, false, false);
    wholeTripletLabel->setColour (TextEditor::textColourId, Colours::black);
    wholeTripletLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (halfNormalLabel = new Label ("halfNormalLabel",
                                                    String()));
    halfNormalLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    halfNormalLabel->setJustificationType (Justification::centredLeft);
    halfNormalLabel->setEditable (false, false, false);
    halfNormalLabel->setColour (TextEditor::textColourId, Colours::black);
    halfNormalLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (halfDottedLabel = new Label ("halfDottedLabel",
                                                    String()));
    halfDottedLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    halfDottedLabel->setJustificationType (Justification::centredLeft);
    halfDottedLabel->setEditable (false, false, false);
    halfDottedLabel->setColour (TextEditor::textColourId, Colours::black);
    halfDottedLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (halfTripletLabel = new Label ("halfTripletLabel",
                                                     String()));
    halfTripletLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    halfTripletLabel->setJustificationType (Justification::centredLeft);
    halfTripletLabel->setEditable (false, false, false);
    halfTripletLabel->setColour (TextEditor::textColourId, Colours::black);
    halfTripletLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (quarterNormalLabel = new Label ("quarterNormalLabel",
                                                       String()));
    quarterNormalLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    quarterNormalLabel->setJustificationType (Justification::centredLeft);
    quarterNormalLabel->setEditable (false, false, false);
    quarterNormalLabel->setColour (TextEditor::textColourId, Colours::black);
    quarterNormalLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (quarterDottedLabel = new Label ("quarterDottedLabel",
                                                       String()));
    quarterDottedLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    quarterDottedLabel->setJustificationType (Justification::centredLeft);
    quarterDottedLabel->setEditable (false, false, false);
    quarterDottedLabel->setColour (TextEditor::textColourId, Colours::black);
    quarterDottedLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (quarterTripletLabel = new Label ("quarterTripletLabel",
                                                        String()));
    quarterTripletLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    quarterTripletLabel->setJustificationType (Justification::centredLeft);
    quarterTripletLabel->setEditable (false, false, false);
    quarterTripletLabel->setColour (TextEditor::textColourId, Colours::black);
    quarterTripletLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (eighthNormalLabel = new Label ("eighthNormalLabel",
                                                      String()));
    eighthNormalLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    eighthNormalLabel->setJustificationType (Justification::centredLeft);
    eighthNormalLabel->setEditable (false, false, false);
    eighthNormalLabel->setColour (TextEditor::textColourId, Colours::black);
    eighthNormalLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (eighthDottedLabel = new Label ("eighthDottedLabel",
                                                      String()));
    eighthDottedLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    eighthDottedLabel->setJustificationType (Justification::centredLeft);
    eighthDottedLabel->setEditable (false, false, false);
    eighthDottedLabel->setColour (TextEditor::textColourId, Colours::black);
    eighthDottedLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (eighthTripletLabel = new Label ("eighthTripletLabel",
                                                       String()));
    eighthTripletLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    eighthTripletLabel->setJustificationType (Justification::centredLeft);
    eighthTripletLabel->setEditable (false, false, false);
    eighthTripletLabel->setColour (TextEditor::textColourId, Colours::black);
    eighthTripletLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (sixteenthNormalLabel = new Label ("sixteenthNormalLabel",
                                                         String()));
    sixteenthNormalLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    sixteenthNormalLabel->setJustificationType (Justification::centredLeft);
    sixteenthNormalLabel->setEditable (false, false, false);
    sixteenthNormalLabel->setColour (TextEditor::textColourId, Colours::black);
    sixteenthNormalLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (sixteenthDottedLabel = new Label ("sixteenthDottedLabel",
                                                         String()));
    sixteenthDottedLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    sixteenthDottedLabel->setJustificationType (Justification::centredLeft);
    sixteenthDottedLabel->setEditable (false, false, false);
    sixteenthDottedLabel->setColour (TextEditor::textColourId, Colours::black);
    sixteenthDottedLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (sixteenthTripletLabel = new Label ("sixteenthTripletLabel",
                                                          String()));
    sixteenthTripletLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    sixteenthTripletLabel->setJustificationType (Justification::centredLeft);
    sixteenthTripletLabel->setEditable (false, false, false);
    sixteenthTripletLabel->setColour (TextEditor::textColourId, Colours::black);
    sixteenthTripletLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (thirtySecondNormalLabel = new Label ("thirtySecondNormalLabel",
                                                            String()));
    thirtySecondNormalLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    thirtySecondNormalLabel->setJustificationType (Justification::centredLeft);
    thirtySecondNormalLabel->setEditable (false, false, false);
    thirtySecondNormalLabel->setColour (TextEditor::textColourId, Colours::black);
    thirtySecondNormalLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (thirtySecondDottedLabel = new Label ("thirtySecondDottedLabel",
                                                            String()));
    thirtySecondDottedLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    thirtySecondDottedLabel->setJustificationType (Justification::centredLeft);
    thirtySecondDottedLabel->setEditable (false, false, false);
    thirtySecondDottedLabel->setColour (TextEditor::textColourId, Colours::black);
    thirtySecondDottedLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (thirtySecondTripletLabel = new Label ("thirtySecondTripletLabel",
                                                             String()));
    thirtySecondTripletLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    thirtySecondTripletLabel->setJustificationType (Justification::centredLeft);
    thirtySecondTripletLabel->setEditable (false, false, false);
    thirtySecondTripletLabel->setColour (TextEditor::textColourId, Colours::black);
    thirtySecondTripletLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (sixtyFourthNormalLabel = new Label ("sixtyFourthNormalLabel",
                                                           String()));
    sixtyFourthNormalLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    sixtyFourthNormalLabel->setJustificationType (Justification::centredLeft);
    sixtyFourthNormalLabel->setEditable (false, false, false);
    sixtyFourthNormalLabel->setColour (TextEditor::textColourId, Colours::black);
    sixtyFourthNormalLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (sixtyFourthDottedLabel = new Label ("sixtyFourthDottedLabel",
                                                           String()));
    sixtyFourthDottedLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    sixtyFourthDottedLabel->setJustificationType (Justification::centredLeft);
    sixtyFourthDottedLabel->setEditable (false, false, false);
    sixtyFourthDottedLabel->setColour (TextEditor::textColourId, Colours::black);
    sixtyFourthDottedLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (sixtyFourthTripletLabel = new Label ("sixtyFourthTripletLabel",
                                                            String()));
    sixtyFourthTripletLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    sixtyFourthTripletLabel->setJustificationType (Justification::centredLeft);
    sixtyFourthTripletLabel->setEditable (false, false, false);
    sixtyFourthTripletLabel->setColour (TextEditor::textColourId, Colours::black);
    sixtyFourthTripletLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (oneTwentyEighthNormalLabel = new Label ("oneTwentyEighthNormalLabel",
                                                               String()));
    oneTwentyEighthNormalLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    oneTwentyEighthNormalLabel->setJustificationType (Justification::centredLeft);
    oneTwentyEighthNormalLabel->setEditable (false, false, false);
    oneTwentyEighthNormalLabel->setColour (TextEditor::textColourId, Colours::black);
    oneTwentyEighthNormalLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (oneTwentyEighthDottedLabel = new Label ("oneTwentyEighthDottedLabel",
                                                               String()));
    oneTwentyEighthDottedLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    oneTwentyEighthDottedLabel->setJustificationType (Justification::centredLeft);
    oneTwentyEighthDottedLabel->setEditable (false, false, false);
    oneTwentyEighthDottedLabel->setColour (TextEditor::textColourId, Colours::black);
    oneTwentyEighthDottedLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (oneTwentyEighthTripletLabel = new Label ("oneTwentyEighthTripletLabel",
                                                                String()));
    oneTwentyEighthTripletLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    oneTwentyEighthTripletLabel->setJustificationType (Justification::centredLeft);
    oneTwentyEighthTripletLabel->setEditable (false, false, false);
    oneTwentyEighthTripletLabel->setColour (TextEditor::textColourId, Colours::black);
    oneTwentyEighthTripletLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (emailMeButton = new TextButton ("emailMeButton"));
    emailMeButton->setButtonText (TRANS("Email Me"));
    emailMeButton->addListener (this);
    emailMeButton->setColour (TextButton::buttonColourId, Colour (0xffadaaaa));
    emailMeButton->setColour (TextButton::buttonOnColourId, Colour (0xffadaaaa));
    emailMeButton->setColour (TextButton::textColourOffId, Colours::black);

    addAndMakeVisible (donateButton = new TextButton ("donateButton"));
    donateButton->setButtonText (TRANS("Donate"));
    donateButton->addListener (this);
    donateButton->setColour (TextButton::buttonColourId, Colour (0xffadaaaa));
    donateButton->setColour (TextButton::buttonOnColourId, Colour (0xffadaaaa));
    donateButton->setColour (TextButton::textColourOffId, Colours::black);

    addAndMakeVisible (facebookButton = new TextButton ("facebookButton"));
    facebookButton->setButtonText (TRANS("Facebook"));
    facebookButton->addListener (this);
    facebookButton->setColour (TextButton::buttonColourId, Colour (0xffadaaaa));
    facebookButton->setColour (TextButton::buttonOnColourId, Colour (0xffadaaaa));
    facebookButton->setColour (TextButton::textColourOffId, Colours::black);

    addAndMakeVisible (theCodeButton = new TextButton ("theCodeButton"));
    theCodeButton->setButtonText (TRANS("The Code"));
    theCodeButton->addListener (this);
    theCodeButton->setColour (TextButton::buttonColourId, Colour (0xffadaaaa));
    theCodeButton->setColour (TextButton::buttonOnColourId, Colour (0xffadaaaa));
    theCodeButton->setColour (TextButton::textColourOffId, Colours::black);

    addAndMakeVisible (informationButton = new TextButton ("informationButton"));
    informationButton->setButtonText (TRANS("Information"));
    informationButton->addListener (this);
    informationButton->setColour (TextButton::buttonColourId, Colour (0xffadaaaa));
    informationButton->setColour (TextButton::buttonOnColourId, Colour (0xffadaaaa));
    informationButton->setColour (TextButton::textColourOffId, Colours::black);

    addAndMakeVisible (hzToggle = new ToggleButton ("hzToggle"));
    hzToggle->setButtonText (TRANS("Hz"));
    hzToggle->addListener (this);

    addAndMakeVisible (msToggle = new ToggleButton ("msToggle"));
    msToggle->setButtonText (TRANS("ms"));
    msToggle->addListener (this);

    addAndMakeVisible (resolutionLabel = new Label ("resolutionLabel",
                                                    TRANS("\n"
                                                    "Resolution:")));
    resolutionLabel->setFont (Font ("Arial", 15.00f, Font::plain).withTypefaceStyle ("Regular"));
    resolutionLabel->setJustificationType (Justification::centred);
    resolutionLabel->setEditable (false, false, false);
    resolutionLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    resolutionLabel->setColour (TextEditor::textColourId, Colours::black);
    resolutionLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (coarseResolutionToggle = new ToggleButton ("coarseResolutionToggle"));
    coarseResolutionToggle->setButtonText (TRANS("Coarse"));
    coarseResolutionToggle->addListener (this);

    addAndMakeVisible (standardResolutionToggle = new ToggleButton ("standardResolutionToggle"));
    standardResolutionToggle->setButtonText (TRANS("Standard"));
    standardResolutionToggle->addListener (this);

    addAndMakeVisible (fineResolutionToggle = new ToggleButton ("fineResolutionToggle"));
    fineResolutionToggle->setButtonText (TRANS("Fine"));
    fineResolutionToggle->addListener (this);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (500, 505);


    //[Constructor] You can add your own custom stuff here..

    // Set millisecond mode to default
    msToggle->setToggleState(true, dontSendNotification);

    tempoSlider->setValue(120);

    // Right click for velocity sensitive sliding
    tempoSlider->setPopupMenuEnabled(true);

    // Set down state color of resolution toggle buttons
    //coarseResolutionButton->setColour(But, <#juce::Colour newColour#>)

    // Set resolution to standard initially
    standardResolutionToggle->triggerClick();

    //setupLabelCustomFont();

    //[/Constructor]
}

MainComponent::~MainComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    doubleTempoButton = nullptr;
    halfTempoButton = nullptr;
    tempoSlider = nullptr;
    delayTimeCalculatorLabel = nullptr;
    normalLabel = nullptr;
    dottedLabel = nullptr;
    tripletLabel = nullptr;
    wholeLabel = nullptr;
    halfLabel = nullptr;
    quarterLabel = nullptr;
    eighthLabel = nullptr;
    sixteenthLabel = nullptr;
    thirtySecondLabel = nullptr;
    sixtyFourthLabel = nullptr;
    oneHundreAndTwentyEighthLabel = nullptr;
    tapButton = nullptr;
    resetButton = nullptr;
    wholeNormalLabel = nullptr;
    wholeDottedLabel = nullptr;
    wholeTripletLabel = nullptr;
    halfNormalLabel = nullptr;
    halfDottedLabel = nullptr;
    halfTripletLabel = nullptr;
    quarterNormalLabel = nullptr;
    quarterDottedLabel = nullptr;
    quarterTripletLabel = nullptr;
    eighthNormalLabel = nullptr;
    eighthDottedLabel = nullptr;
    eighthTripletLabel = nullptr;
    sixteenthNormalLabel = nullptr;
    sixteenthDottedLabel = nullptr;
    sixteenthTripletLabel = nullptr;
    thirtySecondNormalLabel = nullptr;
    thirtySecondDottedLabel = nullptr;
    thirtySecondTripletLabel = nullptr;
    sixtyFourthNormalLabel = nullptr;
    sixtyFourthDottedLabel = nullptr;
    sixtyFourthTripletLabel = nullptr;
    oneTwentyEighthNormalLabel = nullptr;
    oneTwentyEighthDottedLabel = nullptr;
    oneTwentyEighthTripletLabel = nullptr;
    emailMeButton = nullptr;
    donateButton = nullptr;
    facebookButton = nullptr;
    theCodeButton = nullptr;
    informationButton = nullptr;
    hzToggle = nullptr;
    msToggle = nullptr;
    resolutionLabel = nullptr;
    coarseResolutionToggle = nullptr;
    standardResolutionToggle = nullptr;
    fineResolutionToggle = nullptr;


    //[Destructor]. You can add your own custom destruction code here..

    // Delete basicWindow in case both windows are open when exiting the application all together
    delete basicWindow;

    //[/Destructor]
}

//==============================================================================
void MainComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..

    //[/UserPrePaint]

    g.fillAll (Colour (0xff353535));

    //[UserPaint] Add your own custom painting code here..

    g.setColour(Colours::white);
    g.setOpacity(0.25);

    int y = 56;
    int distanceFromEdge = 17;
    int thickness = 1;
    g.drawLine(distanceFromEdge, y, getWidth() - distanceFromEdge, y, thickness);

    //[/UserPaint]
}

void MainComponent::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    doubleTempoButton->setBounds (125, 110, 125, 30);
    halfTempoButton->setBounds (0, 110, 125, 30);
    tempoSlider->setBounds (0, 60, 500, 30);
    delayTimeCalculatorLabel->setBounds (0, 0, 500, 50);
    normalLabel->setBounds (125, 140, 125, 30);
    dottedLabel->setBounds (250, 140, 125, 30);
    tripletLabel->setBounds (375, 140, 125, 30);
    wholeLabel->setBounds (0, 170, 100, 30);
    halfLabel->setBounds (0, 210, 100, 30);
    quarterLabel->setBounds (0, 250, 100, 30);
    eighthLabel->setBounds (0, 290, 100, 30);
    sixteenthLabel->setBounds (0, 330, 100, 30);
    thirtySecondLabel->setBounds (0, 370, 100, 30);
    sixtyFourthLabel->setBounds (0, 410, 100, 30);
    oneHundreAndTwentyEighthLabel->setBounds (0, 450, 100, 30);
    tapButton->setBounds (250, 110, 125, 30);
    resetButton->setBounds (375, 110, 125, 30);
    wholeNormalLabel->setBounds (125, 170, 125, 30);
    wholeDottedLabel->setBounds (250, 170, 125, 30);
    wholeTripletLabel->setBounds (375, 170, 125, 30);
    halfNormalLabel->setBounds (125, 210, 125, 30);
    halfDottedLabel->setBounds (250, 210, 125, 28);
    halfTripletLabel->setBounds (375, 210, 125, 30);
    quarterNormalLabel->setBounds (125, 250, 125, 30);
    quarterDottedLabel->setBounds (250, 250, 125, 30);
    quarterTripletLabel->setBounds (375, 250, 125, 30);
    eighthNormalLabel->setBounds (125, 290, 125, 30);
    eighthDottedLabel->setBounds (250, 290, 125, 30);
    eighthTripletLabel->setBounds (375, 290, 125, 30);
    sixteenthNormalLabel->setBounds (125, 330, 125, 30);
    sixteenthDottedLabel->setBounds (250, 330, 125, 30);
    sixteenthTripletLabel->setBounds (375, 330, 125, 30);
    thirtySecondNormalLabel->setBounds (125, 370, 125, 30);
    thirtySecondDottedLabel->setBounds (250, 370, 125, 30);
    thirtySecondTripletLabel->setBounds (375, 370, 125, 30);
    sixtyFourthNormalLabel->setBounds (125, 410, 125, 30);
    sixtyFourthDottedLabel->setBounds (250, 410, 125, 30);
    sixtyFourthTripletLabel->setBounds (375, 410, 125, 30);
    oneTwentyEighthNormalLabel->setBounds (125, 450, 125, 30);
    oneTwentyEighthDottedLabel->setBounds (250, 450, 125, 30);
    oneTwentyEighthTripletLabel->setBounds (375, 450, 125, 30);
    emailMeButton->setBounds (200, 485, 100, 20);
    donateButton->setBounds (400, 485, 100, 20);
    facebookButton->setBounds (100, 485, 100, 20);
    theCodeButton->setBounds (300, 485, 100, 20);
    informationButton->setBounds (0, 485, 100, 20);
    hzToggle->setBounds (63, 145, 62, 20);
    msToggle->setBounds (0, 145, 62, 20);
    resolutionLabel->setBounds (0, 90, 125, 20);
    coarseResolutionToggle->setBounds (125, 90, 125, 20);
    standardResolutionToggle->setBounds (250, 90, 125, 20);
    fineResolutionToggle->setBounds (375, 90, 125, 20);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void MainComponent::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == doubleTempoButton)
    {
        //[UserButtonCode_doubleTempoButton] -- add your button handler code here..

        tempoSlider->setValue(tempoSlider->getValue() * 2);

        //[/UserButtonCode_doubleTempoButton]
    }
    else if (buttonThatWasClicked == halfTempoButton)
    {
        //[UserButtonCode_halfTempoButton] -- add your button handler code here..

        tempoSlider->setValue(tempoSlider->getValue() / 2);

        //[/UserButtonCode_halfTempoButton]
    }
    else if (buttonThatWasClicked == tapButton)
    {
        //[UserButtonCode_tapButton] -- add your button handler code here..

        tempoSlider->setValue(tapTempoObject.calculateTempo());

        // Change button color so we know a reset is needed
        resetButton->setColour(TextButton::buttonColourId , Colours::white);

        // Add tap count to Tap Tempo button
        tapButton->setButtonText("Tap Tempo (" + (String) tapTempoObject.getTapCount() + ")");

        //[/UserButtonCode_tapButton]
    }
    else if (buttonThatWasClicked == resetButton)
    {
        //[UserButtonCode_resetButton] -- add your button handler code here..

        tapTempoObject.resetMainCalculationHolders();

        // Reset the color of resetButton by simply setting it to the color of tapButton
        resetButton->setColour(TextButton::buttonColourId,
                               tapButton->findColour(TextButton::buttonColourId));

        // Change Tap Tempo button text back to normal, excluding tap count
        tapButton->setButtonText("Tap Tempo");

        //[/UserButtonCode_resetButton]
    }
    else if (buttonThatWasClicked == emailMeButton)
    {
        //[UserButtonCode_emailMeButton] -- add your button handler code here..

        URL emailURL("JosephTLyons@gmail.com");
        emailURL.launchInDefaultBrowser();

        //[/UserButtonCode_emailMeButton]
    }
    else if (buttonThatWasClicked == donateButton)
    {
        //[UserButtonCode_donateButton] -- add your button handler code here..

        URL payPalURL("https://www.paypal.me/JosephTimothyLyons/1");
        payPalURL.launchInDefaultBrowser();

        //[/UserButtonCode_donateButton]
    }
    else if (buttonThatWasClicked == facebookButton)
    {
        //[UserButtonCode_facebookButton] -- add your button handler code here..

        URL facebookURL("https://www.facebook.com/TheLyonsDenSoftware/");
        facebookURL.launchInDefaultBrowser();

        //[/UserButtonCode_facebookButton]
    }
    else if (buttonThatWasClicked == theCodeButton)
    {
        //[UserButtonCode_theCodeButton] -- add your button handler code here..

        URL gitHubRepoURL("https://github.com/JosephTLyons/GUI-Delay-Time-Calculator");
        gitHubRepoURL.launchInDefaultBrowser();

        //[/UserButtonCode_theCodeButton]
    }
    else if (buttonThatWasClicked == informationButton)
    {
        //[UserButtonCode_informationButton] -- add your button handler code here..

        // Don't allow multiple copies of this window to be made
        if(basicWindow == NULL)
        {
            basicWindow = new BasicWindow("Information",
										  Colours::grey,
										  DocumentWindow::closeButton |
										  DocumentWindow::minimiseButton);

            basicWindow->setUsingNativeTitleBar(true);
            basicWindow->setContentOwned(new InformationComponent(), true);

            basicWindow->centreWithSize(basicWindow->getWidth(), basicWindow->getHeight());
            basicWindow->setVisible(true);
        }

        else
        {
            delete basicWindow;
        }

        //[/UserButtonCode_informationButton]
    }
    else if (buttonThatWasClicked == hzToggle)
    {
        //[UserButtonCode_hzToggle] -- add your button handler code here..

        // Make sure all values in object are up to date
        hertzValuesObject.calculateHertzValues(tempoSlider->getValue());

        // This makes sure that one toggle is always on
        hzToggle->setToggleState(true, dontSendNotification);

        // Turn off ms mode automatically so that only one mode can be on at a time
        msToggle->setToggleState(false, dontSendNotification);
        populateFieldsWithHertzValues();

        //[/UserButtonCode_hzToggle]
    }
    else if (buttonThatWasClicked == msToggle)
    {
        //[UserButtonCode_msToggle] -- add your button handler code here..

        // Make sure all values in object are up to date
        millisecondValuesObject.calculateMillisecondValues(tempoSlider->getValue());

        // This makes sure that one toggle is always on
        msToggle->setToggleState(true, dontSendNotification);

        // Turn off freq mode automatically so that only one mode can be on at a time
        hzToggle->setToggleState(false, dontSendNotification);
        populateFieldsWithMillisecondValues();

        //[/UserButtonCode_msToggle]
    }
    else if (buttonThatWasClicked == coarseResolutionToggle)
    {
        //[UserButtonCode_coarseResolutionToggle] -- add your button handler code here..

        tempoSlider->setRange(1, 1000, 1);

        coarseResolutionToggle->setToggleState(true, dontSendNotification);
        standardResolutionToggle->setToggleState(false, dontSendNotification);
        fineResolutionToggle->setToggleState(false, dontSendNotification);

        //[/UserButtonCode_coarseResolutionToggle]
    }
    else if (buttonThatWasClicked == standardResolutionToggle)
    {
        //[UserButtonCode_standardResolutionToggle] -- add your button handler code here..

        tempoSlider->setRange(1, 1000, 0.1);

        coarseResolutionToggle->setToggleState(false, dontSendNotification);
        standardResolutionToggle->setToggleState(true, dontSendNotification);
        fineResolutionToggle->setToggleState(false, dontSendNotification);

        //[/UserButtonCode_standardResolutionToggle]
    }
    else if (buttonThatWasClicked == fineResolutionToggle)
    {
        //[UserButtonCode_fineResolutionToggle] -- add your button handler code here..

        tempoSlider->setRange(1, 1000, 0.01);

        coarseResolutionToggle->setToggleState(false, dontSendNotification);
        standardResolutionToggle->setToggleState(false, dontSendNotification);
        fineResolutionToggle->setToggleState(true, dontSendNotification);

        //[/UserButtonCode_fineResolutionToggle]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}

void MainComponent::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == tempoSlider)
    {
        //[UserSliderCode_tempoSlider] -- add your slider handling code here..

        if(msToggle->getToggleState())
        {
            millisecondValuesObject.calculateMillisecondValues(tempoSlider->getValue());
            populateFieldsWithMillisecondValues();
        }

        if(hzToggle->getToggleState())
        {
            hertzValuesObject.calculateHertzValues(tempoSlider->getValue());
            populateFieldsWithHertzValues();
        }

        //[/UserSliderCode_tempoSlider]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...

void MainComponent::setupLabelCustomFont()
{
    delayTimeCalculatorLabel->setFont(customFont.getCalistoMT());
}

bool MainComponent::keyPressed(const juce::KeyPress &key)
{
    // Tempo 1/2x
    if(key == '1')
    {
        halfTempoButton->triggerClick();
    }

    // Tempo 2x
    if(key == '2')
    {
        doubleTempoButton->triggerClick();
    }

    // Trigger Tap Tempo
    if(key == 'T')
    {
        tapButton->triggerClick();
    }

    // Trigger Tap Tempo Reset
    if(key == 'R')
    {
        resetButton->triggerClick();
    }

    // Enable ms option
    if(key == 'M')
    {
        msToggle->triggerClick();
    }

    // Enable hz option
    if(key == 'H')
    {
        hzToggle->triggerClick();
    }

    if(key == 'C')
    {
        coarseResolutionToggle->triggerClick();
    }

    if(key == 'S')
    {
        standardResolutionToggle->triggerClick();
    }

    if(key == 'F')
    {
        fineResolutionToggle->triggerClick();
    }

    // Round Tempo
    if(key == KeyPress::spaceKey)
    {
        int truncatedValue    = (int) tempoSlider->getValue();
        double roundingFactor = tempoSlider->getValue() - truncatedValue;

        if(roundingFactor >= 0.5)
        {
            tempoSlider->setValue(truncatedValue + 1);
        }

        else
        {
            tempoSlider->setValue(truncatedValue);
        }
    }

    // Tempo + 1
    if(key == KeyPress::upKey)
    {
        tempoSlider->setValue(tempoSlider->getValue() + 1);
    }

    // Tempo - 1
    if(key == KeyPress::downKey)
    {
        tempoSlider->setValue(tempoSlider->getValue() - 1);
    }

    // Tempo + 5
    if(key == KeyPress::rightKey)
    {
        tempoSlider->setValue(tempoSlider->getValue() + 5);
    }

    // Tempo - 5
    if(key == KeyPress::leftKey)
    {
        tempoSlider->setValue(tempoSlider->getValue() - 5);
    }

    return true;
}

void MainComponent::populateFieldsWithMillisecondValues()
{
    // Set values for all text labels
    wholeNormalLabel->setText((String) millisecondValuesObject.getWholeNormal(), dontSendNotification);
    wholeDottedLabel->setText((String) millisecondValuesObject.getWholeDotted(), dontSendNotification);
    wholeTripletLabel->setText((String) millisecondValuesObject.getWholeTriplet(), dontSendNotification);

    halfNormalLabel->setText((String) millisecondValuesObject.getHalfNormal(), dontSendNotification);
    halfDottedLabel->setText((String) millisecondValuesObject.getHalfDotted(), dontSendNotification);
    halfTripletLabel->setText((String) millisecondValuesObject.getHalfTriplet(), dontSendNotification);

    quarterNormalLabel->setText((String) millisecondValuesObject.getQuarterNormal(), dontSendNotification);
    quarterDottedLabel->setText((String) millisecondValuesObject.getQuarterDotted(), dontSendNotification);
    quarterTripletLabel->setText((String) millisecondValuesObject.getQuarterTriplet(), dontSendNotification);

    eighthNormalLabel->setText((String) millisecondValuesObject.getEighthNormal(), dontSendNotification);
    eighthDottedLabel->setText((String) millisecondValuesObject.getEighthDotted(), dontSendNotification);
    eighthTripletLabel->setText((String) millisecondValuesObject.getEighthTriplet(), dontSendNotification);

    sixteenthNormalLabel->setText((String) millisecondValuesObject.getSixteenthNormal(), dontSendNotification);
    sixteenthDottedLabel->setText((String) millisecondValuesObject.getSixteenthDotted(), dontSendNotification);
    sixteenthTripletLabel->setText((String) millisecondValuesObject.getSixteenthTriplet(), dontSendNotification);

    thirtySecondNormalLabel->setText((String) millisecondValuesObject.getThirtySecondNormal(), dontSendNotification);
    thirtySecondDottedLabel->setText((String) millisecondValuesObject.getThirtySecondDotted(), dontSendNotification);
    thirtySecondTripletLabel->setText((String) millisecondValuesObject.getThirtySecondTriplet(), dontSendNotification);

    sixtyFourthNormalLabel->setText((String) millisecondValuesObject.getSixtyFouthNormal(), dontSendNotification);
    sixtyFourthDottedLabel->setText((String) millisecondValuesObject.getSixtyFouthDotted(), dontSendNotification);
    sixtyFourthTripletLabel->setText((String) millisecondValuesObject.getSixtyFouthTriplet(), dontSendNotification);

    oneTwentyEighthNormalLabel->setText((String) millisecondValuesObject.getOneHundredAndTwentyEighthNormal(),
                                                 dontSendNotification);
    oneTwentyEighthDottedLabel->setText((String) millisecondValuesObject.getOneHundredAndTwentyEighthDotted(),
                                                 dontSendNotification);
    oneTwentyEighthTripletLabel->setText((String) millisecondValuesObject.getOneHundredAndTwentyEighthTriplet(),
                                                  dontSendNotification);
}

void MainComponent::populateFieldsWithHertzValues()
{
    // Set values for all text labels
    wholeNormalLabel->setText((String) hertzValuesObject.getWholeNormal(), dontSendNotification);
    wholeDottedLabel->setText((String) hertzValuesObject.getWholeDotted(), dontSendNotification);
    wholeTripletLabel->setText((String) hertzValuesObject.getWholeTriplet(), dontSendNotification);

    halfNormalLabel->setText((String) hertzValuesObject.getHalfNormal(), dontSendNotification);
    halfDottedLabel->setText((String) hertzValuesObject.getHalfDotted(), dontSendNotification);
    halfTripletLabel->setText((String) hertzValuesObject.getHalfTriplet(), dontSendNotification);

    quarterNormalLabel->setText((String) hertzValuesObject.getQuarterNormal(), dontSendNotification);
    quarterDottedLabel->setText((String) hertzValuesObject.getQuarterDotted(), dontSendNotification);
    quarterTripletLabel->setText((String) hertzValuesObject.getQuarterTriplet(), dontSendNotification);

    eighthNormalLabel->setText((String) hertzValuesObject.getEighthNormal(), dontSendNotification);
    eighthDottedLabel->setText((String) hertzValuesObject.getEighthDotted(), dontSendNotification);
    eighthTripletLabel->setText((String) hertzValuesObject.getEighthTriplet(), dontSendNotification);

    sixteenthNormalLabel->setText((String) hertzValuesObject.getSixteenthNormal(), dontSendNotification);
    sixteenthDottedLabel->setText((String) hertzValuesObject.getSixteenthDotted(), dontSendNotification);
    sixteenthTripletLabel->setText((String) hertzValuesObject.getSixteenthTriplet(), dontSendNotification);

    thirtySecondNormalLabel->setText((String) hertzValuesObject.getThirtySecondNormal(), dontSendNotification);
    thirtySecondDottedLabel->setText((String) hertzValuesObject.getThirtySecondDotted(), dontSendNotification);
    thirtySecondTripletLabel->setText((String) hertzValuesObject.getThirtySecondTriplet(), dontSendNotification);

    sixtyFourthNormalLabel->setText((String) hertzValuesObject.getSixtyFouthNormal(), dontSendNotification);
    sixtyFourthDottedLabel->setText((String) hertzValuesObject.getSixtyFouthDotted(), dontSendNotification);
    sixtyFourthTripletLabel->setText((String) hertzValuesObject.getSixtyFouthTriplet(), dontSendNotification);

    oneTwentyEighthNormalLabel->setText((String) hertzValuesObject.getOneHundredAndTwentyEighthNormal(),
                                                 dontSendNotification);
    oneTwentyEighthDottedLabel->setText((String) hertzValuesObject.getOneHundredAndTwentyEighthDotted(),
                                                 dontSendNotification);
    oneTwentyEighthTripletLabel->setText((String) hertzValuesObject.getOneHundredAndTwentyEighthTriplet(),
                                                  dontSendNotification);
}

//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="MainComponent" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="1" initialWidth="500" initialHeight="505">
  <BACKGROUND backgroundColour="ff353535"/>
  <TEXTBUTTON name="doubleTempoButton" id="74a1161b6a8bd75d" memberName="doubleTempoButton"
              virtualName="" explicitFocusOrder="0" pos="125 110 125 30" bgColOff="ffadaaaa"
              textCol="ff353535" buttonText="2x" connectedEdges="0" needsCallback="1"
              radioGroupId="0"/>
  <TEXTBUTTON name="halfTempoButton" id="edac6a2aecdd8ef5" memberName="halfTempoButton"
              virtualName="" explicitFocusOrder="0" pos="0 110 125 30" bgColOff="ffadaaaa"
              textCol="ff353535" buttonText="1/2x" connectedEdges="0" needsCallback="1"
              radioGroupId="0"/>
  <SLIDER name="tempoSlider" id="1b36c66db8e52ea5" memberName="tempoSlider"
          virtualName="" explicitFocusOrder="0" pos="0 60 500 30" bkgcol="ff000000"
          thumbcol="ffffffff" trackcol="ffadaaaa" textboxtext="ffffffff"
          textboxbkgd="ff353535" textboxhighlight="ffadaaaa" textboxoutline="ff353535"
          min="1" max="1000" int="0.10000000000000000555" style="LinearHorizontal"
          textBoxPos="TextBoxLeft" textBoxEditable="1" textBoxWidth="50"
          textBoxHeight="20" skewFactor="0.5" needsCallback="1"/>
  <LABEL name="delayTimeCalculatorLabel" id="951f8323b93b29f2" memberName="delayTimeCalculatorLabel"
         virtualName="" explicitFocusOrder="0" pos="0 0 500 50" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="Delay Time Calculator"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Arial" fontsize="47.399999999999998579" kerning="0.09500000000000000111"
         bold="0" italic="0" justification="36"/>
  <LABEL name="normalLabel" id="a751a1c9841b9424" memberName="normalLabel"
         virtualName="" explicitFocusOrder="0" pos="125 140 125 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="Normal&#10;" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="30" kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="dottedLabel" id="f84ddade330c771e" memberName="dottedLabel"
         virtualName="" explicitFocusOrder="0" pos="250 140 125 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="Dotted" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="30" kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="tripletLabel" id="24f4755bf6b035f2" memberName="tripletLabel"
         virtualName="" explicitFocusOrder="0" pos="375 140 125 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="Triplet" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="30" kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="wholeLabel" id="84a944615f7ab97c" memberName="wholeLabel"
         virtualName="" explicitFocusOrder="0" pos="0 170 100 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="1:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="30" kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="halfLabel" id="670aac61ca569af7" memberName="halfLabel"
         virtualName="" explicitFocusOrder="0" pos="0 210 100 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="1/2:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="30" kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="quarterLabel" id="c5514ec2a3c07661" memberName="quarterLabel"
         virtualName="" explicitFocusOrder="0" pos="0 250 100 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="1/4:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="30" kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="eighthLabel" id="49b134e52607b4bd" memberName="eighthLabel"
         virtualName="" explicitFocusOrder="0" pos="0 290 100 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="1/8:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="30" kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="sixteenthLabel" id="15b5cdc975d8b4c1" memberName="sixteenthLabel"
         virtualName="" explicitFocusOrder="0" pos="0 330 100 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="1/16:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="30" kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="thirtySecondLabel" id="286f381f35aec721" memberName="thirtySecondLabel"
         virtualName="" explicitFocusOrder="0" pos="0 370 100 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="1/32:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="30" kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="sixtyFourthLabel" id="e0fec546bed640df" memberName="sixtyFourthLabel"
         virtualName="" explicitFocusOrder="0" pos="0 410 100 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="1/64:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="30" kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="oneHundreAndTwentyEighthLabel" id="fe1fa9046023fc2a" memberName="oneHundreAndTwentyEighthLabel"
         virtualName="" explicitFocusOrder="0" pos="0 450 100 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="1/128:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="30" kerning="0" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="tapButton" id="3cd8a4f5f3b122f8" memberName="tapButton"
              virtualName="" explicitFocusOrder="0" pos="250 110 125 30" bgColOff="ffadaaaa"
              textCol="ff353535" buttonText="Tap Tempo" connectedEdges="0"
              needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="resetButton" id="137cfed0258a7265" memberName="resetButton"
              virtualName="" explicitFocusOrder="0" pos="375 110 125 30" bgColOff="ffadaaaa"
              textCol="ff353535" buttonText="Reset Tap Tempo" connectedEdges="0"
              needsCallback="1" radioGroupId="0"/>
  <LABEL name="new label" id="3b0b371f9cfffd20" memberName="wholeNormalLabel"
         virtualName="" explicitFocusOrder="0" pos="125 170 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25"
         kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="wholeDottedLabel" id="5aa96ffcf47310ae" memberName="wholeDottedLabel"
         virtualName="" explicitFocusOrder="0" pos="250 170 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25"
         kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="wholeTripletLabel" id="acb484e802c4fea9" memberName="wholeTripletLabel"
         virtualName="" explicitFocusOrder="0" pos="375 170 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="&#10;" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25"
         kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="halfNormalLabel" id="fb1b90b40fe022a1" memberName="halfNormalLabel"
         virtualName="" explicitFocusOrder="0" pos="125 210 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25"
         kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="halfDottedLabel" id="29a3d055318a2256" memberName="halfDottedLabel"
         virtualName="" explicitFocusOrder="0" pos="250 210 125 28" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25"
         kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="halfTripletLabel" id="474722dc22cd155b" memberName="halfTripletLabel"
         virtualName="" explicitFocusOrder="0" pos="375 210 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25"
         kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="quarterNormalLabel" id="a0b43f6d2cebf017" memberName="quarterNormalLabel"
         virtualName="" explicitFocusOrder="0" pos="125 250 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25"
         kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="quarterDottedLabel" id="6e5caff96007dec1" memberName="quarterDottedLabel"
         virtualName="" explicitFocusOrder="0" pos="250 250 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25"
         kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="quarterTripletLabel" id="fe2643302e963795" memberName="quarterTripletLabel"
         virtualName="" explicitFocusOrder="0" pos="375 250 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25"
         kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="eighthNormalLabel" id="aabf4b6c5866f43a" memberName="eighthNormalLabel"
         virtualName="" explicitFocusOrder="0" pos="125 290 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25"
         kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="eighthDottedLabel" id="df0f0f30eec2686f" memberName="eighthDottedLabel"
         virtualName="" explicitFocusOrder="0" pos="250 290 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25"
         kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="eighthTripletLabel" id="7b34c480a75f818" memberName="eighthTripletLabel"
         virtualName="" explicitFocusOrder="0" pos="375 290 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25"
         kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="sixteenthNormalLabel" id="4b90b919d39c55aa" memberName="sixteenthNormalLabel"
         virtualName="" explicitFocusOrder="0" pos="125 330 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25"
         kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="sixteenthDottedLabel" id="b8e062b942bd6161" memberName="sixteenthDottedLabel"
         virtualName="" explicitFocusOrder="0" pos="250 330 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25"
         kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="sixteenthTripletLabel" id="bc5910a30828043e" memberName="sixteenthTripletLabel"
         virtualName="" explicitFocusOrder="0" pos="375 330 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25"
         kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="thirtySecondNormalLabel" id="bafdfece957a48cd" memberName="thirtySecondNormalLabel"
         virtualName="" explicitFocusOrder="0" pos="125 370 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25"
         kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="thirtySecondDottedLabel" id="d6c4232d51ea521d" memberName="thirtySecondDottedLabel"
         virtualName="" explicitFocusOrder="0" pos="250 370 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25"
         kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="thirtySecondTripletLabel" id="c94aa63d85789829" memberName="thirtySecondTripletLabel"
         virtualName="" explicitFocusOrder="0" pos="375 370 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25"
         kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="sixtyFourthNormalLabel" id="aba83195d8170afc" memberName="sixtyFourthNormalLabel"
         virtualName="" explicitFocusOrder="0" pos="125 410 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25"
         kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="sixtyFourthDottedLabel" id="90fef0b42ac08a69" memberName="sixtyFourthDottedLabel"
         virtualName="" explicitFocusOrder="0" pos="250 410 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25"
         kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="sixtyFourthTripletLabel" id="432ffa6d219d869e" memberName="sixtyFourthTripletLabel"
         virtualName="" explicitFocusOrder="0" pos="375 410 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25"
         kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="oneTwentyEighthNormalLabel" id="a76923820541582b" memberName="oneTwentyEighthNormalLabel"
         virtualName="" explicitFocusOrder="0" pos="125 450 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25"
         kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="oneTwentyEighthDottedLabel" id="9379aa3476074fe5" memberName="oneTwentyEighthDottedLabel"
         virtualName="" explicitFocusOrder="0" pos="250 450 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25"
         kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="oneTwentyEighthTripletLabel" id="c3b2f04614c1679d" memberName="oneTwentyEighthTripletLabel"
         virtualName="" explicitFocusOrder="0" pos="375 450 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25"
         kerning="0" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="emailMeButton" id="b8526a15ddc05fdb" memberName="emailMeButton"
              virtualName="" explicitFocusOrder="0" pos="200 485 100 20" bgColOff="ffadaaaa"
              bgColOn="ffadaaaa" textCol="ff000000" buttonText="Email Me" connectedEdges="0"
              needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="donateButton" id="e193a0f2ebba353b" memberName="donateButton"
              virtualName="" explicitFocusOrder="0" pos="400 485 100 20" bgColOff="ffadaaaa"
              bgColOn="ffadaaaa" textCol="ff000000" buttonText="Donate" connectedEdges="0"
              needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="facebookButton" id="1952a3bc23aa2487" memberName="facebookButton"
              virtualName="" explicitFocusOrder="0" pos="100 485 100 20" bgColOff="ffadaaaa"
              bgColOn="ffadaaaa" textCol="ff000000" buttonText="Facebook" connectedEdges="0"
              needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="theCodeButton" id="63c3f048d7a8aeb1" memberName="theCodeButton"
              virtualName="" explicitFocusOrder="0" pos="300 485 100 20" bgColOff="ffadaaaa"
              bgColOn="ffadaaaa" textCol="ff000000" buttonText="The Code" connectedEdges="0"
              needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="informationButton" id="ab632d30dfc057bb" memberName="informationButton"
              virtualName="" explicitFocusOrder="0" pos="0 485 100 20" bgColOff="ffadaaaa"
              bgColOn="ffadaaaa" textCol="ff000000" buttonText="Information"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TOGGLEBUTTON name="hzToggle" id="3e5aa37d8e5a6de5" memberName="hzToggle" virtualName=""
                explicitFocusOrder="0" pos="63 145 62 20" buttonText="Hz" connectedEdges="0"
                needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="msToggle" id="8f5b18b58f39a727" memberName="msToggle" virtualName=""
                explicitFocusOrder="0" pos="0 145 62 20" buttonText="ms" connectedEdges="0"
                needsCallback="1" radioGroupId="0" state="0"/>
  <LABEL name="resolutionLabel" id="ea19d2a44c15cdae" memberName="resolutionLabel"
         virtualName="" explicitFocusOrder="0" pos="0 90 125 20" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="&#10;Resolution:"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Arial" fontsize="15" kerning="0" bold="0" italic="0"
         justification="36"/>
  <TOGGLEBUTTON name="coarseResolutionToggle" id="ba1bd947fd8c2a56" memberName="coarseResolutionToggle"
                virtualName="" explicitFocusOrder="0" pos="125 90 125 20" buttonText="Coarse"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="standardResolutionToggle" id="97f508dd5ada8935" memberName="standardResolutionToggle"
                virtualName="" explicitFocusOrder="0" pos="250 90 125 20" buttonText="Standard"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="fineResolutionToggle" id="95774ae90e8bc93e" memberName="fineResolutionToggle"
                virtualName="" explicitFocusOrder="0" pos="375 90 125 20" buttonText="Fine"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
