/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 5.4.5

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2017 - ROLI Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
#include <math.h>
#include "InformationComponent.h"
#include "ToValues.hpp"
#include "ToTempo.hpp"
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
    delayTimeCalculatorLabel->setFont (Font ("Arial", 47.40f, Font::plain).withTypefaceStyle ("Regular").withExtraKerningFactor (0.095f));
    delayTimeCalculatorLabel->setJustificationType (Justification::centred);
    delayTimeCalculatorLabel->setEditable (false, false, false);
    delayTimeCalculatorLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    delayTimeCalculatorLabel->setColour (TextEditor::textColourId, Colours::black);
    delayTimeCalculatorLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    delayTimeCalculatorLabel->setBounds (0, 0, 500, 50);

    normalLabel.reset (new Label ("normalLabel",
                                  TRANS("Normal\n")));
    addAndMakeVisible (normalLabel.get());
    normalLabel->setFont (Font ("Arial", 30.00f, Font::plain).withTypefaceStyle ("Regular"));
    normalLabel->setJustificationType (Justification::centredLeft);
    normalLabel->setEditable (false, false, false);
    normalLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    normalLabel->setColour (TextEditor::textColourId, Colours::black);
    normalLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    normalLabel->setBounds (125, 145, 125, 30);

    dottedLabel.reset (new Label ("dottedLabel",
                                  TRANS("Dotted")));
    addAndMakeVisible (dottedLabel.get());
    dottedLabel->setFont (Font ("Arial", 30.00f, Font::plain).withTypefaceStyle ("Regular"));
    dottedLabel->setJustificationType (Justification::centredLeft);
    dottedLabel->setEditable (false, false, false);
    dottedLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    dottedLabel->setColour (TextEditor::textColourId, Colours::black);
    dottedLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    dottedLabel->setBounds (250, 145, 125, 30);

    tripletLabel.reset (new Label ("tripletLabel",
                                   TRANS("Triplet")));
    addAndMakeVisible (tripletLabel.get());
    tripletLabel->setFont (Font ("Arial", 30.00f, Font::plain).withTypefaceStyle ("Regular"));
    tripletLabel->setJustificationType (Justification::centredLeft);
    tripletLabel->setEditable (false, false, false);
    tripletLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    tripletLabel->setColour (TextEditor::textColourId, Colours::black);
    tripletLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    tripletLabel->setBounds (375, 145, 125, 30);

    wholeLabel.reset (new Label ("wholeLabel",
                                 TRANS("1:")));
    addAndMakeVisible (wholeLabel.get());
    wholeLabel->setFont (Font ("Arial", 30.00f, Font::plain).withTypefaceStyle ("Regular"));
    wholeLabel->setJustificationType (Justification::centredLeft);
    wholeLabel->setEditable (false, false, false);
    wholeLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    wholeLabel->setColour (TextEditor::textColourId, Colours::black);
    wholeLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    wholeLabel->setBounds (0, 175, 100, 30);

    halfLabel.reset (new Label ("halfLabel",
                                TRANS("1/2:")));
    addAndMakeVisible (halfLabel.get());
    halfLabel->setFont (Font ("Arial", 30.00f, Font::plain).withTypefaceStyle ("Regular"));
    halfLabel->setJustificationType (Justification::centredLeft);
    halfLabel->setEditable (false, false, false);
    halfLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    halfLabel->setColour (TextEditor::textColourId, Colours::black);
    halfLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    halfLabel->setBounds (0, 215, 100, 30);

    quarterLabel.reset (new Label ("quarterLabel",
                                   TRANS("1/4:")));
    addAndMakeVisible (quarterLabel.get());
    quarterLabel->setFont (Font ("Arial", 30.00f, Font::plain).withTypefaceStyle ("Regular"));
    quarterLabel->setJustificationType (Justification::centredLeft);
    quarterLabel->setEditable (false, false, false);
    quarterLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    quarterLabel->setColour (TextEditor::textColourId, Colours::black);
    quarterLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    quarterLabel->setBounds (0, 255, 100, 30);

    eighthLabel.reset (new Label ("eighthLabel",
                                  TRANS("1/8:")));
    addAndMakeVisible (eighthLabel.get());
    eighthLabel->setFont (Font ("Arial", 30.00f, Font::plain).withTypefaceStyle ("Regular"));
    eighthLabel->setJustificationType (Justification::centredLeft);
    eighthLabel->setEditable (false, false, false);
    eighthLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    eighthLabel->setColour (TextEditor::textColourId, Colours::black);
    eighthLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    eighthLabel->setBounds (0, 295, 100, 30);

    sixteenthLabel.reset (new Label ("sixteenthLabel",
                                     TRANS("1/16:")));
    addAndMakeVisible (sixteenthLabel.get());
    sixteenthLabel->setFont (Font ("Arial", 30.00f, Font::plain).withTypefaceStyle ("Regular"));
    sixteenthLabel->setJustificationType (Justification::centredLeft);
    sixteenthLabel->setEditable (false, false, false);
    sixteenthLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    sixteenthLabel->setColour (TextEditor::textColourId, Colours::black);
    sixteenthLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    sixteenthLabel->setBounds (0, 335, 100, 30);

    thirtySecondLabel.reset (new Label ("thirtySecondLabel",
                                        TRANS("1/32:")));
    addAndMakeVisible (thirtySecondLabel.get());
    thirtySecondLabel->setFont (Font ("Arial", 30.00f, Font::plain).withTypefaceStyle ("Regular"));
    thirtySecondLabel->setJustificationType (Justification::centredLeft);
    thirtySecondLabel->setEditable (false, false, false);
    thirtySecondLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    thirtySecondLabel->setColour (TextEditor::textColourId, Colours::black);
    thirtySecondLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    thirtySecondLabel->setBounds (0, 375, 100, 30);

    sixtyFourthLabel.reset (new Label ("sixtyFourthLabel",
                                       TRANS("1/64:")));
    addAndMakeVisible (sixtyFourthLabel.get());
    sixtyFourthLabel->setFont (Font ("Arial", 30.00f, Font::plain).withTypefaceStyle ("Regular"));
    sixtyFourthLabel->setJustificationType (Justification::centredLeft);
    sixtyFourthLabel->setEditable (false, false, false);
    sixtyFourthLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    sixtyFourthLabel->setColour (TextEditor::textColourId, Colours::black);
    sixtyFourthLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    sixtyFourthLabel->setBounds (0, 415, 100, 30);

    oneHundreAndTwentyEighthLabel.reset (new Label ("oneHundreAndTwentyEighthLabel",
                                                    TRANS("1/128:")));
    addAndMakeVisible (oneHundreAndTwentyEighthLabel.get());
    oneHundreAndTwentyEighthLabel->setFont (Font ("Arial", 30.00f, Font::plain).withTypefaceStyle ("Regular"));
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
    wholeNLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    wholeNLabel->setJustificationType (Justification::centredLeft);
    wholeNLabel->setEditable (true, true, false);
    wholeNLabel->setColour (TextEditor::textColourId, Colours::black);
    wholeNLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    wholeNLabel->addListener (this);

    wholeNLabel->setBounds (125, 175, 125, 30);

    wholeDLabel.reset (new Label ("wholeDLabel",
                                  String()));
    addAndMakeVisible (wholeDLabel.get());
    wholeDLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    wholeDLabel->setJustificationType (Justification::centredLeft);
    wholeDLabel->setEditable (true, true, false);
    wholeDLabel->setColour (TextEditor::textColourId, Colours::black);
    wholeDLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    wholeDLabel->addListener (this);

    wholeDLabel->setBounds (250, 175, 125, 30);

    wholeTLabel.reset (new Label ("wholeTLabel",
                                  TRANS("\n")));
    addAndMakeVisible (wholeTLabel.get());
    wholeTLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    wholeTLabel->setJustificationType (Justification::centredLeft);
    wholeTLabel->setEditable (true, true, false);
    wholeTLabel->setColour (TextEditor::textColourId, Colours::black);
    wholeTLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    wholeTLabel->addListener (this);

    wholeTLabel->setBounds (375, 175, 125, 30);

    halfNLabel.reset (new Label ("halfNLabel",
                                 String()));
    addAndMakeVisible (halfNLabel.get());
    halfNLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    halfNLabel->setJustificationType (Justification::centredLeft);
    halfNLabel->setEditable (true, true, false);
    halfNLabel->setColour (TextEditor::textColourId, Colours::black);
    halfNLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    halfNLabel->addListener (this);

    halfNLabel->setBounds (125, 215, 125, 30);

    halfDLabel.reset (new Label ("halfDLabel",
                                 String()));
    addAndMakeVisible (halfDLabel.get());
    halfDLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    halfDLabel->setJustificationType (Justification::centredLeft);
    halfDLabel->setEditable (true, true, false);
    halfDLabel->setColour (TextEditor::textColourId, Colours::black);
    halfDLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    halfDLabel->addListener (this);

    halfDLabel->setBounds (250, 215, 125, 28);

    halfTLabel.reset (new Label ("halfTLabel",
                                 String()));
    addAndMakeVisible (halfTLabel.get());
    halfTLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    halfTLabel->setJustificationType (Justification::centredLeft);
    halfTLabel->setEditable (true, true, false);
    halfTLabel->setColour (TextEditor::textColourId, Colours::black);
    halfTLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    halfTLabel->addListener (this);

    halfTLabel->setBounds (375, 215, 125, 30);

    quarterNLabel.reset (new Label ("quarterNLabel",
                                    String()));
    addAndMakeVisible (quarterNLabel.get());
    quarterNLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    quarterNLabel->setJustificationType (Justification::centredLeft);
    quarterNLabel->setEditable (true, true, false);
    quarterNLabel->setColour (TextEditor::textColourId, Colours::black);
    quarterNLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    quarterNLabel->addListener (this);

    quarterNLabel->setBounds (125, 255, 125, 30);

    quarterDLabel.reset (new Label ("quarterDLabel",
                                    String()));
    addAndMakeVisible (quarterDLabel.get());
    quarterDLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    quarterDLabel->setJustificationType (Justification::centredLeft);
    quarterDLabel->setEditable (true, true, false);
    quarterDLabel->setColour (TextEditor::textColourId, Colours::black);
    quarterDLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    quarterDLabel->addListener (this);

    quarterDLabel->setBounds (250, 255, 125, 30);

    quarterTLabel.reset (new Label ("quarterTLabel",
                                    String()));
    addAndMakeVisible (quarterTLabel.get());
    quarterTLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    quarterTLabel->setJustificationType (Justification::centredLeft);
    quarterTLabel->setEditable (true, true, false);
    quarterTLabel->setColour (TextEditor::textColourId, Colours::black);
    quarterTLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    quarterTLabel->addListener (this);

    quarterTLabel->setBounds (375, 255, 125, 30);

    v8thNLabel.reset (new Label ("v8thNLabel",
                                 String()));
    addAndMakeVisible (v8thNLabel.get());
    v8thNLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    v8thNLabel->setJustificationType (Justification::centredLeft);
    v8thNLabel->setEditable (true, true, false);
    v8thNLabel->setColour (TextEditor::textColourId, Colours::black);
    v8thNLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    v8thNLabel->addListener (this);

    v8thNLabel->setBounds (125, 295, 125, 30);

    v8thDLabel.reset (new Label ("v8thDLabel",
                                 String()));
    addAndMakeVisible (v8thDLabel.get());
    v8thDLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    v8thDLabel->setJustificationType (Justification::centredLeft);
    v8thDLabel->setEditable (true, true, false);
    v8thDLabel->setColour (TextEditor::textColourId, Colours::black);
    v8thDLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    v8thDLabel->addListener (this);

    v8thDLabel->setBounds (250, 295, 125, 30);

    v8thTLabel.reset (new Label ("v8thTLabel",
                                 String()));
    addAndMakeVisible (v8thTLabel.get());
    v8thTLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    v8thTLabel->setJustificationType (Justification::centredLeft);
    v8thTLabel->setEditable (true, true, false);
    v8thTLabel->setColour (TextEditor::textColourId, Colours::black);
    v8thTLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    v8thTLabel->addListener (this);

    v8thTLabel->setBounds (375, 295, 125, 30);

    v16thNLabel.reset (new Label ("v16thNLabel",
                                  String()));
    addAndMakeVisible (v16thNLabel.get());
    v16thNLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    v16thNLabel->setJustificationType (Justification::centredLeft);
    v16thNLabel->setEditable (true, true, false);
    v16thNLabel->setColour (TextEditor::textColourId, Colours::black);
    v16thNLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    v16thNLabel->addListener (this);

    v16thNLabel->setBounds (125, 335, 125, 30);

    v16thDLabel.reset (new Label ("v16thDLabel",
                                  String()));
    addAndMakeVisible (v16thDLabel.get());
    v16thDLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    v16thDLabel->setJustificationType (Justification::centredLeft);
    v16thDLabel->setEditable (true, true, false);
    v16thDLabel->setColour (TextEditor::textColourId, Colours::black);
    v16thDLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    v16thDLabel->addListener (this);

    v16thDLabel->setBounds (250, 335, 125, 30);

    v16thTLabel.reset (new Label ("v16thTLabel",
                                  String()));
    addAndMakeVisible (v16thTLabel.get());
    v16thTLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    v16thTLabel->setJustificationType (Justification::centredLeft);
    v16thTLabel->setEditable (true, true, false);
    v16thTLabel->setColour (TextEditor::textColourId, Colours::black);
    v16thTLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    v16thTLabel->addListener (this);

    v16thTLabel->setBounds (375, 335, 125, 30);

    v32ndNLabel.reset (new Label ("v32ndNLabel",
                                  String()));
    addAndMakeVisible (v32ndNLabel.get());
    v32ndNLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    v32ndNLabel->setJustificationType (Justification::centredLeft);
    v32ndNLabel->setEditable (true, true, false);
    v32ndNLabel->setColour (TextEditor::textColourId, Colours::black);
    v32ndNLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    v32ndNLabel->addListener (this);

    v32ndNLabel->setBounds (125, 375, 125, 30);

    v32ndDLabel.reset (new Label ("v32ndDLabel",
                                  String()));
    addAndMakeVisible (v32ndDLabel.get());
    v32ndDLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    v32ndDLabel->setJustificationType (Justification::centredLeft);
    v32ndDLabel->setEditable (true, true, false);
    v32ndDLabel->setColour (TextEditor::textColourId, Colours::black);
    v32ndDLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    v32ndDLabel->addListener (this);

    v32ndDLabel->setBounds (250, 375, 125, 30);

    v32ndTLabel.reset (new Label ("v32ndTLabel",
                                  String()));
    addAndMakeVisible (v32ndTLabel.get());
    v32ndTLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    v32ndTLabel->setJustificationType (Justification::centredLeft);
    v32ndTLabel->setEditable (true, true, false);
    v32ndTLabel->setColour (TextEditor::textColourId, Colours::black);
    v32ndTLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    v32ndTLabel->addListener (this);

    v32ndTLabel->setBounds (375, 375, 125, 30);

    v64thNLabel.reset (new Label ("v64thNLabel",
                                  String()));
    addAndMakeVisible (v64thNLabel.get());
    v64thNLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    v64thNLabel->setJustificationType (Justification::centredLeft);
    v64thNLabel->setEditable (true, true, false);
    v64thNLabel->setColour (TextEditor::textColourId, Colours::black);
    v64thNLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    v64thNLabel->addListener (this);

    v64thNLabel->setBounds (125, 415, 125, 30);

    v64thDLabel.reset (new Label ("v64thDLabel",
                                  String()));
    addAndMakeVisible (v64thDLabel.get());
    v64thDLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    v64thDLabel->setJustificationType (Justification::centredLeft);
    v64thDLabel->setEditable (true, true, false);
    v64thDLabel->setColour (TextEditor::textColourId, Colours::black);
    v64thDLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    v64thDLabel->addListener (this);

    v64thDLabel->setBounds (250, 415, 125, 30);

    v64thTLabel.reset (new Label ("v64thTLabel",
                                  String()));
    addAndMakeVisible (v64thTLabel.get());
    v64thTLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    v64thTLabel->setJustificationType (Justification::centredLeft);
    v64thTLabel->setEditable (true, true, false);
    v64thTLabel->setColour (TextEditor::textColourId, Colours::black);
    v64thTLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    v64thTLabel->addListener (this);

    v64thTLabel->setBounds (375, 415, 125, 30);

    v128thNLabel.reset (new Label ("v128thNLabel",
                                   String()));
    addAndMakeVisible (v128thNLabel.get());
    v128thNLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    v128thNLabel->setJustificationType (Justification::centredLeft);
    v128thNLabel->setEditable (true, true, false);
    v128thNLabel->setColour (TextEditor::textColourId, Colours::black);
    v128thNLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    v128thNLabel->addListener (this);

    v128thNLabel->setBounds (125, 455, 125, 30);

    v128thDLabel.reset (new Label ("v128thDLabel",
                                   String()));
    addAndMakeVisible (v128thDLabel.get());
    v128thDLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    v128thDLabel->setJustificationType (Justification::centredLeft);
    v128thDLabel->setEditable (true, true, false);
    v128thDLabel->setColour (TextEditor::textColourId, Colours::black);
    v128thDLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    v128thDLabel->addListener (this);

    v128thDLabel->setBounds (250, 455, 125, 30);

    v128thTLabel.reset (new Label ("v128thTLabel",
                                   String()));
    addAndMakeVisible (v128thTLabel.get());
    v128thTLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    v128thTLabel->setJustificationType (Justification::centredLeft);
    v128thTLabel->setEditable (true, true, false);
    v128thTLabel->setColour (TextEditor::textColourId, Colours::black);
    v128thTLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    v128thTLabel->addListener (this);

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
    bpmLabel->setFont (Font ("Arial", 30.00f, Font::plain).withTypefaceStyle ("Regular"));
    bpmLabel->setJustificationType (Justification::centred);
    bpmLabel->setEditable (false, false, false);
    bpmLabel->setColour (TextEditor::textColourId, Colours::black);
    bpmLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    bpmLabel->setBounds (300, 60, 101, 30);

    bpmValuesLabel.reset (new Label ("bpmValuesLabel",
                                     String()));
    addAndMakeVisible (bpmValuesLabel.get());
    bpmValuesLabel->setFont (Font ("Arial", 30.00f, Font::plain).withTypefaceStyle ("Regular"));
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

    setTempoSlider (120);

    // Set millisecond mode to default
    msToggle->setToggleState (true, dontSendNotification);

    // Allow for right-clicking for velocity sensitive sliding
    tempoSlider->setPopupMenuEnabled (true);

    // Tap tempo is more accurate when clicks are registered on down-click versus up-click
    tapButton->setTriggeredOnMouseDown (true);

    bpmValuesLabel->addListener (this);

    wholeNLabel->addListener (this);
    wholeDLabel->addListener (this);
    wholeTLabel->addListener (this);
    halfNLabel->addListener (this);
    halfNLabel->addListener (this);
    halfNLabel->addListener (this);
    quarterNLabel->addListener (this);
    quarterNLabel->addListener (this);
    quarterNLabel->addListener (this);
    v8thNLabel->addListener (this);
    v8thNLabel->addListener (this);
    v8thNLabel->addListener (this);
    v16thNLabel->addListener (this);
    v16thNLabel->addListener (this);
    v16thNLabel->addListener (this);
    v32ndNLabel->addListener (this);
    v32ndNLabel->addListener (this);
    v32ndNLabel->addListener (this);
    v64thNLabel->addListener (this);
    v64thNLabel->addListener (this);
    v64thNLabel->addListener (this);
    v128thNLabel->addListener (this);
    v128thNLabel->addListener (this);
    v128thNLabel->addListener (this);

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

        setTempoSlider (tempoSlider->getValue() * 2);

        //[/UserButtonCode_doubleTempoButton]
    }
    else if (buttonThatWasClicked == halfTempoButton.get())
    {
        //[UserButtonCode_halfTempoButton] -- add your button handler code here..

        setTempoSlider (tempoSlider->getValue() / 2);

        //[/UserButtonCode_halfTempoButton]
    }
    else if (buttonThatWasClicked == tapButton.get())
    {
        //[UserButtonCode_tapButton] -- add your button handler code here..

        double tempo = tapTempo.calculateTempo();

        setTempoSlider (tempo);

        // Add tap count to Tap Tempo button
        tapCountString = ((String) tapTempo.getTapCount()).paddedLeft ('0', 3);
        tapButton->setButtonText ("Tap Tempo (" + tapCountString + ")");

        // Start timer to auto reset
        if (tapTempo.getTapCount() > 1)
            startTimer ((60 / tempo) * 4 * 1000);

        //[/UserButtonCode_tapButton]
    }
    else if (buttonThatWasClicked == hzToggle.get())
    {
        //[UserButtonCode_hzToggle] -- add your button handler code here..

        msHzToggle (false);

        //[/UserButtonCode_hzToggle]
    }
    else if (buttonThatWasClicked == msToggle.get())
    {
        //[UserButtonCode_msToggle] -- add your button handler code here..

        msHzToggle (true);

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

        setTempoSlider (tempoSlider->getValue());
        populateLabelsWithValues();

        //[/UserSliderCode_tempoSlider]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}

void MainComponent::labelTextChanged (Label* labelThatHasChanged)
{
    //[UserlabelTextChanged_Pre]
    //[/UserlabelTextChanged_Pre]

    if (labelThatHasChanged == wholeNLabel.get())
    {
        //[UserLabelCode_wholeNLabel] -- add your label text handling code here..

        setTempoFromLabelValue (wholeNLabel, Note::whole, NoteModifier::normal);

        //[/UserLabelCode_wholeNLabel]
    }
    else if (labelThatHasChanged == wholeDLabel.get())
    {
        //[UserLabelCode_wholeDLabel] -- add your label text handling code here..

        setTempoFromLabelValue (wholeDLabel, Note::whole, NoteModifier::dotted);

        //[/UserLabelCode_wholeDLabel]
    }
    else if (labelThatHasChanged == wholeTLabel.get())
    {
        //[UserLabelCode_wholeTLabel] -- add your label text handling code here..

        setTempoFromLabelValue (wholeTLabel, Note::whole, NoteModifier::triplet);

        //[/UserLabelCode_wholeTLabel]
    }
    else if (labelThatHasChanged == halfNLabel.get())
    {
        //[UserLabelCode_halfNLabel] -- add your label text handling code here..

        setTempoFromLabelValue (halfNLabel, Note::half, NoteModifier::normal);

        //[/UserLabelCode_halfNLabel]
    }
    else if (labelThatHasChanged == halfDLabel.get())
    {
        //[UserLabelCode_halfDLabel] -- add your label text handling code here..

        setTempoFromLabelValue (halfDLabel, Note::half, NoteModifier::dotted);

        //[/UserLabelCode_halfDLabel]
    }
    else if (labelThatHasChanged == halfTLabel.get())
    {
        //[UserLabelCode_halfTLabel] -- add your label text handling code here..

        setTempoFromLabelValue (halfTLabel, Note::half, NoteModifier::triplet);

        //[/UserLabelCode_halfTLabel]
    }
    else if (labelThatHasChanged == quarterNLabel.get())
    {
        //[UserLabelCode_quarterNLabel] -- add your label text handling code here..

        setTempoFromLabelValue (quarterNLabel, Note::quarter, NoteModifier::normal);

        //[/UserLabelCode_quarterNLabel]
    }
    else if (labelThatHasChanged == quarterDLabel.get())
    {
        //[UserLabelCode_quarterDLabel] -- add your label text handling code here..

        setTempoFromLabelValue (quarterDLabel, Note::quarter, NoteModifier::dotted);

        //[/UserLabelCode_quarterDLabel]
    }
    else if (labelThatHasChanged == quarterTLabel.get())
    {
        //[UserLabelCode_quarterTLabel] -- add your label text handling code here..

        setTempoFromLabelValue (quarterTLabel, Note::quarter, NoteModifier::triplet);

        //[/UserLabelCode_quarterTLabel]
    }
    else if (labelThatHasChanged == v8thNLabel.get())
    {
        //[UserLabelCode_v8thNLabel] -- add your label text handling code here..

        setTempoFromLabelValue (v8thNLabel, Note::v8th, NoteModifier::normal);

        //[/UserLabelCode_v8thNLabel]
    }
    else if (labelThatHasChanged == v8thDLabel.get())
    {
        //[UserLabelCode_v8thDLabel] -- add your label text handling code here..

        setTempoFromLabelValue (v8thDLabel, Note::v8th, NoteModifier::dotted);

        //[/UserLabelCode_v8thDLabel]
    }
    else if (labelThatHasChanged == v8thTLabel.get())
    {
        //[UserLabelCode_v8thTLabel] -- add your label text handling code here..

        setTempoFromLabelValue (v8thTLabel, Note::v8th, NoteModifier::triplet);

        //[/UserLabelCode_v8thTLabel]
    }
    else if (labelThatHasChanged == v16thNLabel.get())
    {
        //[UserLabelCode_v16thNLabel] -- add your label text handling code here..

        setTempoFromLabelValue (v16thNLabel, Note::v16th, NoteModifier::normal);

        //[/UserLabelCode_v16thNLabel]
    }
    else if (labelThatHasChanged == v16thDLabel.get())
    {
        //[UserLabelCode_v16thDLabel] -- add your label text handling code here..

        setTempoFromLabelValue (v16thDLabel, Note::v16th, NoteModifier::dotted);

        //[/UserLabelCode_v16thDLabel]
    }
    else if (labelThatHasChanged == v16thTLabel.get())
    {
        //[UserLabelCode_v16thTLabel] -- add your label text handling code here..

        setTempoFromLabelValue (v16thTLabel, Note::v16th, NoteModifier::triplet);

        //[/UserLabelCode_v16thTLabel]
    }
    else if (labelThatHasChanged == v32ndNLabel.get())
    {
        //[UserLabelCode_v32ndNLabel] -- add your label text handling code here..

        setTempoFromLabelValue (v32ndNLabel, Note::v32nd, NoteModifier::normal);

        //[/UserLabelCode_v32ndNLabel]
    }
    else if (labelThatHasChanged == v32ndDLabel.get())
    {
        //[UserLabelCode_v32ndDLabel] -- add your label text handling code here..

        setTempoFromLabelValue (v32ndDLabel, Note::v32nd, NoteModifier::dotted);

        //[/UserLabelCode_v32ndDLabel]
    }
    else if (labelThatHasChanged == v32ndTLabel.get())
    {
        //[UserLabelCode_v32ndTLabel] -- add your label text handling code here..

        setTempoFromLabelValue (v32ndTLabel, Note::v32nd, NoteModifier::triplet);

        //[/UserLabelCode_v32ndTLabel]
    }
    else if (labelThatHasChanged == v64thNLabel.get())
    {
        //[UserLabelCode_v64thNLabel] -- add your label text handling code here..

        setTempoFromLabelValue (v64thNLabel, Note::v64th, NoteModifier::normal);

        //[/UserLabelCode_v64thNLabel]
    }
    else if (labelThatHasChanged == v64thDLabel.get())
    {
        //[UserLabelCode_v64thDLabel] -- add your label text handling code here..

        setTempoFromLabelValue (v64thDLabel, Note::v64th, NoteModifier::dotted);

        //[/UserLabelCode_v64thDLabel]
    }
    else if (labelThatHasChanged == v64thTLabel.get())
    {
        //[UserLabelCode_v64thTLabel] -- add your label text handling code here..

        setTempoFromLabelValue (v64thTLabel, Note::v64th, NoteModifier::triplet);

        //[/UserLabelCode_v64thTLabel]
    }
    else if (labelThatHasChanged == v128thNLabel.get())
    {
        //[UserLabelCode_v128thNLabel] -- add your label text handling code here..

        setTempoFromLabelValue (v128thNLabel, Note::v128th, NoteModifier::normal);

        //[/UserLabelCode_v128thNLabel]
    }
    else if (labelThatHasChanged == v128thDLabel.get())
    {
        //[UserLabelCode_v128thDLabel] -- add your label text handling code here..

        setTempoFromLabelValue (v128thDLabel, Note::v128th, NoteModifier::dotted);

        //[/UserLabelCode_v128thDLabel]
    }
    else if (labelThatHasChanged == v128thTLabel.get())
    {
        //[UserLabelCode_v128thTLabel] -- add your label text handling code here..

        setTempoFromLabelValue (v128thTLabel, Note::v128th, NoteModifier::triplet);

        //[/UserLabelCode_v128thTLabel]
    }
    else if (labelThatHasChanged == bpmValuesLabel.get())
    {
        //[UserLabelCode_bpmValuesLabel] -- add your label text handling code here..

        setTempoSlider (bpmValuesLabel->getText().getDoubleValue());

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



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...

void MainComponent::adjustTempo (const int &adjustmentValue)
{
    setTempoSlider (tempoSlider->getValue() + adjustmentValue);
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
    int roundedValue = (int) tempoSlider->getValue();

    if ((tempoSlider->getValue() - roundedValue) >= 0.5)
        roundedValue += 1;

    setTempoSlider (roundedValue);
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
    bpmValuesLabel->setText (tempoSlider->getTextFromValue (tempoSlider->getValue()),
                             dontSendNotification);

    coarseResolutionToggle->setToggleState (isCoarseSelected, dontSendNotification);
    fineResolutionToggle->setToggleState (isFineSelected, dontSendNotification);

    populateLabelsWithValues();
}

void MainComponent::populateLabelsWithValues()
{
    double t = tempoSlider->getValue();

    if (msToggle->getToggleState())
    {
        wholeNLabel->setText ((String) toMilliseconds (t, Note::whole, NoteModifier::normal), dontSendNotification);
        wholeDLabel->setText ((String) toMilliseconds (t, Note::whole, NoteModifier::dotted), dontSendNotification);
        wholeTLabel->setText ((String) toMilliseconds (t, Note::whole, NoteModifier::triplet), dontSendNotification);
        halfNLabel->setText ((String) toMilliseconds (t, Note::half, NoteModifier::normal), dontSendNotification);
        halfDLabel->setText ((String) toMilliseconds (t, Note::half, NoteModifier::dotted), dontSendNotification);
        halfTLabel->setText ((String) toMilliseconds (t, Note::half, NoteModifier::triplet), dontSendNotification);
        quarterNLabel->setText ((String) toMilliseconds (t, Note::quarter, NoteModifier::normal),dontSendNotification);
        quarterDLabel->setText ((String) toMilliseconds (t, Note::quarter, NoteModifier::dotted), dontSendNotification);
        quarterTLabel->setText ((String) toMilliseconds (t, Note::quarter, NoteModifier::triplet), dontSendNotification);
        v8thNLabel->setText ((String) toMilliseconds (t, Note::v8th, NoteModifier::normal), dontSendNotification);
        v8thDLabel->setText ((String) toMilliseconds (t, Note::v8th, NoteModifier::dotted), dontSendNotification);
        v8thTLabel->setText ((String) toMilliseconds (t, Note::v8th, NoteModifier::triplet), dontSendNotification);
        v16thNLabel->setText ((String) toMilliseconds (t, Note::v16th, NoteModifier::normal), dontSendNotification);
        v16thDLabel->setText ((String) toMilliseconds (t, Note::v16th, NoteModifier::dotted), dontSendNotification);
        v16thTLabel->setText ((String) toMilliseconds (t, Note::v16th, NoteModifier::triplet), dontSendNotification);
        v32ndNLabel->setText ((String) toMilliseconds (t, Note::v32nd, NoteModifier::normal), dontSendNotification);
        v32ndDLabel->setText ((String) toMilliseconds (t, Note::v32nd, NoteModifier::dotted), dontSendNotification);
        v32ndTLabel->setText ((String) toMilliseconds (t, Note::v32nd, NoteModifier::triplet), dontSendNotification);
        v64thNLabel->setText ((String) toMilliseconds (t, Note::v64th, NoteModifier::normal), dontSendNotification);
        v64thDLabel->setText ((String) toMilliseconds (t, Note::v64th, NoteModifier::dotted), dontSendNotification);
        v64thTLabel->setText ((String) toMilliseconds (t, Note::v64th, NoteModifier::triplet), dontSendNotification);
        v128thNLabel->setText ((String) toMilliseconds (t, Note::v128th, NoteModifier::normal), dontSendNotification);
        v128thDLabel->setText ((String) toMilliseconds (t, Note::v128th, NoteModifier::dotted), dontSendNotification);
        v128thTLabel->setText ((String) toMilliseconds (t, Note::v128th, NoteModifier::triplet), dontSendNotification);
    }

    else
    {
        wholeNLabel->setText ((String) toHertz (t, Note::whole, NoteModifier::normal), dontSendNotification);
        wholeDLabel->setText ((String) toHertz (t, Note::whole, NoteModifier::dotted), dontSendNotification);
        wholeTLabel->setText ((String) toHertz (t, Note::whole, NoteModifier::triplet), dontSendNotification);
        halfNLabel->setText ((String) toHertz (t, Note::half, NoteModifier::normal), dontSendNotification);
        halfDLabel->setText ((String) toHertz (t, Note::half, NoteModifier::dotted), dontSendNotification);
        halfTLabel->setText ((String) toHertz (t, Note::half, NoteModifier::triplet), dontSendNotification);
        quarterNLabel->setText ((String) toHertz (t, Note::quarter, NoteModifier::normal), dontSendNotification);
        quarterDLabel->setText ((String) toHertz (t, Note::quarter, NoteModifier::dotted), dontSendNotification);
        quarterTLabel->setText ((String) toHertz (t, Note::quarter, NoteModifier::triplet), dontSendNotification);
        v8thNLabel->setText ((String) toHertz (t, Note::v8th, NoteModifier::normal), dontSendNotification);
        v8thDLabel->setText ((String) toHertz (t, Note::v8th, NoteModifier::dotted), dontSendNotification);
        v8thTLabel->setText ((String) toHertz (t, Note::v8th, NoteModifier::triplet), dontSendNotification);
        v16thNLabel->setText ((String) toHertz (t, Note::v16th, NoteModifier::normal), dontSendNotification);
        v16thDLabel->setText ((String) toHertz (t, Note::v16th, NoteModifier::dotted), dontSendNotification);
        v16thTLabel->setText ((String) toHertz (t, Note::v16th, NoteModifier::triplet), dontSendNotification);
        v32ndNLabel->setText ((String) toHertz (t, Note::v32nd, NoteModifier::normal), dontSendNotification);
        v32ndDLabel->setText ((String) toHertz (t, Note::v32nd, NoteModifier::dotted), dontSendNotification);
        v32ndTLabel->setText ((String) toHertz (t, Note::v32nd, NoteModifier::triplet), dontSendNotification);
        v64thNLabel->setText ((String) toHertz (t, Note::v64th, NoteModifier::normal), dontSendNotification);
        v64thDLabel->setText ((String) toHertz (t, Note::v64th, NoteModifier::dotted), dontSendNotification);
        v64thTLabel->setText ((String) toHertz (t, Note::v64th, NoteModifier::triplet), dontSendNotification);
        v128thNLabel->setText ((String) toHertz (t, Note::v128th, NoteModifier::normal), dontSendNotification);
        v128thDLabel->setText ((String) toHertz (t, Note::v128th, NoteModifier::dotted), dontSendNotification);
        v128thTLabel->setText ((String) toHertz (t, Note::v128th, NoteModifier::triplet), dontSendNotification);
    }
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

void MainComponent::setTempoFromLabelValue (const std::unique_ptr<Label>& label, const Note& note,
                                            const NoteModifier& noteModifier)
{
    // Work around code to forbid strings of text from being entered into the fields.  This is done
    // in place of creating a new Label class that inherits from JUCE Label that restricts the input
    // to only numbers.  This should be implemented in the future.  The Start of the work resides on
    // the branch "Add-numberic-label".

    const double labelValue = label->getText().getDoubleValue();
    double tempo = 0;

    if (msToggle->getToggleState())
        tempo = millisecondsToTempo (labelValue, note, noteModifier);
    else
        tempo = hertzToTempo (label->getText().getDoubleValue(), note, noteModifier);

    // If text is placed into the field that isn't numerical, replace that text back with the
    // original value by re-populating all labels with values
    if (! setTempoSlider (tempo))
        populateLabelsWithValues();
}

bool MainComponent::setTempoSlider (const double &tempo)
{
    bool canUseNewTempo = (tempoSlider->getMinimum() < tempo) && (! isinf (tempo));

    if (canUseNewTempo)
        tempoSlider->setValue (tempo);

    bpmValuesLabel->setText (tempoSlider->getTextFromValue (tempoSlider->getValue()),
                             dontSendNotification);

    return canUseNewTempo;
}

void MainComponent::msHzToggle (const bool& toggleMsOne)
{
    msToggle->setToggleState (toggleMsOne, dontSendNotification);
    hzToggle->setToggleState (! toggleMsOne, dontSendNotification);

    populateLabelsWithValues();
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
                 overlayOpacity="0.330" fixedSize="1" initialWidth="500" initialHeight="490">
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
          min="1.0" max="1000.0" int="0.1" style="LinearHorizontal" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="50" textBoxHeight="20" skewFactor="0.5"
          needsCallback="1"/>
  <LABEL name="delayTimeCalculatorLabel" id="951f8323b93b29f2" memberName="delayTimeCalculatorLabel"
         virtualName="" explicitFocusOrder="0" pos="0 0 500 50" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="Delay Time Calculator"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Arial" fontsize="47.4" kerning="0.095" bold="0" italic="0"
         justification="36"/>
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
         edBkgCol="0" labelText="" editableSingleClick="1" editableDoubleClick="1"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="wholeDLabel" id="5aa96ffcf47310ae" memberName="wholeDLabel"
         virtualName="" explicitFocusOrder="0" pos="250 175 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="1" editableDoubleClick="1"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="wholeTLabel" id="acb484e802c4fea9" memberName="wholeTLabel"
         virtualName="" explicitFocusOrder="0" pos="375 175 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="&#10;" editableSingleClick="1" editableDoubleClick="1"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="halfNLabel" id="fb1b90b40fe022a1" memberName="halfNLabel"
         virtualName="" explicitFocusOrder="0" pos="125 215 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="1" editableDoubleClick="1"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="halfDLabel" id="29a3d055318a2256" memberName="halfDLabel"
         virtualName="" explicitFocusOrder="0" pos="250 215 125 28" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="1" editableDoubleClick="1"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="halfTLabel" id="474722dc22cd155b" memberName="halfTLabel"
         virtualName="" explicitFocusOrder="0" pos="375 215 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="1" editableDoubleClick="1"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="quarterNLabel" id="a0b43f6d2cebf017" memberName="quarterNLabel"
         virtualName="" explicitFocusOrder="0" pos="125 255 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="1" editableDoubleClick="1"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="quarterDLabel" id="6e5caff96007dec1" memberName="quarterDLabel"
         virtualName="" explicitFocusOrder="0" pos="250 255 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="1" editableDoubleClick="1"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="quarterTLabel" id="fe2643302e963795" memberName="quarterTLabel"
         virtualName="" explicitFocusOrder="0" pos="375 255 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="1" editableDoubleClick="1"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="v8thNLabel" id="aabf4b6c5866f43a" memberName="v8thNLabel"
         virtualName="" explicitFocusOrder="0" pos="125 295 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="1" editableDoubleClick="1"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="v8thDLabel" id="df0f0f30eec2686f" memberName="v8thDLabel"
         virtualName="" explicitFocusOrder="0" pos="250 295 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="1" editableDoubleClick="1"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="v8thTLabel" id="7b34c480a75f818" memberName="v8thTLabel"
         virtualName="" explicitFocusOrder="0" pos="375 295 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="1" editableDoubleClick="1"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="v16thNLabel" id="4b90b919d39c55aa" memberName="v16thNLabel"
         virtualName="" explicitFocusOrder="0" pos="125 335 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="1" editableDoubleClick="1"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="v16thDLabel" id="b8e062b942bd6161" memberName="v16thDLabel"
         virtualName="" explicitFocusOrder="0" pos="250 335 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="1" editableDoubleClick="1"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="v16thTLabel" id="bc5910a30828043e" memberName="v16thTLabel"
         virtualName="" explicitFocusOrder="0" pos="375 335 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="1" editableDoubleClick="1"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="v32ndNLabel" id="bafdfece957a48cd" memberName="v32ndNLabel"
         virtualName="" explicitFocusOrder="0" pos="125 375 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="1" editableDoubleClick="1"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="v32ndDLabel" id="d6c4232d51ea521d" memberName="v32ndDLabel"
         virtualName="" explicitFocusOrder="0" pos="250 375 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="1" editableDoubleClick="1"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="v32ndTLabel" id="c94aa63d85789829" memberName="v32ndTLabel"
         virtualName="" explicitFocusOrder="0" pos="375 375 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="1" editableDoubleClick="1"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="v64thNLabel" id="aba83195d8170afc" memberName="v64thNLabel"
         virtualName="" explicitFocusOrder="0" pos="125 415 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="1" editableDoubleClick="1"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="v64thDLabel" id="90fef0b42ac08a69" memberName="v64thDLabel"
         virtualName="" explicitFocusOrder="0" pos="250 415 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="1" editableDoubleClick="1"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="v64thTLabel" id="432ffa6d219d869e" memberName="v64thTLabel"
         virtualName="" explicitFocusOrder="0" pos="375 415 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="1" editableDoubleClick="1"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="v128thNLabel" id="a76923820541582b" memberName="v128thNLabel"
         virtualName="" explicitFocusOrder="0" pos="125 455 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="1" editableDoubleClick="1"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="v128thDLabel" id="9379aa3476074fe5" memberName="v128thDLabel"
         virtualName="" explicitFocusOrder="0" pos="250 455 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="1" editableDoubleClick="1"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="v128thTLabel" id="c3b2f04614c1679d" memberName="v128thTLabel"
         virtualName="" explicitFocusOrder="0" pos="375 455 125 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="1" editableDoubleClick="1"
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

