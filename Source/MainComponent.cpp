/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 5.2.1

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2017 - ROLI Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
#include "InformationComponent.h"
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

    doubleTempoButton->setBounds (125, 115, 125, 30);

    addAndMakeVisible (halfTempoButton = new TextButton ("halfTempoButton"));
    halfTempoButton->setButtonText (TRANS("(1/2)x"));
    halfTempoButton->addListener (this);
    halfTempoButton->setColour (TextButton::buttonColourId, Colour (0xffadaaaa));
    halfTempoButton->setColour (TextButton::textColourOffId, Colour (0xff353535));

    halfTempoButton->setBounds (0, 115, 125, 30);

    addAndMakeVisible (tempoSlider = new Slider ("tempoSlider"));
    tempoSlider->setRange (1, 1000, 0.1);
    tempoSlider->setSliderStyle (Slider::LinearHorizontal);
    tempoSlider->setTextBoxStyle (Slider::NoTextBox, false, 50, 20);
    tempoSlider->setColour (Slider::backgroundColourId, Colours::black);
    tempoSlider->setColour (Slider::thumbColourId, Colours::white);
    tempoSlider->setColour (Slider::trackColourId, Colour (0xffadaaaa));
    tempoSlider->setColour (Slider::textBoxTextColourId, Colours::white);
    tempoSlider->setColour (Slider::textBoxBackgroundColourId, Colour (0xff353535));
    tempoSlider->setColour (Slider::textBoxHighlightColourId, Colour (0xffadaaaa));
    tempoSlider->setColour (Slider::textBoxOutlineColourId, Colour (0xff353535));
    tempoSlider->addListener (this);
    tempoSlider->setSkewFactor (0.5);

    tempoSlider->setBounds (0, 85, 500, 30);

    addAndMakeVisible (delayTimeCalculatorLabel = new Label ("delayTimeCalculatorLabel",
                                                             TRANS("Delay Time Calculator")));
    delayTimeCalculatorLabel->setFont (Font ("Arial", 47.40f, Font::plain).withExtraKerningFactor (0.095f));
    delayTimeCalculatorLabel->setJustificationType (Justification::centred);
    delayTimeCalculatorLabel->setEditable (false, false, false);
    delayTimeCalculatorLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    delayTimeCalculatorLabel->setColour (TextEditor::textColourId, Colours::black);
    delayTimeCalculatorLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    delayTimeCalculatorLabel->setBounds (0, 0, 500, 50);

    addAndMakeVisible (normalLabel = new Label ("normalLabel",
                                                TRANS("Normal\n")));
    normalLabel->setFont (Font ("Arial", 30.00f, Font::plain));
    normalLabel->setJustificationType (Justification::centredLeft);
    normalLabel->setEditable (false, false, false);
    normalLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    normalLabel->setColour (TextEditor::textColourId, Colours::black);
    normalLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    normalLabel->setBounds (125, 145, 125, 30);

    addAndMakeVisible (dottedLabel = new Label ("dottedLabel",
                                                TRANS("Dotted")));
    dottedLabel->setFont (Font ("Arial", 30.00f, Font::plain));
    dottedLabel->setJustificationType (Justification::centredLeft);
    dottedLabel->setEditable (false, false, false);
    dottedLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    dottedLabel->setColour (TextEditor::textColourId, Colours::black);
    dottedLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    dottedLabel->setBounds (250, 145, 125, 30);

    addAndMakeVisible (tripletLabel = new Label ("tripletLabel",
                                                 TRANS("Triplet")));
    tripletLabel->setFont (Font ("Arial", 30.00f, Font::plain));
    tripletLabel->setJustificationType (Justification::centredLeft);
    tripletLabel->setEditable (false, false, false);
    tripletLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    tripletLabel->setColour (TextEditor::textColourId, Colours::black);
    tripletLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    tripletLabel->setBounds (375, 145, 125, 30);

    addAndMakeVisible (wholeLabel = new Label ("wholeLabel",
                                               TRANS("1:")));
    wholeLabel->setFont (Font ("Arial", 30.00f, Font::plain));
    wholeLabel->setJustificationType (Justification::centredLeft);
    wholeLabel->setEditable (false, false, false);
    wholeLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    wholeLabel->setColour (TextEditor::textColourId, Colours::black);
    wholeLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    wholeLabel->setBounds (0, 175, 100, 30);

    addAndMakeVisible (halfLabel = new Label ("halfLabel",
                                              TRANS("1/2:")));
    halfLabel->setFont (Font ("Arial", 30.00f, Font::plain));
    halfLabel->setJustificationType (Justification::centredLeft);
    halfLabel->setEditable (false, false, false);
    halfLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    halfLabel->setColour (TextEditor::textColourId, Colours::black);
    halfLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    halfLabel->setBounds (0, 215, 100, 30);

    addAndMakeVisible (quarterLabel = new Label ("quarterLabel",
                                                 TRANS("1/4:")));
    quarterLabel->setFont (Font ("Arial", 30.00f, Font::plain));
    quarterLabel->setJustificationType (Justification::centredLeft);
    quarterLabel->setEditable (false, false, false);
    quarterLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    quarterLabel->setColour (TextEditor::textColourId, Colours::black);
    quarterLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    quarterLabel->setBounds (0, 255, 100, 30);

    addAndMakeVisible (eighthLabel = new Label ("eighthLabel",
                                                TRANS("1/8:")));
    eighthLabel->setFont (Font ("Arial", 30.00f, Font::plain));
    eighthLabel->setJustificationType (Justification::centredLeft);
    eighthLabel->setEditable (false, false, false);
    eighthLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    eighthLabel->setColour (TextEditor::textColourId, Colours::black);
    eighthLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    eighthLabel->setBounds (0, 295, 100, 30);

    addAndMakeVisible (sixteenthLabel = new Label ("sixteenthLabel",
                                                   TRANS("1/16:")));
    sixteenthLabel->setFont (Font ("Arial", 30.00f, Font::plain));
    sixteenthLabel->setJustificationType (Justification::centredLeft);
    sixteenthLabel->setEditable (false, false, false);
    sixteenthLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    sixteenthLabel->setColour (TextEditor::textColourId, Colours::black);
    sixteenthLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    sixteenthLabel->setBounds (0, 335, 100, 30);

    addAndMakeVisible (thirtySecondLabel = new Label ("thirtySecondLabel",
                                                      TRANS("1/32:")));
    thirtySecondLabel->setFont (Font ("Arial", 30.00f, Font::plain));
    thirtySecondLabel->setJustificationType (Justification::centredLeft);
    thirtySecondLabel->setEditable (false, false, false);
    thirtySecondLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    thirtySecondLabel->setColour (TextEditor::textColourId, Colours::black);
    thirtySecondLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    thirtySecondLabel->setBounds (0, 375, 100, 30);

    addAndMakeVisible (sixtyFourthLabel = new Label ("sixtyFourthLabel",
                                                     TRANS("1/64:")));
    sixtyFourthLabel->setFont (Font ("Arial", 30.00f, Font::plain));
    sixtyFourthLabel->setJustificationType (Justification::centredLeft);
    sixtyFourthLabel->setEditable (false, false, false);
    sixtyFourthLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    sixtyFourthLabel->setColour (TextEditor::textColourId, Colours::black);
    sixtyFourthLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    sixtyFourthLabel->setBounds (0, 415, 100, 30);

    addAndMakeVisible (oneHundreAndTwentyEighthLabel = new Label ("oneHundreAndTwentyEighthLabel",
                                                                  TRANS("1/128:")));
    oneHundreAndTwentyEighthLabel->setFont (Font ("Arial", 30.00f, Font::plain));
    oneHundreAndTwentyEighthLabel->setJustificationType (Justification::centredLeft);
    oneHundreAndTwentyEighthLabel->setEditable (false, false, false);
    oneHundreAndTwentyEighthLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    oneHundreAndTwentyEighthLabel->setColour (TextEditor::textColourId, Colours::black);
    oneHundreAndTwentyEighthLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    oneHundreAndTwentyEighthLabel->setBounds (0, 455, 100, 30);

    addAndMakeVisible (tapButton = new TextButton ("tapButton"));
    tapButton->setButtonText (TRANS("Tap Tempo"));
    tapButton->addListener (this);
    tapButton->setColour (TextButton::buttonColourId, Colour (0xffadaaaa));
    tapButton->setColour (TextButton::textColourOffId, Colour (0xff353535));

    tapButton->setBounds (250, 115, 250, 30);

    addAndMakeVisible (wholeNormalLabel = new Label ("new label",
                                                     String()));
    wholeNormalLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    wholeNormalLabel->setJustificationType (Justification::centredLeft);
    wholeNormalLabel->setEditable (false, false, false);
    wholeNormalLabel->setColour (TextEditor::textColourId, Colours::black);
    wholeNormalLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    wholeNormalLabel->setBounds (125, 175, 125, 30);

    addAndMakeVisible (wholeDottedLabel = new Label ("wholeDottedLabel",
                                                     String()));
    wholeDottedLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    wholeDottedLabel->setJustificationType (Justification::centredLeft);
    wholeDottedLabel->setEditable (false, false, false);
    wholeDottedLabel->setColour (TextEditor::textColourId, Colours::black);
    wholeDottedLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    wholeDottedLabel->setBounds (250, 175, 125, 30);

    addAndMakeVisible (wholeTripletLabel = new Label ("wholeTripletLabel",
                                                      TRANS("\n")));
    wholeTripletLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    wholeTripletLabel->setJustificationType (Justification::centredLeft);
    wholeTripletLabel->setEditable (false, false, false);
    wholeTripletLabel->setColour (TextEditor::textColourId, Colours::black);
    wholeTripletLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    wholeTripletLabel->setBounds (375, 175, 125, 30);

    addAndMakeVisible (halfNormalLabel = new Label ("halfNormalLabel",
                                                    String()));
    halfNormalLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    halfNormalLabel->setJustificationType (Justification::centredLeft);
    halfNormalLabel->setEditable (false, false, false);
    halfNormalLabel->setColour (TextEditor::textColourId, Colours::black);
    halfNormalLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    halfNormalLabel->setBounds (125, 215, 125, 30);

    addAndMakeVisible (halfDottedLabel = new Label ("halfDottedLabel",
                                                    String()));
    halfDottedLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    halfDottedLabel->setJustificationType (Justification::centredLeft);
    halfDottedLabel->setEditable (false, false, false);
    halfDottedLabel->setColour (TextEditor::textColourId, Colours::black);
    halfDottedLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    halfDottedLabel->setBounds (250, 215, 125, 28);

    addAndMakeVisible (halfTripletLabel = new Label ("halfTripletLabel",
                                                     String()));
    halfTripletLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    halfTripletLabel->setJustificationType (Justification::centredLeft);
    halfTripletLabel->setEditable (false, false, false);
    halfTripletLabel->setColour (TextEditor::textColourId, Colours::black);
    halfTripletLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    halfTripletLabel->setBounds (375, 215, 125, 30);

    addAndMakeVisible (quarterNormalLabel = new Label ("quarterNormalLabel",
                                                       String()));
    quarterNormalLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    quarterNormalLabel->setJustificationType (Justification::centredLeft);
    quarterNormalLabel->setEditable (false, false, false);
    quarterNormalLabel->setColour (TextEditor::textColourId, Colours::black);
    quarterNormalLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    quarterNormalLabel->setBounds (125, 255, 125, 30);

    addAndMakeVisible (quarterDottedLabel = new Label ("quarterDottedLabel",
                                                       String()));
    quarterDottedLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    quarterDottedLabel->setJustificationType (Justification::centredLeft);
    quarterDottedLabel->setEditable (false, false, false);
    quarterDottedLabel->setColour (TextEditor::textColourId, Colours::black);
    quarterDottedLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    quarterDottedLabel->setBounds (250, 255, 125, 30);

    addAndMakeVisible (quarterTripletLabel = new Label ("quarterTripletLabel",
                                                        String()));
    quarterTripletLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    quarterTripletLabel->setJustificationType (Justification::centredLeft);
    quarterTripletLabel->setEditable (false, false, false);
    quarterTripletLabel->setColour (TextEditor::textColourId, Colours::black);
    quarterTripletLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    quarterTripletLabel->setBounds (375, 255, 125, 30);

    addAndMakeVisible (eighthNormalLabel = new Label ("eighthNormalLabel",
                                                      String()));
    eighthNormalLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    eighthNormalLabel->setJustificationType (Justification::centredLeft);
    eighthNormalLabel->setEditable (false, false, false);
    eighthNormalLabel->setColour (TextEditor::textColourId, Colours::black);
    eighthNormalLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    eighthNormalLabel->setBounds (125, 295, 125, 30);

    addAndMakeVisible (eighthDottedLabel = new Label ("eighthDottedLabel",
                                                      String()));
    eighthDottedLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    eighthDottedLabel->setJustificationType (Justification::centredLeft);
    eighthDottedLabel->setEditable (false, false, false);
    eighthDottedLabel->setColour (TextEditor::textColourId, Colours::black);
    eighthDottedLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    eighthDottedLabel->setBounds (250, 295, 125, 30);

    addAndMakeVisible (eighthTripletLabel = new Label ("eighthTripletLabel",
                                                       String()));
    eighthTripletLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    eighthTripletLabel->setJustificationType (Justification::centredLeft);
    eighthTripletLabel->setEditable (false, false, false);
    eighthTripletLabel->setColour (TextEditor::textColourId, Colours::black);
    eighthTripletLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    eighthTripletLabel->setBounds (375, 295, 125, 30);

    addAndMakeVisible (sixteenthNormalLabel = new Label ("sixteenthNormalLabel",
                                                         String()));
    sixteenthNormalLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    sixteenthNormalLabel->setJustificationType (Justification::centredLeft);
    sixteenthNormalLabel->setEditable (false, false, false);
    sixteenthNormalLabel->setColour (TextEditor::textColourId, Colours::black);
    sixteenthNormalLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    sixteenthNormalLabel->setBounds (125, 335, 125, 30);

    addAndMakeVisible (sixteenthDottedLabel = new Label ("sixteenthDottedLabel",
                                                         String()));
    sixteenthDottedLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    sixteenthDottedLabel->setJustificationType (Justification::centredLeft);
    sixteenthDottedLabel->setEditable (false, false, false);
    sixteenthDottedLabel->setColour (TextEditor::textColourId, Colours::black);
    sixteenthDottedLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    sixteenthDottedLabel->setBounds (250, 335, 125, 30);

    addAndMakeVisible (sixteenthTripletLabel = new Label ("sixteenthTripletLabel",
                                                          String()));
    sixteenthTripletLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    sixteenthTripletLabel->setJustificationType (Justification::centredLeft);
    sixteenthTripletLabel->setEditable (false, false, false);
    sixteenthTripletLabel->setColour (TextEditor::textColourId, Colours::black);
    sixteenthTripletLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    sixteenthTripletLabel->setBounds (375, 335, 125, 30);

    addAndMakeVisible (thirtySecondNormalLabel = new Label ("thirtySecondNormalLabel",
                                                            String()));
    thirtySecondNormalLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    thirtySecondNormalLabel->setJustificationType (Justification::centredLeft);
    thirtySecondNormalLabel->setEditable (false, false, false);
    thirtySecondNormalLabel->setColour (TextEditor::textColourId, Colours::black);
    thirtySecondNormalLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    thirtySecondNormalLabel->setBounds (125, 375, 125, 30);

    addAndMakeVisible (thirtySecondDottedLabel = new Label ("thirtySecondDottedLabel",
                                                            String()));
    thirtySecondDottedLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    thirtySecondDottedLabel->setJustificationType (Justification::centredLeft);
    thirtySecondDottedLabel->setEditable (false, false, false);
    thirtySecondDottedLabel->setColour (TextEditor::textColourId, Colours::black);
    thirtySecondDottedLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    thirtySecondDottedLabel->setBounds (250, 375, 125, 30);

    addAndMakeVisible (thirtySecondTripletLabel = new Label ("thirtySecondTripletLabel",
                                                             String()));
    thirtySecondTripletLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    thirtySecondTripletLabel->setJustificationType (Justification::centredLeft);
    thirtySecondTripletLabel->setEditable (false, false, false);
    thirtySecondTripletLabel->setColour (TextEditor::textColourId, Colours::black);
    thirtySecondTripletLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    thirtySecondTripletLabel->setBounds (375, 375, 125, 30);

    addAndMakeVisible (sixtyFourthNormalLabel = new Label ("sixtyFourthNormalLabel",
                                                           String()));
    sixtyFourthNormalLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    sixtyFourthNormalLabel->setJustificationType (Justification::centredLeft);
    sixtyFourthNormalLabel->setEditable (false, false, false);
    sixtyFourthNormalLabel->setColour (TextEditor::textColourId, Colours::black);
    sixtyFourthNormalLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    sixtyFourthNormalLabel->setBounds (125, 415, 125, 30);

    addAndMakeVisible (sixtyFourthDottedLabel = new Label ("sixtyFourthDottedLabel",
                                                           String()));
    sixtyFourthDottedLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    sixtyFourthDottedLabel->setJustificationType (Justification::centredLeft);
    sixtyFourthDottedLabel->setEditable (false, false, false);
    sixtyFourthDottedLabel->setColour (TextEditor::textColourId, Colours::black);
    sixtyFourthDottedLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    sixtyFourthDottedLabel->setBounds (250, 415, 125, 30);

    addAndMakeVisible (sixtyFourthTripletLabel = new Label ("sixtyFourthTripletLabel",
                                                            String()));
    sixtyFourthTripletLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    sixtyFourthTripletLabel->setJustificationType (Justification::centredLeft);
    sixtyFourthTripletLabel->setEditable (false, false, false);
    sixtyFourthTripletLabel->setColour (TextEditor::textColourId, Colours::black);
    sixtyFourthTripletLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    sixtyFourthTripletLabel->setBounds (375, 415, 125, 30);

    addAndMakeVisible (oneTwentyEighthNormalLabel = new Label ("oneTwentyEighthNormalLabel",
                                                               String()));
    oneTwentyEighthNormalLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    oneTwentyEighthNormalLabel->setJustificationType (Justification::centredLeft);
    oneTwentyEighthNormalLabel->setEditable (false, false, false);
    oneTwentyEighthNormalLabel->setColour (TextEditor::textColourId, Colours::black);
    oneTwentyEighthNormalLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    oneTwentyEighthNormalLabel->setBounds (125, 455, 125, 30);

    addAndMakeVisible (oneTwentyEighthDottedLabel = new Label ("oneTwentyEighthDottedLabel",
                                                               String()));
    oneTwentyEighthDottedLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    oneTwentyEighthDottedLabel->setJustificationType (Justification::centredLeft);
    oneTwentyEighthDottedLabel->setEditable (false, false, false);
    oneTwentyEighthDottedLabel->setColour (TextEditor::textColourId, Colours::black);
    oneTwentyEighthDottedLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    oneTwentyEighthDottedLabel->setBounds (250, 455, 125, 30);

    addAndMakeVisible (oneTwentyEighthTripletLabel = new Label ("oneTwentyEighthTripletLabel",
                                                                String()));
    oneTwentyEighthTripletLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    oneTwentyEighthTripletLabel->setJustificationType (Justification::centredLeft);
    oneTwentyEighthTripletLabel->setEditable (false, false, false);
    oneTwentyEighthTripletLabel->setColour (TextEditor::textColourId, Colours::black);
    oneTwentyEighthTripletLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    oneTwentyEighthTripletLabel->setBounds (375, 455, 125, 30);

    addAndMakeVisible (hzToggle = new ToggleButton ("hzToggle"));
    hzToggle->setButtonText (TRANS("Hz"));
    hzToggle->addListener (this);

    hzToggle->setBounds (63, 150, 62, 20);

    addAndMakeVisible (msToggle = new ToggleButton ("msToggle"));
    msToggle->setButtonText (TRANS("ms"));
    msToggle->addListener (this);

    msToggle->setBounds (0, 150, 62, 20);

    addAndMakeVisible (coarseResolutionToggle = new ToggleButton ("coarseResolutionToggle"));
    coarseResolutionToggle->setButtonText (TRANS("Coarse"));
    coarseResolutionToggle->addListener (this);

    coarseResolutionToggle->setBounds (0, 65, 75, 20);

    addAndMakeVisible (fineResolutionToggle = new ToggleButton ("fineResolutionToggle"));
    fineResolutionToggle->setButtonText (TRANS("Fine"));
    fineResolutionToggle->addListener (this);

    fineResolutionToggle->setBounds (125, 65, 75, 20);

    addAndMakeVisible (bpmOutputLabel = new Label ("bpmOutputLabel",
                                                   String()));
    bpmOutputLabel->setFont (Font ("Arial", 30.00f, Font::plain));
    bpmOutputLabel->setJustificationType (Justification::centred);
    bpmOutputLabel->setEditable (true, true, false);
    bpmOutputLabel->setColour (TextEditor::textColourId, Colours::black);
    bpmOutputLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    bpmOutputLabel->addListener (this);

    bpmOutputLabel->setBounds (190, 60, 120, 30);

    addAndMakeVisible (bpmLabel = new Label ("bpmLabel",
                                             TRANS("BPM")));
    bpmLabel->setFont (Font ("Arial", 30.00f, Font::plain));
    bpmLabel->setJustificationType (Justification::centred);
    bpmLabel->setEditable (false, false, false);
    bpmLabel->setColour (TextEditor::textColourId, Colours::black);
    bpmLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    bpmLabel->setBounds (300, 60, 76, 30);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (500, 490);


    //[Constructor] You can add your own custom stuff here..

    tempoSlider->setValue (120);

    // Set millisecond mode to default
    msToggle->setToggleState (true, dontSendNotification);

    // Allow for right-clicking for velocity sensitive sliding
    tempoSlider->setPopupMenuEnabled (true);

    tapButton->setTriggeredOnMouseDown (true);

    bpmLabel->addListener (this);

    delayTimeCalculatorLabel->addMouseListener (this, false);
    tapButton->addMouseListener (this, false);

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
    hzToggle = nullptr;
    msToggle = nullptr;
    coarseResolutionToggle = nullptr;
    fineResolutionToggle = nullptr;
    bpmOutputLabel = nullptr;
    bpmLabel = nullptr;


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

    // Add dividing line below product name
    g.setColour (Colours::white);
    g.setOpacity (0.25);
    int y = 55, distanceFromEdge = 17, thickness = 1;
    g.drawLine (distanceFromEdge, y, getWidth() - distanceFromEdge, y, thickness);

    //[/UserPaint]
}

void MainComponent::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

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

        tempoSlider->setValue (tempoSlider->getValue() * 2);

        //[/UserButtonCode_doubleTempoButton]
    }
    else if (buttonThatWasClicked == halfTempoButton)
    {
        //[UserButtonCode_halfTempoButton] -- add your button handler code here..

        tempoSlider->setValue (tempoSlider->getValue() / 2);

        //[/UserButtonCode_halfTempoButton]
    }
    else if (buttonThatWasClicked == tapButton)
    {
        //[UserButtonCode_tapButton] -- add your button handler code here..

        tempoSlider->setValue (tapTempo.calculateTempo());

        // Add tap count to Tap Tempo button
        tapButton->setButtonText ("Tap Tempo (" + (String) tapTempo.getTapCount() + ")");

        //[/UserButtonCode_tapButton]
    }
    else if (buttonThatWasClicked == hzToggle)
    {
        //[UserButtonCode_hzToggle] -- add your button handler code here..

        // This makes sure that Hz toggle is always on
        hzToggle->setToggleState (true, dontSendNotification);

        // Turn off ms toggle automatically so that only one mode can be on at a time
        msToggle->setToggleState (false, dontSendNotification);

        updateValuesAndFields();

        //[/UserButtonCode_hzToggle]
    }
    else if (buttonThatWasClicked == msToggle)
    {
        //[UserButtonCode_msToggle] -- add your button handler code here..

        // This makes sure that ms toggle is always on
        msToggle->setToggleState (true, dontSendNotification);

        // Turn off Hz mode automatically so that only one mode can be on at a time
        hzToggle->setToggleState (false, dontSendNotification);

        updateValuesAndFields();

        //[/UserButtonCode_msToggle]
    }
    else if (buttonThatWasClicked == coarseResolutionToggle)
    {
        //[UserButtonCode_coarseResolutionToggle] -- add your button handler code here..

        if (coarseResolutionToggle->getToggleState())
            coarseResolutionChosen();

        //[/UserButtonCode_coarseResolutionToggle]
    }
    else if (buttonThatWasClicked == fineResolutionToggle)
    {
        //[UserButtonCode_fineResolutionToggle] -- add your button handler code here..

        if (fineResolutionToggle->getToggleState())
            fineResolutionChosen();

        //[/UserButtonCode_fineResolutionToggle]
    }

    //[UserbuttonClicked_Post]

    if (userWantsStandardResolution())
        standardResolutionChosen();

    //[/UserbuttonClicked_Post]
}

void MainComponent::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == tempoSlider)
    {
        //[UserSliderCode_tempoSlider] -- add your slider handling code here..

        setBpmLabelValue();
        updateValuesAndFields();

        //[/UserSliderCode_tempoSlider]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}

void MainComponent::labelTextChanged (Label* labelThatHasChanged)
{
    //[UserlabelTextChanged_Pre]
    //[/UserlabelTextChanged_Pre]

    if (labelThatHasChanged == bpmOutputLabel)
    {
        //[UserLabelCode_bpmOutputLabel] -- add your label text handling code here..
        //[/UserLabelCode_bpmOutputLabel]
    }

    //[UserlabelTextChanged_Post]
    //[/UserlabelTextChanged_Post]
}

void MainComponent::mouseMove (const MouseEvent& e)
{
    //[UserCode_mouseMove] -- Add your code here...

    // Dont reset unless needs reset (tap count is greater than 0)
    // Don't reset if mouse moves and is hoving over Tap Tempo button
    // because user is likely clicking the button and doesn't want it reset automatically
    // Only reset if mouse moves and isn't on Tap Tempo button, this takes care of reseting when using the 'T' key
    if (tapTempo.getTapCount() > 0)
        if (e.eventComponent->getName() != tapButton->getName())
            resetTapTempo();

    //[/UserCode_mouseMove]
}

void MainComponent::mouseEnter (const MouseEvent& e)
{
    //[UserCode_mouseEnter] -- Add your code here...

    if (e.eventComponent->getName() == delayTimeCalculatorLabel->getName())
    {
        // Change text color to white
        delayTimeCalculatorLabel->setColour(Label::textColourId, Colours::white);
    }

    //[/UserCode_mouseEnter]
}

void MainComponent::mouseExit (const MouseEvent& e)
{
    //[UserCode_mouseExit] -- Add your code here...

    if (e.eventComponent->getName() == delayTimeCalculatorLabel->getName())
    {
        // Change text color to original gray used
        delayTimeCalculatorLabel->setColour(Label::textColourId,
                                            normalLabel->findColour(normalLabel->textColourId));
    }

    if (e.eventComponent->getName() == tapButton->getName())
        resetTapTempo();

    //[/UserCode_mouseExit]
}

void MainComponent::mouseUp (const MouseEvent& e)
{
    //[UserCode_mouseUp] -- Add your code here...

    if (e.eventComponent->getName() == delayTimeCalculatorLabel->getName())
        buildInformationWindow();

    //[/UserCode_mouseUp]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...

bool MainComponent::keyPressed (const juce::KeyPress &key)
{
    if (key == 'C')
        coarseResolutionChosen();

    else if (key == 'S')
        standardResolutionChosen();

    else if (key == 'F')
        fineResolutionChosen();

    else if (key == '1')
        halfTempoButton->triggerClick();

    else if (key == '2')
        doubleTempoButton->triggerClick();

    else if (key == 'T')
        tapButton->triggerClick();

    else if (key == 'R')
        resetTapTempo();

    else if (key == 'M')
        msToggle->triggerClick();

    else if (key == 'H')
        hzToggle->triggerClick();

    else if (key == KeyPress::spaceKey)
        roundTempo();

    else if (key == KeyPress::rightKey)
        tempoSlider->setValue (tempoSlider->getValue() + 5);

    else if (key == KeyPress::leftKey)
        tempoSlider->setValue (tempoSlider->getValue() - 5);

    else if (key == KeyPress::upKey)
        tempoSlider->setValue (tempoSlider->getValue() + 1);

    else if (key == KeyPress::downKey)
        tempoSlider->setValue (tempoSlider->getValue() - 1);

    return true;
}

void MainComponent::setupLabelCustomFont()
{
    delayTimeCalculatorLabel->setFont (customFont.getCalistoMT());
}

void MainComponent::launchURL (const char *hyperLink)
{
    URL uRL (hyperLink);
    uRL.launchInDefaultBrowser();
}

void MainComponent::roundTempo()
{
    int truncatedValue    = (int) tempoSlider->getValue();
    double roundingFactor = tempoSlider->getValue() - truncatedValue;

    if (roundingFactor >= 0.5)
        tempoSlider->setValue (truncatedValue + 1);

    else
        tempoSlider->setValue (truncatedValue);
}

bool MainComponent::userWantsStandardResolution()
{
    if (! coarseResolutionToggle->getToggleState())
        if (! fineResolutionToggle->getToggleState())
            return true;

    return false;
}

void MainComponent::coarseResolutionChosen()
{
    engageResolutionSetting (true, false, 1);
}

void MainComponent::standardResolutionChosen()
{
    engageResolutionSetting (false, false, 0.1);
}

void MainComponent::fineResolutionChosen()
{
    engageResolutionSetting (false, true, 0.01);
}

void MainComponent::engageResolutionSetting (const bool &isCoarseSelected,
                                             const bool &isFineSelected, const double &increment)
{
    tempoSlider->setRange (1, 1000, increment);
    setBpmLabelValue();

    coarseResolutionToggle->setToggleState (isCoarseSelected, dontSendNotification);
    fineResolutionToggle->setToggleState (isFineSelected, dontSendNotification);

    updateValuesAndFields();
}

void MainComponent::setBpmLabelValue()
{
    bpmLabel->setText (tempoSlider->getTextFromValue(tempoSlider->getValue()), dontSendNotification);
}

void MainComponent::updateValuesAndFields()
{
    // Update all values in object and update fields

    if (msToggle->getToggleState())
        values.calculateMilliseconds (tempoSlider->getValue());

    else
        values.calculateHertz (tempoSlider->getValue());

    populateFieldsWithValues();
}

void MainComponent::populateFieldsWithValues()
{
    // Set values for all text labels
    wholeNormalLabel->setText ((String) values.getWholeNormal(), dontSendNotification);
    wholeDottedLabel->setText ((String) values.getWholeDotted(), dontSendNotification);
    wholeTripletLabel->setText ((String) values.getWholeTriplet(), dontSendNotification);

    halfNormalLabel->setText ((String) values.getHalfNormal(), dontSendNotification);
    halfDottedLabel->setText ((String) values.getHalfDotted(), dontSendNotification);
    halfTripletLabel->setText ((String) values.getHalfTriplet(), dontSendNotification);

    quarterNormalLabel->setText ((String) values.getQuarterNormal(), dontSendNotification);
    quarterDottedLabel->setText ((String) values.getQuarterDotted(), dontSendNotification);
    quarterTripletLabel->setText ((String) values.getQuarterTriplet(), dontSendNotification);

    eighthNormalLabel->setText ((String) values.getEighthNormal(), dontSendNotification);
    eighthDottedLabel->setText ((String) values.getEighthDotted(), dontSendNotification);
    eighthTripletLabel->setText ((String) values.getEighthTriplet(), dontSendNotification);

    sixteenthNormalLabel->setText ((String) values.getSixteenthNormal(), dontSendNotification);
    sixteenthDottedLabel->setText ((String) values.getSixteenthDotted(), dontSendNotification);
    sixteenthTripletLabel->setText ((String) values.getSixteenthTriplet(), dontSendNotification);

    thirtySecondNormalLabel->setText ((String) values.getThirtySecondNormal(), dontSendNotification);
    thirtySecondDottedLabel->setText ((String) values.getThirtySecondDotted(), dontSendNotification);
    thirtySecondTripletLabel->setText ((String) values.getThirtySecondTriplet(), dontSendNotification);

    sixtyFourthNormalLabel->setText ((String) values.getSixtyFouthNormal(), dontSendNotification);
    sixtyFourthDottedLabel->setText ((String) values.getSixtyFouthDotted(), dontSendNotification);
    sixtyFourthTripletLabel->setText ((String) values.getSixtyFouthTriplet(), dontSendNotification);

    oneTwentyEighthNormalLabel->setText ((String) values.getOneHundredAndTwentyEighthNormal(), dontSendNotification);
    oneTwentyEighthDottedLabel->setText ((String) values.getOneHundredAndTwentyEighthDotted(), dontSendNotification);
    oneTwentyEighthTripletLabel->setText ((String) values.getOneHundredAndTwentyEighthTriplet(), dontSendNotification);
}

void MainComponent::resetTapTempo()
{
    tapTempo.resetMainCalculationHolders();

    // Change Tap Tempo button text back to normal, excluding tap count
    tapButton->setButtonText ("Tap Tempo");
}

void MainComponent::buildInformationWindow()
{
    // Don't allow multiple copies of this window to be made
    if (basicWindow == NULL)
    {
        basicWindow = new BasicWindow ("Information", Colours::grey,
                                       DocumentWindow::closeButton |
                                       DocumentWindow::minimiseButton);

        basicWindow->setUsingNativeTitleBar (true);
        basicWindow->setContentOwned (new InformationComponent(), true);

        int centerOfThisComponentX = getScreenPosition().x + (getWidth() / 2);
        int centerOfThisComponentY = getScreenPosition().y + (getHeight() / 2);
        basicWindow->setCentrePosition (centerOfThisComponentX, centerOfThisComponentY);

        basicWindow->setVisible (true);
    }

    else
        delete basicWindow;
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
                 fixedSize="1" initialWidth="500" initialHeight="490">
  <METHODS>
    <METHOD name="mouseUp (const MouseEvent&amp; e)"/>
    <METHOD name="mouseEnter (const MouseEvent&amp; e)"/>
    <METHOD name="mouseExit (const MouseEvent&amp; e)"/>
    <METHOD name="mouseMove (const MouseEvent&amp; e)"/>
  </METHODS>
  <BACKGROUND backgroundColour="ff353535"/>
  <TEXTBUTTON name="doubleTempoButton" id="74a1161b6a8bd75d" memberName="doubleTempoButton"
              virtualName="" explicitFocusOrder="0" pos="125 115 125 30" bgColOff="ffadaaaa"
              textCol="ff353535" buttonText="2x" connectedEdges="0" needsCallback="1"
              radioGroupId="0"/>
  <TEXTBUTTON name="halfTempoButton" id="edac6a2aecdd8ef5" memberName="halfTempoButton"
              virtualName="" explicitFocusOrder="0" pos="0 115 125 30" bgColOff="ffadaaaa"
              textCol="ff353535" buttonText="(1/2)x" connectedEdges="0" needsCallback="1"
              radioGroupId="0"/>
  <SLIDER name="tempoSlider" id="1b36c66db8e52ea5" memberName="tempoSlider"
          virtualName="" explicitFocusOrder="0" pos="0 85 500 30" bkgcol="ff000000"
          thumbcol="ffffffff" trackcol="ffadaaaa" textboxtext="ffffffff"
          textboxbkgd="ff353535" textboxhighlight="ffadaaaa" textboxoutline="ff353535"
          min="1.00000000000000000000" max="1000.00000000000000000000"
          int="0.10000000000000000555" style="LinearHorizontal" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="50" textBoxHeight="20" skewFactor="0.50000000000000000000"
          needsCallback="1"/>
  <LABEL name="delayTimeCalculatorLabel" id="951f8323b93b29f2" memberName="delayTimeCalculatorLabel"
         virtualName="" explicitFocusOrder="0" pos="0 0 500 50" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="Delay Time Calculator"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Arial" fontsize="47.39999999999999857891" kerning="0.09500000000000000111"
         bold="0" italic="0" justification="36"/>
  <LABEL name="normalLabel" id="a751a1c9841b9424" memberName="normalLabel"
         virtualName="" explicitFocusOrder="0" pos="125 145 125 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="Normal&#10;" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="30.00000000000000000000" kerning="0.00000000000000000000"
         bold="0" italic="0" justification="33"/>
  <LABEL name="dottedLabel" id="f84ddade330c771e" memberName="dottedLabel"
         virtualName="" explicitFocusOrder="0" pos="250 145 125 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="Dotted" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="30.00000000000000000000" kerning="0.00000000000000000000"
         bold="0" italic="0" justification="33"/>
  <LABEL name="tripletLabel" id="24f4755bf6b035f2" memberName="tripletLabel"
         virtualName="" explicitFocusOrder="0" pos="375 145 125 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="Triplet" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="30.00000000000000000000" kerning="0.00000000000000000000"
         bold="0" italic="0" justification="33"/>
  <LABEL name="wholeLabel" id="84a944615f7ab97c" memberName="wholeLabel"
         virtualName="" explicitFocusOrder="0" pos="0 175 100 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="1:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="30.00000000000000000000" kerning="0.00000000000000000000"
         bold="0" italic="0" justification="33"/>
  <LABEL name="halfLabel" id="670aac61ca569af7" memberName="halfLabel"
         virtualName="" explicitFocusOrder="0" pos="0 215 100 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="1/2:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="30.00000000000000000000" kerning="0.00000000000000000000"
         bold="0" italic="0" justification="33"/>
  <LABEL name="quarterLabel" id="c5514ec2a3c07661" memberName="quarterLabel"
         virtualName="" explicitFocusOrder="0" pos="0 255 100 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="1/4:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="30.00000000000000000000" kerning="0.00000000000000000000"
         bold="0" italic="0" justification="33"/>
  <LABEL name="eighthLabel" id="49b134e52607b4bd" memberName="eighthLabel"
         virtualName="" explicitFocusOrder="0" pos="0 295 100 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="1/8:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="30.00000000000000000000" kerning="0.00000000000000000000"
         bold="0" italic="0" justification="33"/>
  <LABEL name="sixteenthLabel" id="15b5cdc975d8b4c1" memberName="sixteenthLabel"
         virtualName="" explicitFocusOrder="0" pos="0 335 100 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="1/16:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="30.00000000000000000000" kerning="0.00000000000000000000"
         bold="0" italic="0" justification="33"/>
  <LABEL name="thirtySecondLabel" id="286f381f35aec721" memberName="thirtySecondLabel"
         virtualName="" explicitFocusOrder="0" pos="0 375 100 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="1/32:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="30.00000000000000000000" kerning="0.00000000000000000000"
         bold="0" italic="0" justification="33"/>
  <LABEL name="sixtyFourthLabel" id="e0fec546bed640df" memberName="sixtyFourthLabel"
         virtualName="" explicitFocusOrder="0" pos="0 415 100 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="1/64:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="30.00000000000000000000" kerning="0.00000000000000000000"
         bold="0" italic="0" justification="33"/>
  <LABEL name="oneHundreAndTwentyEighthLabel" id="fe1fa9046023fc2a" memberName="oneHundreAndTwentyEighthLabel"
         virtualName="" explicitFocusOrder="0" pos="0 455 100 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="1/128:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="30.00000000000000000000" kerning="0.00000000000000000000"
         bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="tapButton" id="3cd8a4f5f3b122f8" memberName="tapButton"
              virtualName="" explicitFocusOrder="0" pos="250 115 250 30" bgColOff="ffadaaaa"
              textCol="ff353535" buttonText="Tap Tempo" connectedEdges="0"
              needsCallback="1" radioGroupId="0"/>
  <LABEL name="new label" id="3b0b371f9cfffd20" memberName="wholeNormalLabel"
         virtualName="" explicitFocusOrder="0" pos="125 175 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="33"/>
  <LABEL name="wholeDottedLabel" id="5aa96ffcf47310ae" memberName="wholeDottedLabel"
         virtualName="" explicitFocusOrder="0" pos="250 175 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="33"/>
  <LABEL name="wholeTripletLabel" id="acb484e802c4fea9" memberName="wholeTripletLabel"
         virtualName="" explicitFocusOrder="0" pos="375 175 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="&#10;" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="33"/>
  <LABEL name="halfNormalLabel" id="fb1b90b40fe022a1" memberName="halfNormalLabel"
         virtualName="" explicitFocusOrder="0" pos="125 215 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="33"/>
  <LABEL name="halfDottedLabel" id="29a3d055318a2256" memberName="halfDottedLabel"
         virtualName="" explicitFocusOrder="0" pos="250 215 125 28" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="33"/>
  <LABEL name="halfTripletLabel" id="474722dc22cd155b" memberName="halfTripletLabel"
         virtualName="" explicitFocusOrder="0" pos="375 215 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="33"/>
  <LABEL name="quarterNormalLabel" id="a0b43f6d2cebf017" memberName="quarterNormalLabel"
         virtualName="" explicitFocusOrder="0" pos="125 255 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="33"/>
  <LABEL name="quarterDottedLabel" id="6e5caff96007dec1" memberName="quarterDottedLabel"
         virtualName="" explicitFocusOrder="0" pos="250 255 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="33"/>
  <LABEL name="quarterTripletLabel" id="fe2643302e963795" memberName="quarterTripletLabel"
         virtualName="" explicitFocusOrder="0" pos="375 255 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="33"/>
  <LABEL name="eighthNormalLabel" id="aabf4b6c5866f43a" memberName="eighthNormalLabel"
         virtualName="" explicitFocusOrder="0" pos="125 295 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="33"/>
  <LABEL name="eighthDottedLabel" id="df0f0f30eec2686f" memberName="eighthDottedLabel"
         virtualName="" explicitFocusOrder="0" pos="250 295 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="33"/>
  <LABEL name="eighthTripletLabel" id="7b34c480a75f818" memberName="eighthTripletLabel"
         virtualName="" explicitFocusOrder="0" pos="375 295 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="33"/>
  <LABEL name="sixteenthNormalLabel" id="4b90b919d39c55aa" memberName="sixteenthNormalLabel"
         virtualName="" explicitFocusOrder="0" pos="125 335 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="33"/>
  <LABEL name="sixteenthDottedLabel" id="b8e062b942bd6161" memberName="sixteenthDottedLabel"
         virtualName="" explicitFocusOrder="0" pos="250 335 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="33"/>
  <LABEL name="sixteenthTripletLabel" id="bc5910a30828043e" memberName="sixteenthTripletLabel"
         virtualName="" explicitFocusOrder="0" pos="375 335 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="33"/>
  <LABEL name="thirtySecondNormalLabel" id="bafdfece957a48cd" memberName="thirtySecondNormalLabel"
         virtualName="" explicitFocusOrder="0" pos="125 375 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="33"/>
  <LABEL name="thirtySecondDottedLabel" id="d6c4232d51ea521d" memberName="thirtySecondDottedLabel"
         virtualName="" explicitFocusOrder="0" pos="250 375 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="33"/>
  <LABEL name="thirtySecondTripletLabel" id="c94aa63d85789829" memberName="thirtySecondTripletLabel"
         virtualName="" explicitFocusOrder="0" pos="375 375 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="33"/>
  <LABEL name="sixtyFourthNormalLabel" id="aba83195d8170afc" memberName="sixtyFourthNormalLabel"
         virtualName="" explicitFocusOrder="0" pos="125 415 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="33"/>
  <LABEL name="sixtyFourthDottedLabel" id="90fef0b42ac08a69" memberName="sixtyFourthDottedLabel"
         virtualName="" explicitFocusOrder="0" pos="250 415 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="33"/>
  <LABEL name="sixtyFourthTripletLabel" id="432ffa6d219d869e" memberName="sixtyFourthTripletLabel"
         virtualName="" explicitFocusOrder="0" pos="375 415 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="33"/>
  <LABEL name="oneTwentyEighthNormalLabel" id="a76923820541582b" memberName="oneTwentyEighthNormalLabel"
         virtualName="" explicitFocusOrder="0" pos="125 455 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="33"/>
  <LABEL name="oneTwentyEighthDottedLabel" id="9379aa3476074fe5" memberName="oneTwentyEighthDottedLabel"
         virtualName="" explicitFocusOrder="0" pos="250 455 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="33"/>
  <LABEL name="oneTwentyEighthTripletLabel" id="c3b2f04614c1679d" memberName="oneTwentyEighthTripletLabel"
         virtualName="" explicitFocusOrder="0" pos="375 455 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="33"/>
  <TOGGLEBUTTON name="hzToggle" id="3e5aa37d8e5a6de5" memberName="hzToggle" virtualName=""
                explicitFocusOrder="0" pos="63 150 62 20" buttonText="Hz" connectedEdges="0"
                needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="msToggle" id="8f5b18b58f39a727" memberName="msToggle" virtualName=""
                explicitFocusOrder="0" pos="0 150 62 20" buttonText="ms" connectedEdges="0"
                needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="coarseResolutionToggle" id="ba1bd947fd8c2a56" memberName="coarseResolutionToggle"
                virtualName="" explicitFocusOrder="0" pos="0 65 75 20" buttonText="Coarse"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="fineResolutionToggle" id="95774ae90e8bc93e" memberName="fineResolutionToggle"
                virtualName="" explicitFocusOrder="0" pos="125 65 75 20" buttonText="Fine"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <LABEL name="bpmOutputLabel" id="387c95ffe56ba517" memberName="bpmOutputLabel"
         virtualName="" explicitFocusOrder="0" pos="190 60 120 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="1" editableDoubleClick="1"
         focusDiscardsChanges="0" fontname="Arial" fontsize="30.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
  <LABEL name="bpmLabel" id="6bb4ca2a493b0d2e" memberName="bpmLabel" virtualName=""
         explicitFocusOrder="0" pos="300 60 76 30" edTextCol="ff000000"
         edBkgCol="0" labelText="BPM" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Arial" fontsize="30.00000000000000000000"
         kerning="0.00000000000000000000" bold="0" italic="0" justification="36"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
