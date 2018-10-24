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

    doubleTempoButton.reset (new TextButton ("doubleTempoButton"));
    addAndMakeVisible (doubleTempoButton.get());
    doubleTempoButton->setButtonText (TRANS("2x"));
    doubleTempoButton->addListener (this);
    doubleTempoButton->setColour (TextButton::buttonColourId, Colour (0xffadaaaa));
    doubleTempoButton->setColour (TextButton::textColourOffId, Colour (0xff353535));

    doubleTempoButton->setBounds (125, 115, 125, 30);

    halfTempoButton.reset (new TextButton ("halfTempoButton"));
    addAndMakeVisible (halfTempoButton.get());
    halfTempoButton->setButtonText (TRANS("(1/2)x"));
    halfTempoButton->addListener (this);
    halfTempoButton->setColour (TextButton::buttonColourId, Colour (0xffadaaaa));
    halfTempoButton->setColour (TextButton::textColourOffId, Colour (0xff353535));

    halfTempoButton->setBounds (0, 115, 125, 30);

    tempoSlider.reset (new Slider ("tempoSlider"));
    addAndMakeVisible (tempoSlider.get());
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

    delayTimeCalculatorLabel.reset (new Label ("delayTimeCalculatorLabel",
                                               TRANS("Delay Time Calculator")));
    addAndMakeVisible (delayTimeCalculatorLabel.get());
    delayTimeCalculatorLabel->setFont (Font ("Arial", 47.4f, Font::plain).withExtraKerningFactor (0.095f));
    delayTimeCalculatorLabel->setJustificationType (Justification::centred);
    delayTimeCalculatorLabel->setEditable (false, false, false);
    delayTimeCalculatorLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    delayTimeCalculatorLabel->setColour (TextEditor::textColourId, Colours::black);
    delayTimeCalculatorLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    delayTimeCalculatorLabel->setBounds (0, 0, 500, 50);

    normalLabel.reset (new Label ("normalLabel",
                                  TRANS("Normal\n")));
    addAndMakeVisible (normalLabel.get());
    normalLabel->setFont (Font ("Arial", 30.0f, Font::plain));
    normalLabel->setJustificationType (Justification::centredLeft);
    normalLabel->setEditable (false, false, false);
    normalLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    normalLabel->setColour (TextEditor::textColourId, Colours::black);
    normalLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    normalLabel->setBounds (125, 145, 125, 30);

    dottedLabel.reset (new Label ("dottedLabel",
                                  TRANS("Dotted")));
    addAndMakeVisible (dottedLabel.get());
    dottedLabel->setFont (Font ("Arial", 30.0f, Font::plain));
    dottedLabel->setJustificationType (Justification::centredLeft);
    dottedLabel->setEditable (false, false, false);
    dottedLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    dottedLabel->setColour (TextEditor::textColourId, Colours::black);
    dottedLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    dottedLabel->setBounds (250, 145, 125, 30);

    tripletLabel.reset (new Label ("tripletLabel",
                                   TRANS("Triplet")));
    addAndMakeVisible (tripletLabel.get());
    tripletLabel->setFont (Font ("Arial", 30.0f, Font::plain));
    tripletLabel->setJustificationType (Justification::centredLeft);
    tripletLabel->setEditable (false, false, false);
    tripletLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    tripletLabel->setColour (TextEditor::textColourId, Colours::black);
    tripletLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    tripletLabel->setBounds (375, 145, 125, 30);

    wholeLabel.reset (new Label ("wholeLabel",
                                 TRANS("1:")));
    addAndMakeVisible (wholeLabel.get());
    wholeLabel->setFont (Font ("Arial", 30.0f, Font::plain));
    wholeLabel->setJustificationType (Justification::centredLeft);
    wholeLabel->setEditable (false, false, false);
    wholeLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    wholeLabel->setColour (TextEditor::textColourId, Colours::black);
    wholeLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    wholeLabel->setBounds (0, 175, 100, 30);

    halfLabel.reset (new Label ("halfLabel",
                                TRANS("1/2:")));
    addAndMakeVisible (halfLabel.get());
    halfLabel->setFont (Font ("Arial", 30.0f, Font::plain));
    halfLabel->setJustificationType (Justification::centredLeft);
    halfLabel->setEditable (false, false, false);
    halfLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    halfLabel->setColour (TextEditor::textColourId, Colours::black);
    halfLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    halfLabel->setBounds (0, 215, 100, 30);

    quarterLabel.reset (new Label ("quarterLabel",
                                   TRANS("1/4:")));
    addAndMakeVisible (quarterLabel.get());
    quarterLabel->setFont (Font ("Arial", 30.0f, Font::plain));
    quarterLabel->setJustificationType (Justification::centredLeft);
    quarterLabel->setEditable (false, false, false);
    quarterLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    quarterLabel->setColour (TextEditor::textColourId, Colours::black);
    quarterLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    quarterLabel->setBounds (0, 255, 100, 30);

    eighthLabel.reset (new Label ("eighthLabel",
                                  TRANS("1/8:")));
    addAndMakeVisible (eighthLabel.get());
    eighthLabel->setFont (Font ("Arial", 30.0f, Font::plain));
    eighthLabel->setJustificationType (Justification::centredLeft);
    eighthLabel->setEditable (false, false, false);
    eighthLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    eighthLabel->setColour (TextEditor::textColourId, Colours::black);
    eighthLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    eighthLabel->setBounds (0, 295, 100, 30);

    sixteenthLabel.reset (new Label ("sixteenthLabel",
                                     TRANS("1/16:")));
    addAndMakeVisible (sixteenthLabel.get());
    sixteenthLabel->setFont (Font ("Arial", 30.0f, Font::plain));
    sixteenthLabel->setJustificationType (Justification::centredLeft);
    sixteenthLabel->setEditable (false, false, false);
    sixteenthLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    sixteenthLabel->setColour (TextEditor::textColourId, Colours::black);
    sixteenthLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    sixteenthLabel->setBounds (0, 335, 100, 30);

    thirtySecondLabel.reset (new Label ("thirtySecondLabel",
                                        TRANS("1/32:")));
    addAndMakeVisible (thirtySecondLabel.get());
    thirtySecondLabel->setFont (Font ("Arial", 30.0f, Font::plain));
    thirtySecondLabel->setJustificationType (Justification::centredLeft);
    thirtySecondLabel->setEditable (false, false, false);
    thirtySecondLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    thirtySecondLabel->setColour (TextEditor::textColourId, Colours::black);
    thirtySecondLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    thirtySecondLabel->setBounds (0, 375, 100, 30);

    sixtyFourthLabel.reset (new Label ("sixtyFourthLabel",
                                       TRANS("1/64:")));
    addAndMakeVisible (sixtyFourthLabel.get());
    sixtyFourthLabel->setFont (Font ("Arial", 30.0f, Font::plain));
    sixtyFourthLabel->setJustificationType (Justification::centredLeft);
    sixtyFourthLabel->setEditable (false, false, false);
    sixtyFourthLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    sixtyFourthLabel->setColour (TextEditor::textColourId, Colours::black);
    sixtyFourthLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    sixtyFourthLabel->setBounds (0, 415, 100, 30);

    oneHundreAndTwentyEighthLabel.reset (new Label ("oneHundreAndTwentyEighthLabel",
                                                    TRANS("1/128:")));
    addAndMakeVisible (oneHundreAndTwentyEighthLabel.get());
    oneHundreAndTwentyEighthLabel->setFont (Font ("Arial", 30.0f, Font::plain));
    oneHundreAndTwentyEighthLabel->setJustificationType (Justification::centredLeft);
    oneHundreAndTwentyEighthLabel->setEditable (false, false, false);
    oneHundreAndTwentyEighthLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    oneHundreAndTwentyEighthLabel->setColour (TextEditor::textColourId, Colours::black);
    oneHundreAndTwentyEighthLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    oneHundreAndTwentyEighthLabel->setBounds (0, 455, 100, 30);

    tapButton.reset (new TextButton ("tapButton"));
    addAndMakeVisible (tapButton.get());
    tapButton->setButtonText (TRANS("Tap Tempo"));
    tapButton->addListener (this);
    tapButton->setColour (TextButton::buttonColourId, Colour (0xffadaaaa));
    tapButton->setColour (TextButton::textColourOffId, Colour (0xff353535));

    tapButton->setBounds (250, 115, 250, 30);

    wholeNLabel.reset (new Label ("wholeNLabel",
                                  String()));
    addAndMakeVisible (wholeNLabel.get());
    wholeNLabel->setFont (Font (25.0f, Font::plain).withTypefaceStyle ("Regular"));
    wholeNLabel->setJustificationType (Justification::centredLeft);
    wholeNLabel->setEditable (false, false, false);
    wholeNLabel->setColour (TextEditor::textColourId, Colours::black);
    wholeNLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    wholeNLabel->setBounds (125, 175, 125, 30);

    wholeDLabel.reset (new Label ("wholeDLabel",
                                  String()));
    addAndMakeVisible (wholeDLabel.get());
    wholeDLabel->setFont (Font (25.0f, Font::plain).withTypefaceStyle ("Regular"));
    wholeDLabel->setJustificationType (Justification::centredLeft);
    wholeDLabel->setEditable (false, false, false);
    wholeDLabel->setColour (TextEditor::textColourId, Colours::black);
    wholeDLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    wholeDLabel->setBounds (250, 175, 125, 30);

    wholeTLabel.reset (new Label ("wholeTLabel",
                                  TRANS("\n")));
    addAndMakeVisible (wholeTLabel.get());
    wholeTLabel->setFont (Font (25.0f, Font::plain).withTypefaceStyle ("Regular"));
    wholeTLabel->setJustificationType (Justification::centredLeft);
    wholeTLabel->setEditable (false, false, false);
    wholeTLabel->setColour (TextEditor::textColourId, Colours::black);
    wholeTLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    wholeTLabel->setBounds (375, 175, 125, 30);

    halfNLabel.reset (new Label ("halfNLabel",
                                 String()));
    addAndMakeVisible (halfNLabel.get());
    halfNLabel->setFont (Font (25.0f, Font::plain).withTypefaceStyle ("Regular"));
    halfNLabel->setJustificationType (Justification::centredLeft);
    halfNLabel->setEditable (false, false, false);
    halfNLabel->setColour (TextEditor::textColourId, Colours::black);
    halfNLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    halfNLabel->setBounds (125, 215, 125, 30);

    halfDLabel.reset (new Label ("halfDLabel",
                                 String()));
    addAndMakeVisible (halfDLabel.get());
    halfDLabel->setFont (Font (25.0f, Font::plain).withTypefaceStyle ("Regular"));
    halfDLabel->setJustificationType (Justification::centredLeft);
    halfDLabel->setEditable (false, false, false);
    halfDLabel->setColour (TextEditor::textColourId, Colours::black);
    halfDLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    halfDLabel->setBounds (250, 215, 125, 28);

    halfTLabel.reset (new Label ("halfTLabel",
                                 String()));
    addAndMakeVisible (halfTLabel.get());
    halfTLabel->setFont (Font (25.0f, Font::plain).withTypefaceStyle ("Regular"));
    halfTLabel->setJustificationType (Justification::centredLeft);
    halfTLabel->setEditable (false, false, false);
    halfTLabel->setColour (TextEditor::textColourId, Colours::black);
    halfTLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    halfTLabel->setBounds (375, 215, 125, 30);

    quarterNLabel.reset (new Label ("quarterNLabel",
                                    String()));
    addAndMakeVisible (quarterNLabel.get());
    quarterNLabel->setFont (Font (25.0f, Font::plain).withTypefaceStyle ("Regular"));
    quarterNLabel->setJustificationType (Justification::centredLeft);
    quarterNLabel->setEditable (false, false, false);
    quarterNLabel->setColour (TextEditor::textColourId, Colours::black);
    quarterNLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    quarterNLabel->setBounds (125, 255, 125, 30);

    quarterDLabel.reset (new Label ("quarterDLabel",
                                    String()));
    addAndMakeVisible (quarterDLabel.get());
    quarterDLabel->setFont (Font (25.0f, Font::plain).withTypefaceStyle ("Regular"));
    quarterDLabel->setJustificationType (Justification::centredLeft);
    quarterDLabel->setEditable (false, false, false);
    quarterDLabel->setColour (TextEditor::textColourId, Colours::black);
    quarterDLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    quarterDLabel->setBounds (250, 255, 125, 30);

    quarterTLabel.reset (new Label ("quarterTLabel",
                                    String()));
    addAndMakeVisible (quarterTLabel.get());
    quarterTLabel->setFont (Font (25.0f, Font::plain).withTypefaceStyle ("Regular"));
    quarterTLabel->setJustificationType (Justification::centredLeft);
    quarterTLabel->setEditable (false, false, false);
    quarterTLabel->setColour (TextEditor::textColourId, Colours::black);
    quarterTLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    quarterTLabel->setBounds (375, 255, 125, 30);

    v8thNLabel.reset (new Label ("v8thNLabel",
                                 String()));
    addAndMakeVisible (v8thNLabel.get());
    v8thNLabel->setFont (Font (25.0f, Font::plain).withTypefaceStyle ("Regular"));
    v8thNLabel->setJustificationType (Justification::centredLeft);
    v8thNLabel->setEditable (false, false, false);
    v8thNLabel->setColour (TextEditor::textColourId, Colours::black);
    v8thNLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    v8thNLabel->setBounds (125, 295, 125, 30);

    v8thDLabel.reset (new Label ("v8thDLabel",
                                 String()));
    addAndMakeVisible (v8thDLabel.get());
    v8thDLabel->setFont (Font (25.0f, Font::plain).withTypefaceStyle ("Regular"));
    v8thDLabel->setJustificationType (Justification::centredLeft);
    v8thDLabel->setEditable (false, false, false);
    v8thDLabel->setColour (TextEditor::textColourId, Colours::black);
    v8thDLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    v8thDLabel->setBounds (250, 295, 125, 30);

    v8thTLabel.reset (new Label ("v8thTLabel",
                                 String()));
    addAndMakeVisible (v8thTLabel.get());
    v8thTLabel->setFont (Font (25.0f, Font::plain).withTypefaceStyle ("Regular"));
    v8thTLabel->setJustificationType (Justification::centredLeft);
    v8thTLabel->setEditable (false, false, false);
    v8thTLabel->setColour (TextEditor::textColourId, Colours::black);
    v8thTLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    v8thTLabel->setBounds (375, 295, 125, 30);

    v16thNLabel.reset (new Label ("v16thNLabel",
                                  String()));
    addAndMakeVisible (v16thNLabel.get());
    v16thNLabel->setFont (Font (25.0f, Font::plain).withTypefaceStyle ("Regular"));
    v16thNLabel->setJustificationType (Justification::centredLeft);
    v16thNLabel->setEditable (false, false, false);
    v16thNLabel->setColour (TextEditor::textColourId, Colours::black);
    v16thNLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    v16thNLabel->setBounds (125, 335, 125, 30);

    v16thDLabel.reset (new Label ("v16thDLabel",
                                  String()));
    addAndMakeVisible (v16thDLabel.get());
    v16thDLabel->setFont (Font (25.0f, Font::plain).withTypefaceStyle ("Regular"));
    v16thDLabel->setJustificationType (Justification::centredLeft);
    v16thDLabel->setEditable (false, false, false);
    v16thDLabel->setColour (TextEditor::textColourId, Colours::black);
    v16thDLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    v16thDLabel->setBounds (250, 335, 125, 30);

    v16thTLabel.reset (new Label ("v16thTLabel",
                                  String()));
    addAndMakeVisible (v16thTLabel.get());
    v16thTLabel->setFont (Font (25.0f, Font::plain).withTypefaceStyle ("Regular"));
    v16thTLabel->setJustificationType (Justification::centredLeft);
    v16thTLabel->setEditable (false, false, false);
    v16thTLabel->setColour (TextEditor::textColourId, Colours::black);
    v16thTLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    v16thTLabel->setBounds (375, 335, 125, 30);

    v32ndNLabel.reset (new Label ("v32ndNLabel",
                                  String()));
    addAndMakeVisible (v32ndNLabel.get());
    v32ndNLabel->setFont (Font (25.0f, Font::plain).withTypefaceStyle ("Regular"));
    v32ndNLabel->setJustificationType (Justification::centredLeft);
    v32ndNLabel->setEditable (false, false, false);
    v32ndNLabel->setColour (TextEditor::textColourId, Colours::black);
    v32ndNLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    v32ndNLabel->setBounds (125, 375, 125, 30);

    v32ndDLabel.reset (new Label ("v32ndDLabel",
                                  String()));
    addAndMakeVisible (v32ndDLabel.get());
    v32ndDLabel->setFont (Font (25.0f, Font::plain).withTypefaceStyle ("Regular"));
    v32ndDLabel->setJustificationType (Justification::centredLeft);
    v32ndDLabel->setEditable (false, false, false);
    v32ndDLabel->setColour (TextEditor::textColourId, Colours::black);
    v32ndDLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    v32ndDLabel->setBounds (250, 375, 125, 30);

    v32ndTLabel.reset (new Label ("v32ndTLabel",
                                  String()));
    addAndMakeVisible (v32ndTLabel.get());
    v32ndTLabel->setFont (Font (25.0f, Font::plain).withTypefaceStyle ("Regular"));
    v32ndTLabel->setJustificationType (Justification::centredLeft);
    v32ndTLabel->setEditable (false, false, false);
    v32ndTLabel->setColour (TextEditor::textColourId, Colours::black);
    v32ndTLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    v32ndTLabel->setBounds (375, 375, 125, 30);

    v64thNLabel.reset (new Label ("v64thNLabel",
                                  String()));
    addAndMakeVisible (v64thNLabel.get());
    v64thNLabel->setFont (Font (25.0f, Font::plain).withTypefaceStyle ("Regular"));
    v64thNLabel->setJustificationType (Justification::centredLeft);
    v64thNLabel->setEditable (false, false, false);
    v64thNLabel->setColour (TextEditor::textColourId, Colours::black);
    v64thNLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    v64thNLabel->setBounds (125, 415, 125, 30);

    v64thDLabel.reset (new Label ("v64thDLabel",
                                  String()));
    addAndMakeVisible (v64thDLabel.get());
    v64thDLabel->setFont (Font (25.0f, Font::plain).withTypefaceStyle ("Regular"));
    v64thDLabel->setJustificationType (Justification::centredLeft);
    v64thDLabel->setEditable (false, false, false);
    v64thDLabel->setColour (TextEditor::textColourId, Colours::black);
    v64thDLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    v64thDLabel->setBounds (250, 415, 125, 30);

    v64thTLabel.reset (new Label ("v64thTLabel",
                                  String()));
    addAndMakeVisible (v64thTLabel.get());
    v64thTLabel->setFont (Font (25.0f, Font::plain).withTypefaceStyle ("Regular"));
    v64thTLabel->setJustificationType (Justification::centredLeft);
    v64thTLabel->setEditable (false, false, false);
    v64thTLabel->setColour (TextEditor::textColourId, Colours::black);
    v64thTLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    v64thTLabel->setBounds (375, 415, 125, 30);

    v128thNLabel.reset (new Label ("v128thNLabel",
                                   String()));
    addAndMakeVisible (v128thNLabel.get());
    v128thNLabel->setFont (Font (25.0f, Font::plain).withTypefaceStyle ("Regular"));
    v128thNLabel->setJustificationType (Justification::centredLeft);
    v128thNLabel->setEditable (false, false, false);
    v128thNLabel->setColour (TextEditor::textColourId, Colours::black);
    v128thNLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    v128thNLabel->setBounds (125, 455, 125, 30);

    v128thDLabel.reset (new Label ("v128thDLabel",
                                   String()));
    addAndMakeVisible (v128thDLabel.get());
    v128thDLabel->setFont (Font (25.0f, Font::plain).withTypefaceStyle ("Regular"));
    v128thDLabel->setJustificationType (Justification::centredLeft);
    v128thDLabel->setEditable (false, false, false);
    v128thDLabel->setColour (TextEditor::textColourId, Colours::black);
    v128thDLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    v128thDLabel->setBounds (250, 455, 125, 30);

    v128thTLabel.reset (new Label ("v128thTLabel",
                                   String()));
    addAndMakeVisible (v128thTLabel.get());
    v128thTLabel->setFont (Font (25.0f, Font::plain).withTypefaceStyle ("Regular"));
    v128thTLabel->setJustificationType (Justification::centredLeft);
    v128thTLabel->setEditable (false, false, false);
    v128thTLabel->setColour (TextEditor::textColourId, Colours::black);
    v128thTLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    v128thTLabel->setBounds (375, 455, 125, 30);

    hzToggle.reset (new ToggleButton ("hzToggle"));
    addAndMakeVisible (hzToggle.get());
    hzToggle->setButtonText (TRANS("Hz"));
    hzToggle->addListener (this);

    hzToggle->setBounds (63, 150, 62, 20);

    msToggle.reset (new ToggleButton ("msToggle"));
    addAndMakeVisible (msToggle.get());
    msToggle->setButtonText (TRANS("ms"));
    msToggle->addListener (this);

    msToggle->setBounds (0, 150, 62, 20);

    coarseResolutionToggle.reset (new ToggleButton ("coarseResolutionToggle"));
    addAndMakeVisible (coarseResolutionToggle.get());
    coarseResolutionToggle->setButtonText (TRANS("Coarse"));
    coarseResolutionToggle->addListener (this);

    coarseResolutionToggle->setBounds (0, 65, 75, 20);

    fineResolutionToggle.reset (new ToggleButton ("fineResolutionToggle"));
    addAndMakeVisible (fineResolutionToggle.get());
    fineResolutionToggle->setButtonText (TRANS("Fine"));
    fineResolutionToggle->addListener (this);

    fineResolutionToggle->setBounds (125, 65, 75, 20);

    bpmLabel.reset (new Label ("bpmLabel",
                               TRANS("BPM")));
    addAndMakeVisible (bpmLabel.get());
    bpmLabel->setFont (Font ("Arial", 30.0f, Font::plain));
    bpmLabel->setJustificationType (Justification::centred);
    bpmLabel->setEditable (false, false, false);
    bpmLabel->setColour (TextEditor::textColourId, Colours::black);
    bpmLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    bpmLabel->setBounds (300, 60, 101, 30);

    bpmValuesLabel.reset (new Label ("bpmValuesLabel",
                                     String()));
    addAndMakeVisible (bpmValuesLabel.get());
    bpmValuesLabel->setFont (Font ("Arial", 30.0f, Font::plain));
    bpmValuesLabel->setJustificationType (Justification::centred);
    bpmValuesLabel->setEditable (true, true, false);
    bpmValuesLabel->setColour (TextEditor::textColourId, Colours::black);
    bpmValuesLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    bpmValuesLabel->addListener (this);

    bpmValuesLabel->setBounds (190, 60, 120, 30);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (500, 490);


    //[Constructor] You can add your own custom stuff here..

    tempoSlider->setValue (120);

    // Set millisecond mode to default
    msToggle->setToggleState (true, dontSendNotification);

    // Allow for right-clicking for velocity sensitive sliding
    tempoSlider->setPopupMenuEnabled (true);

    // Tap tempo is more accurate when clicks are registered on down-click versus up-click
    tapButton->setTriggeredOnMouseDown (true);

    bpmValuesLabel->addListener (this);

    delayTimeCalculatorLabel->addMouseListener (this, false);

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
    wholeNLabel = nullptr;
    wholeDLabel = nullptr;
    wholeTLabel = nullptr;
    halfNLabel = nullptr;
    halfDLabel = nullptr;
    halfTLabel = nullptr;
    quarterNLabel = nullptr;
    quarterDLabel = nullptr;
    quarterTLabel = nullptr;
    v8thNLabel = nullptr;
    v8thDLabel = nullptr;
    v8thTLabel = nullptr;
    v16thNLabel = nullptr;
    v16thDLabel = nullptr;
    v16thTLabel = nullptr;
    v32ndNLabel = nullptr;
    v32ndDLabel = nullptr;
    v32ndTLabel = nullptr;
    v64thNLabel = nullptr;
    v64thDLabel = nullptr;
    v64thTLabel = nullptr;
    v128thNLabel = nullptr;
    v128thDLabel = nullptr;
    v128thTLabel = nullptr;
    hzToggle = nullptr;
    msToggle = nullptr;
    coarseResolutionToggle = nullptr;
    fineResolutionToggle = nullptr;
    bpmLabel = nullptr;
    bpmValuesLabel = nullptr;


    //[Destructor]. You can add your own custom destruction code here..

    // Delete the basicWindow that this SafePointer points to and NULL the pointer
    // in case both windows are open when exiting the main application
    basicWindowSafePtr.deleteAndZero();

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

    if (buttonThatWasClicked == doubleTempoButton.get())
    {
        //[UserButtonCode_doubleTempoButton] -- add your button handler code here..

        tempoSlider->setValue (tempoSlider->getValue() * 2);

        //[/UserButtonCode_doubleTempoButton]
    }
    else if (buttonThatWasClicked == halfTempoButton.get())
    {
        //[UserButtonCode_halfTempoButton] -- add your button handler code here..

        tempoSlider->setValue (tempoSlider->getValue() / 2);

        //[/UserButtonCode_halfTempoButton]
    }
    else if (buttonThatWasClicked == tapButton.get())
    {
        //[UserButtonCode_tapButton] -- add your button handler code here..

        int tempo = tapTempo.calculateTempo();

        tempoSlider->setValue (tempo);

        // Add tap count to Tap Tempo button
        tapCountString = ((String) tapTempo.getTapCount()).paddedLeft ('0', 3);
        tapButton->setButtonText ("Tap Tempo (" + tapCountString + ")");

        // Start timer to auto reset
        if (tapTempo.getTapCount() > 1)
            startTimer ((60 / (double) tempo) * 4 * 1000);

        //[/UserButtonCode_tapButton]
    }
    else if (buttonThatWasClicked == hzToggle.get())
    {
        //[UserButtonCode_hzToggle] -- add your button handler code here..

        // This makes sure that Hz toggle is always on
        hzToggle->setToggleState (true, dontSendNotification);

        // Turn off ms toggle automatically so that only one mode can be on at a time
        msToggle->setToggleState (false, dontSendNotification);

        updateValuesAndFields();

        //[/UserButtonCode_hzToggle]
    }
    else if (buttonThatWasClicked == msToggle.get())
    {
        //[UserButtonCode_msToggle] -- add your button handler code here..

        // This makes sure that ms toggle is always on
        msToggle->setToggleState (true, dontSendNotification);

        // Turn off Hz mode automatically so that only one mode can be on at a time
        hzToggle->setToggleState (false, dontSendNotification);

        updateValuesAndFields();

        //[/UserButtonCode_msToggle]
    }
    else if (buttonThatWasClicked == coarseResolutionToggle.get())
    {
        //[UserButtonCode_coarseResolutionToggle] -- add your button handler code here..

        if (coarseResolutionToggle->getToggleState())
            coarseResolutionChosen();

        //[/UserButtonCode_coarseResolutionToggle]
    }
    else if (buttonThatWasClicked == fineResolutionToggle.get())
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

    if (sliderThatWasMoved == tempoSlider.get())
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

    if (labelThatHasChanged == bpmValuesLabel.get())
    {
        //[UserLabelCode_bpmValuesLabel] -- add your label text handling code here..

        tempoSlider->setValue (bpmValuesLabel->getTextValue().toString().getDoubleValue());

        // Whenever the slider moves, the new value is inserted into bpmValuesLabel by the
        // sliderValueChanged method.  Sometimes, when typing in values, the slider doesn't
        // move, so bpmValuesLabel doesn't update.  This could occur in cases such as typing
        // in characters, which gets changed to the value of one, then typing in characters again,
        // which also results in the value of one, now characters are left in bpmValuesLabel.
        // This makes sure that this cannot happen, the output field is always set.
        setBpmLabelValue();

        //[/UserLabelCode_bpmValuesLabel]
    }

    //[UserlabelTextChanged_Post]
    //[/UserlabelTextChanged_Post]
}

void MainComponent::mouseEnter (const MouseEvent& e)
{
    //[UserCode_mouseEnter] -- Add your code here...

    if (e.eventComponent->getName() == delayTimeCalculatorLabel->getName())
    {
        // Change text color to white
        delayTimeCalculatorLabel->setColour (Label::textColourId, Colours::white);
    }

    //[/UserCode_mouseEnter]
}

void MainComponent::mouseExit (const MouseEvent& e)
{
    //[UserCode_mouseExit] -- Add your code here...

    if (e.eventComponent == delayTimeCalculatorLabel.get())
    {
        // Change text color to original gray used
        delayTimeCalculatorLabel->setColour (Label::textColourId,
                                             normalLabel->findColour (normalLabel->textColourId));
    }

    //[/UserCode_mouseExit]
}

void MainComponent::mouseUp (const MouseEvent& e)
{
    //[UserCode_mouseUp] -- Add your code here...

    if (e.eventComponent == delayTimeCalculatorLabel.get())
        buildInformationWindow();

    //[/UserCode_mouseUp]
}

bool MainComponent::keyPressed (const KeyPress& key)
{
    //[UserCode_keyPressed] -- Add your code here...

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
        adjustTempo (5);

    else if (key == KeyPress::leftKey)
        adjustTempo (-5);

    else if (key == KeyPress::upKey)
        adjustTempo (1);

    else if (key == KeyPress::downKey)
        adjustTempo (-1);

    return true;

    //[/UserCode_keyPressed]
}

void MainComponent::adjustTempo (const int &adjustmentValue)
{
    tempoSlider->setValue (tempoSlider->getValue() + adjustmentValue);
}

void MainComponent::setupLabelCustomFont()
{
    typewriterFont = Font (Typeface::createSystemTypefaceFor (BinaryData::MonospaceTypewriter_ttf,
                                                              BinaryData::MonospaceTypewriter_ttfSize));

    typewriterFont.setHeight (50);
    delayTimeCalculatorLabel->setFont (typewriterFont);

//    coarseResolutionToggle->
//    fineResolutionToggle->
//    msToggle->
//    hzToggle->

    // 3 buttons

    typewriterFont.setHeight (30);
    bpmValuesLabel->setFont (typewriterFont);
    bpmLabel->setFont (typewriterFont);

    normalLabel->setFont (typewriterFont);
    dottedLabel->setFont (typewriterFont);
    tripletLabel->setFont (typewriterFont);

    wholeLabel->setFont (typewriterFont);
    halfLabel->setFont (typewriterFont);
    quarterLabel->setFont (typewriterFont);
    eighthLabel->setFont (typewriterFont);
    sixteenthLabel->setFont (typewriterFont);
    thirtySecondLabel->setFont (typewriterFont);
    sixtyFourthLabel->setFont (typewriterFont);
    oneHundreAndTwentyEighthLabel->setFont (typewriterFont);

    wholeNLabel->setFont (typewriterFont);
    wholeDLabel->setFont (typewriterFont);
    wholeTLabel->setFont (typewriterFont);
    halfNLabel->setFont (typewriterFont);
    halfDLabel->setFont (typewriterFont);
    halfTLabel->setFont (typewriterFont);
    quarterNLabel->setFont (typewriterFont);
    quarterDLabel->setFont (typewriterFont);
    quarterTLabel->setFont (typewriterFont);
    v8thNLabel->setFont (typewriterFont);
    v8thDLabel->setFont (typewriterFont);
    v8thTLabel->setFont (typewriterFont);
    v16thNLabel->setFont (typewriterFont);
    v16thDLabel->setFont (typewriterFont);
    v16thTLabel->setFont (typewriterFont);
    v32ndNLabel->setFont (typewriterFont);
    v32ndDLabel->setFont (typewriterFont);
    v32ndTLabel->setFont (typewriterFont);
    v64thNLabel->setFont (typewriterFont);
    v64thDLabel->setFont (typewriterFont);
    v64thTLabel->setFont (typewriterFont);
    v128thNLabel->setFont (typewriterFont);
    v128thDLabel->setFont (typewriterFont);
    v128thTLabel->setFont (typewriterFont);

    // then do info window font
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
    bpmValuesLabel->setText (tempoSlider->getTextFromValue (tempoSlider->getValue()), dontSendNotification);
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
    wholeNLabel->setText ((String) values.getWholeN(), dontSendNotification);
    wholeDLabel->setText ((String) values.getWholeD(), dontSendNotification);
    wholeTLabel->setText ((String) values.getWholeT(), dontSendNotification);

    halfNLabel->setText ((String) values.getHalfN(), dontSendNotification);
    halfDLabel->setText ((String) values.getHalfD(), dontSendNotification);
    halfTLabel->setText ((String) values.getHalfT(), dontSendNotification);

    quarterNLabel->setText ((String) values.getQuarterN(), dontSendNotification);
    quarterDLabel->setText ((String) values.getQuarterD(), dontSendNotification);
    quarterTLabel->setText ((String) values.getQuarterT(), dontSendNotification);

    v8thNLabel->setText ((String) values.get8thN(), dontSendNotification);
    v8thDLabel->setText ((String) values.get8thD(), dontSendNotification);
    v8thTLabel->setText ((String) values.get8thT(), dontSendNotification);

    v16thNLabel->setText ((String) values.get16thN(), dontSendNotification);
    v16thDLabel->setText ((String) values.get16thD(), dontSendNotification);
    v16thTLabel->setText ((String) values.get16thT(), dontSendNotification);

    v32ndNLabel->setText ((String) values.get32ndN(), dontSendNotification);
    v32ndDLabel->setText ((String) values.get32ndD(), dontSendNotification);
    v32ndTLabel->setText ((String) values.get32ndT(), dontSendNotification);

    v64thNLabel->setText ((String) values.get64thN(), dontSendNotification);
    v64thDLabel->setText ((String) values.get64thD(), dontSendNotification);
    v64thTLabel->setText ((String) values.get64thT(), dontSendNotification);

    v128thNLabel->setText ((String) values.get128thN(), dontSendNotification);
    v128thDLabel->setText ((String) values.get128thD(), dontSendNotification);
    v128thTLabel->setText ((String) values.get128thT(), dontSendNotification);
}

void MainComponent::resetTapTempo()
{
    tapTempo.reset();

    // Change Tap Tempo button text back to normal, excluding tap count
    tapButton->setButtonText ("Tap Tempo");
}

void MainComponent::buildInformationWindow()
{
    // Don't allow multiple copies of this window to be made
    if (basicWindowSafePtr == nullptr)
    {
        basicWindowSafePtr = new BasicWindow ("Information", Colours::grey,
                                              DocumentWindow::closeButton |
                                              DocumentWindow::minimiseButton);

        basicWindowSafePtr->setUsingNativeTitleBar (true);
        basicWindowSafePtr->setContentOwned (new InformationComponent(), true);

        const int centerOfThisComponentX = getScreenPosition().x + (getWidth() / 2);
        const int centerOfThisComponentY = getScreenPosition().y + (getHeight() / 2);
        basicWindowSafePtr->setCentrePosition (centerOfThisComponentX, centerOfThisComponentY);

        basicWindowSafePtr->setVisible (true);
    }

    else
        basicWindowSafePtr.deleteAndZero();
}

void MainComponent::timerCallback()
{
    stopTimer();
    resetTapTempo();
}

//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="MainComponent" componentName=""
                 parentClasses="public Component, private Timer" constructorParams=""
                 variableInitialisers="" snapPixels="8" snapActive="1" snapShown="1"
                 overlayOpacity="0.33" fixedSize="1" initialWidth="500" initialHeight="490">
  <METHODS>
    <METHOD name="mouseUp (const MouseEvent&amp; e)"/>
    <METHOD name="mouseEnter (const MouseEvent&amp; e)"/>
    <METHOD name="mouseExit (const MouseEvent&amp; e)"/>
    <METHOD name="keyPressed (const KeyPress&amp; key)"/>
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
          min="1.0" max="1000.0" int="0.10000000000000000555" style="LinearHorizontal"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="50"
          textBoxHeight="20" skewFactor="0.5" needsCallback="1"/>
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
         fontsize="30.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="dottedLabel" id="f84ddade330c771e" memberName="dottedLabel"
         virtualName="" explicitFocusOrder="0" pos="250 145 125 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="Dotted" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="30.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="tripletLabel" id="24f4755bf6b035f2" memberName="tripletLabel"
         virtualName="" explicitFocusOrder="0" pos="375 145 125 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="Triplet" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="30.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="wholeLabel" id="84a944615f7ab97c" memberName="wholeLabel"
         virtualName="" explicitFocusOrder="0" pos="0 175 100 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="1:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="30.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="halfLabel" id="670aac61ca569af7" memberName="halfLabel"
         virtualName="" explicitFocusOrder="0" pos="0 215 100 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="1/2:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="30.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="quarterLabel" id="c5514ec2a3c07661" memberName="quarterLabel"
         virtualName="" explicitFocusOrder="0" pos="0 255 100 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="1/4:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="30.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="eighthLabel" id="49b134e52607b4bd" memberName="eighthLabel"
         virtualName="" explicitFocusOrder="0" pos="0 295 100 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="1/8:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="30.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="sixteenthLabel" id="15b5cdc975d8b4c1" memberName="sixteenthLabel"
         virtualName="" explicitFocusOrder="0" pos="0 335 100 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="1/16:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="30.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="thirtySecondLabel" id="286f381f35aec721" memberName="thirtySecondLabel"
         virtualName="" explicitFocusOrder="0" pos="0 375 100 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="1/32:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="30.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="sixtyFourthLabel" id="e0fec546bed640df" memberName="sixtyFourthLabel"
         virtualName="" explicitFocusOrder="0" pos="0 415 100 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="1/64:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="30.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="oneHundreAndTwentyEighthLabel" id="fe1fa9046023fc2a" memberName="oneHundreAndTwentyEighthLabel"
         virtualName="" explicitFocusOrder="0" pos="0 455 100 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="1/128:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="30.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="tapButton" id="3cd8a4f5f3b122f8" memberName="tapButton"
              virtualName="" explicitFocusOrder="0" pos="250 115 250 30" bgColOff="ffadaaaa"
              textCol="ff353535" buttonText="Tap Tempo" connectedEdges="0"
              needsCallback="1" radioGroupId="0"/>
  <LABEL name="wholeNLabel" id="3b0b371f9cfffd20" memberName="wholeNLabel"
         virtualName="" explicitFocusOrder="0" pos="125 175 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="wholeDLabel" id="5aa96ffcf47310ae" memberName="wholeDLabel"
         virtualName="" explicitFocusOrder="0" pos="250 175 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="wholeTLabel" id="acb484e802c4fea9" memberName="wholeTLabel"
         virtualName="" explicitFocusOrder="0" pos="375 175 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="&#10;" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="halfNLabel" id="fb1b90b40fe022a1" memberName="halfNLabel"
         virtualName="" explicitFocusOrder="0" pos="125 215 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="halfDLabel" id="29a3d055318a2256" memberName="halfDLabel"
         virtualName="" explicitFocusOrder="0" pos="250 215 125 28" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="halfTLabel" id="474722dc22cd155b" memberName="halfTLabel"
         virtualName="" explicitFocusOrder="0" pos="375 215 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="quarterNLabel" id="a0b43f6d2cebf017" memberName="quarterNLabel"
         virtualName="" explicitFocusOrder="0" pos="125 255 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="quarterDLabel" id="6e5caff96007dec1" memberName="quarterDLabel"
         virtualName="" explicitFocusOrder="0" pos="250 255 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="quarterTLabel" id="fe2643302e963795" memberName="quarterTLabel"
         virtualName="" explicitFocusOrder="0" pos="375 255 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="v8thNLabel" id="aabf4b6c5866f43a" memberName="v8thNLabel"
         virtualName="" explicitFocusOrder="0" pos="125 295 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="v8thDLabel" id="df0f0f30eec2686f" memberName="v8thDLabel"
         virtualName="" explicitFocusOrder="0" pos="250 295 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="v8thTLabel" id="7b34c480a75f818" memberName="v8thTLabel"
         virtualName="" explicitFocusOrder="0" pos="375 295 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="v16thNLabel" id="4b90b919d39c55aa" memberName="v16thNLabel"
         virtualName="" explicitFocusOrder="0" pos="125 335 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="v16thDLabel" id="b8e062b942bd6161" memberName="v16thDLabel"
         virtualName="" explicitFocusOrder="0" pos="250 335 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="v16thTLabel" id="bc5910a30828043e" memberName="v16thTLabel"
         virtualName="" explicitFocusOrder="0" pos="375 335 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="v32ndNLabel" id="bafdfece957a48cd" memberName="v32ndNLabel"
         virtualName="" explicitFocusOrder="0" pos="125 375 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="v32ndDLabel" id="d6c4232d51ea521d" memberName="v32ndDLabel"
         virtualName="" explicitFocusOrder="0" pos="250 375 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="v32ndTLabel" id="c94aa63d85789829" memberName="v32ndTLabel"
         virtualName="" explicitFocusOrder="0" pos="375 375 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="v64thNLabel" id="aba83195d8170afc" memberName="v64thNLabel"
         virtualName="" explicitFocusOrder="0" pos="125 415 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="v64thDLabel" id="90fef0b42ac08a69" memberName="v64thDLabel"
         virtualName="" explicitFocusOrder="0" pos="250 415 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="v64thTLabel" id="432ffa6d219d869e" memberName="v64thTLabel"
         virtualName="" explicitFocusOrder="0" pos="375 415 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="v128thNLabel" id="a76923820541582b" memberName="v128thNLabel"
         virtualName="" explicitFocusOrder="0" pos="125 455 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="v128thDLabel" id="9379aa3476074fe5" memberName="v128thDLabel"
         virtualName="" explicitFocusOrder="0" pos="250 455 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="v128thTLabel" id="c3b2f04614c1679d" memberName="v128thTLabel"
         virtualName="" explicitFocusOrder="0" pos="375 455 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
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
  <LABEL name="bpmLabel" id="6bb4ca2a493b0d2e" memberName="bpmLabel" virtualName=""
         explicitFocusOrder="0" pos="300 60 101 30" edTextCol="ff000000"
         edBkgCol="0" labelText="BPM" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Arial" fontsize="30.0" kerning="0.0"
         bold="0" italic="0" justification="36"/>
  <LABEL name="bpmValuesLabel" id="387c95ffe56ba517" memberName="bpmValuesLabel"
         virtualName="" explicitFocusOrder="0" pos="190 60 120 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="1" editableDoubleClick="1"
         focusDiscardsChanges="0" fontname="Arial" fontsize="30.0" kerning="0.0"
         bold="0" italic="0" justification="36"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
