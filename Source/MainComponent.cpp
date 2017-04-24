/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 4.3.1

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
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
    doubleTempoButton->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight);
    doubleTempoButton->addListener (this);
    doubleTempoButton->setColour (TextButton::buttonColourId, Colour (0xffadaaaa));

    addAndMakeVisible (halfTempoButton = new TextButton ("halfTempoButton"));
    halfTempoButton->setButtonText (TRANS("1/2x"));
    halfTempoButton->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight);
    halfTempoButton->addListener (this);
    halfTempoButton->setColour (TextButton::buttonColourId, Colour (0xffadaaaa));

    addAndMakeVisible (emailHyperlink = new HyperlinkButton (TRANS("Email Me"),
                                                             URL ("josephtlyons@gmail.com")));
    emailHyperlink->setTooltip (TRANS("josephtlyons@gmail.com"));
    emailHyperlink->setButtonText (TRANS("Email Me"));
    emailHyperlink->setColour (HyperlinkButton::textColourId, Colour (0xffadaaaa));

    addAndMakeVisible (alterTheCodeHyperlink = new HyperlinkButton (TRANS("Download the Source Code"),
                                                                    URL ("https://github.com/JosephTLyons/GUI-Delay-Time-Calculator")));
    alterTheCodeHyperlink->setTooltip (TRANS("https://github.com/JosephTLyons/GUI-Delay-Time-Calculator"));
    alterTheCodeHyperlink->setButtonText (TRANS("Download the Source Code"));
    alterTheCodeHyperlink->setColour (HyperlinkButton::textColourId, Colour (0xffadaaaa));

    addAndMakeVisible (tempoSlider = new Slider ("tempoSlider"));
    tempoSlider->setRange (1, 1000, 0.1);
    tempoSlider->setSliderStyle (Slider::LinearHorizontal);
    tempoSlider->setTextBoxStyle (Slider::TextBoxLeft, false, 50, 20);
    tempoSlider->setColour (Slider::thumbColourId, Colour (0xffefefef));
    tempoSlider->setColour (Slider::trackColourId, Colour (0xffefefef));
    tempoSlider->setColour (Slider::textBoxTextColourId, Colours::white);
    tempoSlider->setColour (Slider::textBoxBackgroundColourId, Colour (0xff353535));
    tempoSlider->setColour (Slider::textBoxHighlightColourId, Colour (0xffadaaaa));
    tempoSlider->setColour (Slider::textBoxOutlineColourId, Colour (0xff353535));
    tempoSlider->addListener (this);
    tempoSlider->setSkewFactor (0.5);

    addAndMakeVisible (theLyonsDenDelayTimeCalculator = new Label ("theLyonsDenDelayTimeCalculator",
                                                                   TRANS("The Lyons\' Den Delay Time Calculator")));
    theLyonsDenDelayTimeCalculator->setFont (Font ("Calisto MT", 47.40f, Font::plain));
    theLyonsDenDelayTimeCalculator->setJustificationType (Justification::centred);
    theLyonsDenDelayTimeCalculator->setEditable (false, false, false);
    theLyonsDenDelayTimeCalculator->setColour (Label::textColourId, Colour (0xffadaaaa));
    theLyonsDenDelayTimeCalculator->setColour (TextEditor::textColourId, Colours::black);
    theLyonsDenDelayTimeCalculator->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (donateHyperlink = new HyperlinkButton (TRANS("Donate"),
                                                              URL ("https://www.paypal.me/JosephTimothyLyons/1")));
    donateHyperlink->setTooltip (TRANS("https://www.paypal.me/JosephTimothyLyons/1"));
    donateHyperlink->setButtonText (TRANS("Donate"));
    donateHyperlink->setColour (HyperlinkButton::textColourId, Colour (0xffadaaaa));

    addAndMakeVisible (normalLabel = new Label ("normalLabel",
                                                TRANS("Normal\n")));
    normalLabel->setFont (Font ("Calisto MT", 30.00f, Font::plain));
    normalLabel->setJustificationType (Justification::centredLeft);
    normalLabel->setEditable (false, false, false);
    normalLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    normalLabel->setColour (TextEditor::textColourId, Colours::black);
    normalLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (dottedLabel = new Label ("dottedLabel",
                                                TRANS("Dotted")));
    dottedLabel->setFont (Font ("Calisto MT", 30.00f, Font::plain));
    dottedLabel->setJustificationType (Justification::centredLeft);
    dottedLabel->setEditable (false, false, false);
    dottedLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    dottedLabel->setColour (TextEditor::textColourId, Colours::black);
    dottedLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (tripletLabel = new Label ("tripletLabel",
                                                 TRANS("Triplet")));
    tripletLabel->setFont (Font ("Calisto MT", 30.00f, Font::plain));
    tripletLabel->setJustificationType (Justification::centredLeft);
    tripletLabel->setEditable (false, false, false);
    tripletLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    tripletLabel->setColour (TextEditor::textColourId, Colours::black);
    tripletLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (wholeLabel = new Label ("wholeLabel",
                                               TRANS("1:")));
    wholeLabel->setFont (Font ("Calisto MT", 30.00f, Font::plain));
    wholeLabel->setJustificationType (Justification::centredLeft);
    wholeLabel->setEditable (false, false, false);
    wholeLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    wholeLabel->setColour (TextEditor::textColourId, Colours::black);
    wholeLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (halfLabel = new Label ("halfLabel",
                                              TRANS("1/2:")));
    halfLabel->setFont (Font ("Calisto MT", 30.00f, Font::plain));
    halfLabel->setJustificationType (Justification::centredLeft);
    halfLabel->setEditable (false, false, false);
    halfLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    halfLabel->setColour (TextEditor::textColourId, Colours::black);
    halfLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (quarterLabel = new Label ("quarterLabel",
                                                 TRANS("1/4:")));
    quarterLabel->setFont (Font ("Calisto MT", 30.00f, Font::plain));
    quarterLabel->setJustificationType (Justification::centredLeft);
    quarterLabel->setEditable (false, false, false);
    quarterLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    quarterLabel->setColour (TextEditor::textColourId, Colours::black);
    quarterLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (eighthLabel = new Label ("eighthLabel",
                                                TRANS("1/8:")));
    eighthLabel->setFont (Font ("Calisto MT", 30.00f, Font::plain));
    eighthLabel->setJustificationType (Justification::centredLeft);
    eighthLabel->setEditable (false, false, false);
    eighthLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    eighthLabel->setColour (TextEditor::textColourId, Colours::black);
    eighthLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (sixteenthLabel = new Label ("sixteenthLabel",
                                                   TRANS("1/16:")));
    sixteenthLabel->setFont (Font ("Calisto MT", 30.00f, Font::plain));
    sixteenthLabel->setJustificationType (Justification::centredLeft);
    sixteenthLabel->setEditable (false, false, false);
    sixteenthLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    sixteenthLabel->setColour (TextEditor::textColourId, Colours::black);
    sixteenthLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (thirtySecondLabel = new Label ("thirtySecondLabel",
                                                      TRANS("1/32:")));
    thirtySecondLabel->setFont (Font ("Calisto MT", 30.00f, Font::plain));
    thirtySecondLabel->setJustificationType (Justification::centredLeft);
    thirtySecondLabel->setEditable (false, false, false);
    thirtySecondLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    thirtySecondLabel->setColour (TextEditor::textColourId, Colours::black);
    thirtySecondLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (sixtyFourthLabel = new Label ("sixtyFourthLabel",
                                                     TRANS("1/64:")));
    sixtyFourthLabel->setFont (Font ("Calisto MT", 30.00f, Font::plain));
    sixtyFourthLabel->setJustificationType (Justification::centredLeft);
    sixtyFourthLabel->setEditable (false, false, false);
    sixtyFourthLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    sixtyFourthLabel->setColour (TextEditor::textColourId, Colours::black);
    sixtyFourthLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (oneHundreAndTwentyEighthLabel = new Label ("oneHundreAndTwentyEighthLabel",
                                                                  TRANS("1/128:")));
    oneHundreAndTwentyEighthLabel->setFont (Font ("Calisto MT", 30.00f, Font::plain));
    oneHundreAndTwentyEighthLabel->setJustificationType (Justification::centredLeft);
    oneHundreAndTwentyEighthLabel->setEditable (false, false, false);
    oneHundreAndTwentyEighthLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    oneHundreAndTwentyEighthLabel->setColour (TextEditor::textColourId, Colours::black);
    oneHundreAndTwentyEighthLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (wholeNormalEditor = new TextEditor ("wholeNormalEditor"));
    wholeNormalEditor->setMultiLine (false);
    wholeNormalEditor->setReturnKeyStartsNewLine (false);
    wholeNormalEditor->setReadOnly (true);
    wholeNormalEditor->setScrollbarsShown (true);
    wholeNormalEditor->setCaretVisible (false);
    wholeNormalEditor->setPopupMenuEnabled (true);
    wholeNormalEditor->setColour (TextEditor::textColourId, Colours::white);
    wholeNormalEditor->setColour (TextEditor::backgroundColourId, Colour (0xff353535));
    wholeNormalEditor->setText (String());

    addAndMakeVisible (wholeDottedEditor = new TextEditor ("wholeDottedEditor"));
    wholeDottedEditor->setMultiLine (false);
    wholeDottedEditor->setReturnKeyStartsNewLine (false);
    wholeDottedEditor->setReadOnly (true);
    wholeDottedEditor->setScrollbarsShown (true);
    wholeDottedEditor->setCaretVisible (false);
    wholeDottedEditor->setPopupMenuEnabled (true);
    wholeDottedEditor->setColour (TextEditor::textColourId, Colours::white);
    wholeDottedEditor->setColour (TextEditor::backgroundColourId, Colour (0xff353535));
    wholeDottedEditor->setText (String());

    addAndMakeVisible (wholeTripletEditor = new TextEditor ("wholeTripletEditor"));
    wholeTripletEditor->setMultiLine (false);
    wholeTripletEditor->setReturnKeyStartsNewLine (false);
    wholeTripletEditor->setReadOnly (true);
    wholeTripletEditor->setScrollbarsShown (true);
    wholeTripletEditor->setCaretVisible (false);
    wholeTripletEditor->setPopupMenuEnabled (true);
    wholeTripletEditor->setColour (TextEditor::textColourId, Colours::white);
    wholeTripletEditor->setColour (TextEditor::backgroundColourId, Colour (0xff353535));
    wholeTripletEditor->setText (String());

    addAndMakeVisible (halfNormalEditor = new TextEditor ("halfNormalEditor"));
    halfNormalEditor->setMultiLine (false);
    halfNormalEditor->setReturnKeyStartsNewLine (false);
    halfNormalEditor->setReadOnly (true);
    halfNormalEditor->setScrollbarsShown (true);
    halfNormalEditor->setCaretVisible (false);
    halfNormalEditor->setPopupMenuEnabled (true);
    halfNormalEditor->setColour (TextEditor::textColourId, Colours::white);
    halfNormalEditor->setColour (TextEditor::backgroundColourId, Colour (0xff353535));
    halfNormalEditor->setText (String());

    addAndMakeVisible (halfDottedEditor = new TextEditor ("halfDottedEditor"));
    halfDottedEditor->setMultiLine (false);
    halfDottedEditor->setReturnKeyStartsNewLine (false);
    halfDottedEditor->setReadOnly (true);
    halfDottedEditor->setScrollbarsShown (true);
    halfDottedEditor->setCaretVisible (false);
    halfDottedEditor->setPopupMenuEnabled (true);
    halfDottedEditor->setColour (TextEditor::textColourId, Colours::white);
    halfDottedEditor->setColour (TextEditor::backgroundColourId, Colour (0xff353535));
    halfDottedEditor->setText (String());

    addAndMakeVisible (halfTripletEditor = new TextEditor ("halfTripletEditor"));
    halfTripletEditor->setMultiLine (false);
    halfTripletEditor->setReturnKeyStartsNewLine (false);
    halfTripletEditor->setReadOnly (true);
    halfTripletEditor->setScrollbarsShown (true);
    halfTripletEditor->setCaretVisible (false);
    halfTripletEditor->setPopupMenuEnabled (true);
    halfTripletEditor->setColour (TextEditor::textColourId, Colours::white);
    halfTripletEditor->setColour (TextEditor::backgroundColourId, Colour (0xff353535));
    halfTripletEditor->setText (String());

    addAndMakeVisible (quarterNormalEditor = new TextEditor ("quarterNormalEditor"));
    quarterNormalEditor->setMultiLine (false);
    quarterNormalEditor->setReturnKeyStartsNewLine (false);
    quarterNormalEditor->setReadOnly (true);
    quarterNormalEditor->setScrollbarsShown (true);
    quarterNormalEditor->setCaretVisible (false);
    quarterNormalEditor->setPopupMenuEnabled (true);
    quarterNormalEditor->setColour (TextEditor::textColourId, Colours::white);
    quarterNormalEditor->setColour (TextEditor::backgroundColourId, Colour (0xff353535));
    quarterNormalEditor->setText (String());

    addAndMakeVisible (quarterDottedEditor = new TextEditor ("quarterDottedEditor"));
    quarterDottedEditor->setMultiLine (false);
    quarterDottedEditor->setReturnKeyStartsNewLine (false);
    quarterDottedEditor->setReadOnly (true);
    quarterDottedEditor->setScrollbarsShown (true);
    quarterDottedEditor->setCaretVisible (false);
    quarterDottedEditor->setPopupMenuEnabled (true);
    quarterDottedEditor->setColour (TextEditor::textColourId, Colours::white);
    quarterDottedEditor->setColour (TextEditor::backgroundColourId, Colour (0xff353535));
    quarterDottedEditor->setText (String());

    addAndMakeVisible (quarterTripletEditor = new TextEditor ("quarterTripletEditor"));
    quarterTripletEditor->setMultiLine (false);
    quarterTripletEditor->setReturnKeyStartsNewLine (false);
    quarterTripletEditor->setReadOnly (true);
    quarterTripletEditor->setScrollbarsShown (true);
    quarterTripletEditor->setCaretVisible (false);
    quarterTripletEditor->setPopupMenuEnabled (true);
    quarterTripletEditor->setColour (TextEditor::textColourId, Colours::white);
    quarterTripletEditor->setColour (TextEditor::backgroundColourId, Colour (0xff353535));
    quarterTripletEditor->setText (String());

    addAndMakeVisible (eighthNormalEditor = new TextEditor ("eighthNormalEditor"));
    eighthNormalEditor->setMultiLine (false);
    eighthNormalEditor->setReturnKeyStartsNewLine (false);
    eighthNormalEditor->setReadOnly (true);
    eighthNormalEditor->setScrollbarsShown (true);
    eighthNormalEditor->setCaretVisible (false);
    eighthNormalEditor->setPopupMenuEnabled (true);
    eighthNormalEditor->setColour (TextEditor::textColourId, Colours::white);
    eighthNormalEditor->setColour (TextEditor::backgroundColourId, Colour (0xff353535));
    eighthNormalEditor->setText (String());

    addAndMakeVisible (eighthDottedEditor = new TextEditor ("eighthDottedEditor"));
    eighthDottedEditor->setMultiLine (false);
    eighthDottedEditor->setReturnKeyStartsNewLine (false);
    eighthDottedEditor->setReadOnly (true);
    eighthDottedEditor->setScrollbarsShown (true);
    eighthDottedEditor->setCaretVisible (false);
    eighthDottedEditor->setPopupMenuEnabled (true);
    eighthDottedEditor->setColour (TextEditor::textColourId, Colours::white);
    eighthDottedEditor->setColour (TextEditor::backgroundColourId, Colour (0xff353535));
    eighthDottedEditor->setText (String());

    addAndMakeVisible (eighthTripletEditor = new TextEditor ("eighthTripletEditor"));
    eighthTripletEditor->setMultiLine (false);
    eighthTripletEditor->setReturnKeyStartsNewLine (false);
    eighthTripletEditor->setReadOnly (true);
    eighthTripletEditor->setScrollbarsShown (true);
    eighthTripletEditor->setCaretVisible (false);
    eighthTripletEditor->setPopupMenuEnabled (true);
    eighthTripletEditor->setColour (TextEditor::textColourId, Colours::white);
    eighthTripletEditor->setColour (TextEditor::backgroundColourId, Colour (0xff353535));
    eighthTripletEditor->setText (String());

    addAndMakeVisible (sixteenthNormalEditor = new TextEditor ("sixteenthNormalEditor"));
    sixteenthNormalEditor->setMultiLine (false);
    sixteenthNormalEditor->setReturnKeyStartsNewLine (false);
    sixteenthNormalEditor->setReadOnly (true);
    sixteenthNormalEditor->setScrollbarsShown (true);
    sixteenthNormalEditor->setCaretVisible (false);
    sixteenthNormalEditor->setPopupMenuEnabled (true);
    sixteenthNormalEditor->setColour (TextEditor::textColourId, Colours::white);
    sixteenthNormalEditor->setColour (TextEditor::backgroundColourId, Colour (0xff353535));
    sixteenthNormalEditor->setText (String());

    addAndMakeVisible (sixteenthDottedEditor = new TextEditor ("sixteenthDottedEditor"));
    sixteenthDottedEditor->setMultiLine (false);
    sixteenthDottedEditor->setReturnKeyStartsNewLine (false);
    sixteenthDottedEditor->setReadOnly (true);
    sixteenthDottedEditor->setScrollbarsShown (true);
    sixteenthDottedEditor->setCaretVisible (false);
    sixteenthDottedEditor->setPopupMenuEnabled (true);
    sixteenthDottedEditor->setColour (TextEditor::textColourId, Colours::white);
    sixteenthDottedEditor->setColour (TextEditor::backgroundColourId, Colour (0xff353535));
    sixteenthDottedEditor->setText (String());

    addAndMakeVisible (sixteenthTripletEditor = new TextEditor ("sixteenthTripletEditor"));
    sixteenthTripletEditor->setMultiLine (false);
    sixteenthTripletEditor->setReturnKeyStartsNewLine (false);
    sixteenthTripletEditor->setReadOnly (true);
    sixteenthTripletEditor->setScrollbarsShown (true);
    sixteenthTripletEditor->setCaretVisible (false);
    sixteenthTripletEditor->setPopupMenuEnabled (true);
    sixteenthTripletEditor->setColour (TextEditor::textColourId, Colours::white);
    sixteenthTripletEditor->setColour (TextEditor::backgroundColourId, Colour (0xff353535));
    sixteenthTripletEditor->setText (String());

    addAndMakeVisible (thirtySecondNormalEditor = new TextEditor ("thirtySecondNormalEditor"));
    thirtySecondNormalEditor->setMultiLine (false);
    thirtySecondNormalEditor->setReturnKeyStartsNewLine (false);
    thirtySecondNormalEditor->setReadOnly (true);
    thirtySecondNormalEditor->setScrollbarsShown (true);
    thirtySecondNormalEditor->setCaretVisible (false);
    thirtySecondNormalEditor->setPopupMenuEnabled (true);
    thirtySecondNormalEditor->setColour (TextEditor::textColourId, Colours::white);
    thirtySecondNormalEditor->setColour (TextEditor::backgroundColourId, Colour (0xff353535));
    thirtySecondNormalEditor->setText (String());

    addAndMakeVisible (thirtySecondDottedEditor = new TextEditor ("thirtySecondDottedEditor"));
    thirtySecondDottedEditor->setMultiLine (false);
    thirtySecondDottedEditor->setReturnKeyStartsNewLine (false);
    thirtySecondDottedEditor->setReadOnly (true);
    thirtySecondDottedEditor->setScrollbarsShown (true);
    thirtySecondDottedEditor->setCaretVisible (false);
    thirtySecondDottedEditor->setPopupMenuEnabled (true);
    thirtySecondDottedEditor->setColour (TextEditor::textColourId, Colours::white);
    thirtySecondDottedEditor->setColour (TextEditor::backgroundColourId, Colour (0xff353535));
    thirtySecondDottedEditor->setText (String());

    addAndMakeVisible (thirtySecondTripletEditor = new TextEditor ("thirtySecondTripletEditor"));
    thirtySecondTripletEditor->setMultiLine (false);
    thirtySecondTripletEditor->setReturnKeyStartsNewLine (false);
    thirtySecondTripletEditor->setReadOnly (true);
    thirtySecondTripletEditor->setScrollbarsShown (true);
    thirtySecondTripletEditor->setCaretVisible (false);
    thirtySecondTripletEditor->setPopupMenuEnabled (true);
    thirtySecondTripletEditor->setColour (TextEditor::textColourId, Colours::white);
    thirtySecondTripletEditor->setColour (TextEditor::backgroundColourId, Colour (0xff353535));
    thirtySecondTripletEditor->setText (String());

    addAndMakeVisible (sixtyFourthNormalEditor = new TextEditor ("sixtyFourthNormalEditor"));
    sixtyFourthNormalEditor->setMultiLine (false);
    sixtyFourthNormalEditor->setReturnKeyStartsNewLine (false);
    sixtyFourthNormalEditor->setReadOnly (true);
    sixtyFourthNormalEditor->setScrollbarsShown (true);
    sixtyFourthNormalEditor->setCaretVisible (false);
    sixtyFourthNormalEditor->setPopupMenuEnabled (true);
    sixtyFourthNormalEditor->setColour (TextEditor::textColourId, Colours::white);
    sixtyFourthNormalEditor->setColour (TextEditor::backgroundColourId, Colour (0xff353535));
    sixtyFourthNormalEditor->setText (String());

    addAndMakeVisible (sixtyFourthDottedEditor = new TextEditor ("sixtyFourthDottedEditor"));
    sixtyFourthDottedEditor->setMultiLine (false);
    sixtyFourthDottedEditor->setReturnKeyStartsNewLine (false);
    sixtyFourthDottedEditor->setReadOnly (true);
    sixtyFourthDottedEditor->setScrollbarsShown (true);
    sixtyFourthDottedEditor->setCaretVisible (false);
    sixtyFourthDottedEditor->setPopupMenuEnabled (true);
    sixtyFourthDottedEditor->setColour (TextEditor::textColourId, Colours::white);
    sixtyFourthDottedEditor->setColour (TextEditor::backgroundColourId, Colour (0xff353535));
    sixtyFourthDottedEditor->setText (String());

    addAndMakeVisible (sixtyFourthTripletEditor = new TextEditor ("sixtyFourthTripletEditor"));
    sixtyFourthTripletEditor->setMultiLine (false);
    sixtyFourthTripletEditor->setReturnKeyStartsNewLine (false);
    sixtyFourthTripletEditor->setReadOnly (true);
    sixtyFourthTripletEditor->setScrollbarsShown (true);
    sixtyFourthTripletEditor->setCaretVisible (false);
    sixtyFourthTripletEditor->setPopupMenuEnabled (true);
    sixtyFourthTripletEditor->setColour (TextEditor::textColourId, Colours::white);
    sixtyFourthTripletEditor->setColour (TextEditor::backgroundColourId, Colour (0xff353535));
    sixtyFourthTripletEditor->setText (String());

    addAndMakeVisible (oneTwentyEighthNormalEditor = new TextEditor ("oneTwentyEighthNormalEditor"));
    oneTwentyEighthNormalEditor->setMultiLine (false);
    oneTwentyEighthNormalEditor->setReturnKeyStartsNewLine (false);
    oneTwentyEighthNormalEditor->setReadOnly (true);
    oneTwentyEighthNormalEditor->setScrollbarsShown (true);
    oneTwentyEighthNormalEditor->setCaretVisible (false);
    oneTwentyEighthNormalEditor->setPopupMenuEnabled (true);
    oneTwentyEighthNormalEditor->setColour (TextEditor::textColourId, Colours::white);
    oneTwentyEighthNormalEditor->setColour (TextEditor::backgroundColourId, Colour (0xff353535));
    oneTwentyEighthNormalEditor->setText (String());

    addAndMakeVisible (oneTwentyEighthDottedEditor = new TextEditor ("oneTwentyEighthDottedEditor"));
    oneTwentyEighthDottedEditor->setMultiLine (false);
    oneTwentyEighthDottedEditor->setReturnKeyStartsNewLine (false);
    oneTwentyEighthDottedEditor->setReadOnly (true);
    oneTwentyEighthDottedEditor->setScrollbarsShown (true);
    oneTwentyEighthDottedEditor->setCaretVisible (false);
    oneTwentyEighthDottedEditor->setPopupMenuEnabled (true);
    oneTwentyEighthDottedEditor->setColour (TextEditor::textColourId, Colours::white);
    oneTwentyEighthDottedEditor->setColour (TextEditor::backgroundColourId, Colour (0xff353535));
    oneTwentyEighthDottedEditor->setText (String());

    addAndMakeVisible (oneTwentyEighthTripletEditor = new TextEditor ("oneTwentyEighthTripletEditor"));
    oneTwentyEighthTripletEditor->setMultiLine (false);
    oneTwentyEighthTripletEditor->setReturnKeyStartsNewLine (false);
    oneTwentyEighthTripletEditor->setReadOnly (true);
    oneTwentyEighthTripletEditor->setScrollbarsShown (true);
    oneTwentyEighthTripletEditor->setCaretVisible (false);
    oneTwentyEighthTripletEditor->setPopupMenuEnabled (true);
    oneTwentyEighthTripletEditor->setColour (TextEditor::textColourId, Colours::white);
    oneTwentyEighthTripletEditor->setColour (TextEditor::backgroundColourId, Colour (0xff353535));
    oneTwentyEighthTripletEditor->setText (String());

    addAndMakeVisible (tapButton = new TextButton ("tapButton"));
    tapButton->setButtonText (TRANS("T"));
    tapButton->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight);
    tapButton->addListener (this);
    tapButton->setColour (TextButton::buttonColourId, Colour (0xffadaaaa));

    addAndMakeVisible (resetButton = new TextButton ("resetButton"));
    resetButton->setButtonText (TRANS("R"));
    resetButton->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight);
    resetButton->addListener (this);
    resetButton->setColour (TextButton::buttonColourId, Colour (0xffadaaaa));


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 455);


    //[Constructor] You can add your own custom stuff here..

    tempoSlider->setValue(120);

    // Right click for velocity sensitive sliding
    tempoSlider->setPopupMenuEnabled(true);

    // Set text editor font sizes;
    textEditorFontSize = 25;

    wholeNormalEditor->setFont(textEditorFontSize);
    wholeDottedEditor->setFont(textEditorFontSize);
    wholeTripletEditor->setFont(textEditorFontSize);

    halfNormalEditor->setFont(textEditorFontSize);
    halfDottedEditor->setFont(textEditorFontSize);
    halfTripletEditor->setFont(textEditorFontSize);

    quarterNormalEditor->setFont(textEditorFontSize);
    quarterDottedEditor->setFont(textEditorFontSize);
    quarterTripletEditor->setFont(textEditorFontSize);

    eighthNormalEditor->setFont(textEditorFontSize);
    eighthDottedEditor->setFont(textEditorFontSize);
    eighthTripletEditor->setFont(textEditorFontSize);

    sixteenthNormalEditor->setFont(textEditorFontSize);
    sixteenthDottedEditor->setFont(textEditorFontSize);
    sixteenthTripletEditor->setFont(textEditorFontSize);

    thirtySecondNormalEditor->setFont(textEditorFontSize);
    thirtySecondDottedEditor->setFont(textEditorFontSize);
    thirtySecondTripletEditor->setFont(textEditorFontSize);

    sixtyFourthNormalEditor->setFont(textEditorFontSize);
    sixtyFourthDottedEditor->setFont(textEditorFontSize);
    sixtyFourthTripletEditor->setFont(textEditorFontSize);

    oneTwentyEighthNormalEditor->setFont(textEditorFontSize);
    oneTwentyEighthDottedEditor->setFont(textEditorFontSize);
    oneTwentyEighthTripletEditor->setFont(textEditorFontSize);

    //[/Constructor]
}

MainComponent::~MainComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    doubleTempoButton = nullptr;
    halfTempoButton = nullptr;
    emailHyperlink = nullptr;
    alterTheCodeHyperlink = nullptr;
    tempoSlider = nullptr;
    theLyonsDenDelayTimeCalculator = nullptr;
    donateHyperlink = nullptr;
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
    wholeNormalEditor = nullptr;
    wholeDottedEditor = nullptr;
    wholeTripletEditor = nullptr;
    halfNormalEditor = nullptr;
    halfDottedEditor = nullptr;
    halfTripletEditor = nullptr;
    quarterNormalEditor = nullptr;
    quarterDottedEditor = nullptr;
    quarterTripletEditor = nullptr;
    eighthNormalEditor = nullptr;
    eighthDottedEditor = nullptr;
    eighthTripletEditor = nullptr;
    sixteenthNormalEditor = nullptr;
    sixteenthDottedEditor = nullptr;
    sixteenthTripletEditor = nullptr;
    thirtySecondNormalEditor = nullptr;
    thirtySecondDottedEditor = nullptr;
    thirtySecondTripletEditor = nullptr;
    sixtyFourthNormalEditor = nullptr;
    sixtyFourthDottedEditor = nullptr;
    sixtyFourthTripletEditor = nullptr;
    oneTwentyEighthNormalEditor = nullptr;
    oneTwentyEighthDottedEditor = nullptr;
    oneTwentyEighthTripletEditor = nullptr;
    tapButton = nullptr;
    resetButton = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void MainComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff353535));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void MainComponent::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    doubleTempoButton->setBounds (50, 80, 50, 30);
    halfTempoButton->setBounds (0, 80, 50, 30);
    emailHyperlink->setBounds (0, 430, 80, 25);
    alterTheCodeHyperlink->setBounds (200, 430, 200, 25);
    tempoSlider->setBounds (0, 50, 600, 30);
    theLyonsDenDelayTimeCalculator->setBounds (0, 0, 600, 50);
    donateHyperlink->setBounds (536, 430, 64, 25);
    normalLabel->setBounds (150, 80, 150, 30);
    dottedLabel->setBounds (300, 80, 150, 30);
    tripletLabel->setBounds (450, 80, 150, 30);
    wholeLabel->setBounds (0, 110, 150, 30);
    halfLabel->setBounds (0, 150, 150, 30);
    quarterLabel->setBounds (0, 190, 150, 30);
    eighthLabel->setBounds (0, 230, 150, 30);
    sixteenthLabel->setBounds (0, 270, 150, 30);
    thirtySecondLabel->setBounds (0, 310, 150, 30);
    sixtyFourthLabel->setBounds (0, 350, 150, 30);
    oneHundreAndTwentyEighthLabel->setBounds (0, 390, 150, 30);
    wholeNormalEditor->setBounds (150, 110, 150, 30);
    wholeDottedEditor->setBounds (300, 110, 150, 30);
    wholeTripletEditor->setBounds (450, 110, 150, 34);
    halfNormalEditor->setBounds (150, 150, 150, 30);
    halfDottedEditor->setBounds (300, 150, 150, 30);
    halfTripletEditor->setBounds (450, 150, 150, 30);
    quarterNormalEditor->setBounds (150, 190, 150, 30);
    quarterDottedEditor->setBounds (300, 190, 150, 30);
    quarterTripletEditor->setBounds (450, 190, 150, 30);
    eighthNormalEditor->setBounds (150, 230, 150, 30);
    eighthDottedEditor->setBounds (300, 230, 150, 30);
    eighthTripletEditor->setBounds (450, 230, 150, 30);
    sixteenthNormalEditor->setBounds (150, 270, 150, 30);
    sixteenthDottedEditor->setBounds (300, 270, 150, 30);
    sixteenthTripletEditor->setBounds (450, 270, 150, 30);
    thirtySecondNormalEditor->setBounds (150, 310, 150, 30);
    thirtySecondDottedEditor->setBounds (300, 310, 150, 30);
    thirtySecondTripletEditor->setBounds (450, 310, 150, 30);
    sixtyFourthNormalEditor->setBounds (150, 350, 150, 30);
    sixtyFourthDottedEditor->setBounds (300, 350, 150, 30);
    sixtyFourthTripletEditor->setBounds (450, 350, 150, 30);
    oneTwentyEighthNormalEditor->setBounds (150, 390, 150, 30);
    oneTwentyEighthDottedEditor->setBounds (300, 390, 150, 30);
    oneTwentyEighthTripletEditor->setBounds (450, 390, 150, 30);
    tapButton->setBounds (100, 80, 25, 30);
    resetButton->setBounds (125, 80, 25, 30);
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

        tempoSlider->setValue(tapTempo.calculateTempo());

        // Change button color so we know a reset is needed
        resetButton->setColour(TextButton::buttonColourId , Colours::white);

        //[/UserButtonCode_tapButton]
    }
    else if (buttonThatWasClicked == resetButton)
    {
        //[UserButtonCode_resetButton] -- add your button handler code here..

        tapTempo.resetMainCalculationHolders();

        // Reset the color of resetButton by simply setting it to the color of tapButton
        resetButton->setColour(TextButton::buttonColourId,
                               tapButton->findColour(TextButton::buttonColourId));

        //[/UserButtonCode_resetButton]
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

        delayTimeObject.setTempo(tempoSlider->getValue());

        // Set values for all text editors
        wholeNormalEditor->setText((String) delayTimeObject.getWholeNormal());
        wholeDottedEditor->setText((String) delayTimeObject.getWholeDotted());
        wholeTripletEditor->setText((String) delayTimeObject.getWholeTriplet());

        halfNormalEditor->setText((String) delayTimeObject.getHalfNormal());
        halfDottedEditor->setText((String) delayTimeObject.getHalfDotted());
        halfTripletEditor->setText((String) delayTimeObject.getHalfTriplet());

        quarterNormalEditor->setText((String) delayTimeObject.getQuarterNormal());
        quarterDottedEditor->setText((String) delayTimeObject.getQuarterDotted());
        quarterTripletEditor->setText((String) delayTimeObject.getQuarterTriplet());

        eighthNormalEditor->setText((String) delayTimeObject.getEighthNormal());
        eighthDottedEditor->setText((String) delayTimeObject.getEighthDotted());
        eighthTripletEditor->setText((String) delayTimeObject.getEighthTriplet());

        sixteenthNormalEditor->setText((String) delayTimeObject.getSixteenthNormal());
        sixteenthDottedEditor->setText((String) delayTimeObject.getSixteenthDotted());
        sixteenthTripletEditor->setText((String) delayTimeObject.getSixteenthTriplet());

        thirtySecondNormalEditor->setText((String) delayTimeObject.getThirtySecondNormal());
        thirtySecondDottedEditor->setText((String) delayTimeObject.getThirtySecondDotted());
        thirtySecondTripletEditor->setText((String) delayTimeObject.getThirtySecondTriplet());

        sixtyFourthNormalEditor->setText((String) delayTimeObject.getSixtyFouthNormal());
        sixtyFourthDottedEditor->setText((String) delayTimeObject.getSixtyFouthDotted());
        sixtyFourthTripletEditor->setText((String) delayTimeObject.getSixtyFouthTriplet());

        oneTwentyEighthNormalEditor->setText((String) delayTimeObject.getOneHundredAndTwentyEighthNormal());
        oneTwentyEighthDottedEditor->setText((String) delayTimeObject.getOneHundredAndTwentyEighthDotted());
        oneTwentyEighthTripletEditor->setText((String) delayTimeObject.getOneHundredAndTwentyEighthTriplet());

        //[/UserSliderCode_tempoSlider]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
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
                 fixedSize="1" initialWidth="600" initialHeight="455">
  <BACKGROUND backgroundColour="ff353535"/>
  <TEXTBUTTON name="doubleTempoButton" id="74a1161b6a8bd75d" memberName="doubleTempoButton"
              virtualName="" explicitFocusOrder="0" pos="50 80 50 30" bgColOff="ffadaaaa"
              buttonText="2x" connectedEdges="3" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="halfTempoButton" id="edac6a2aecdd8ef5" memberName="halfTempoButton"
              virtualName="" explicitFocusOrder="0" pos="0 80 50 30" bgColOff="ffadaaaa"
              buttonText="1/2x" connectedEdges="3" needsCallback="1" radioGroupId="0"/>
  <HYPERLINKBUTTON name="emailHyperlink" id="61f33ae81920857e" memberName="emailHyperlink"
                   virtualName="" explicitFocusOrder="0" pos="0 430 80 25" tooltip="josephtlyons@gmail.com"
                   textCol="ffadaaaa" buttonText="Email Me" connectedEdges="0" needsCallback="0"
                   radioGroupId="0" url="josephtlyons@gmail.com"/>
  <HYPERLINKBUTTON name="alterTheCodeHyperlink" id="1c00e9554abf8ce9" memberName="alterTheCodeHyperlink"
                   virtualName="" explicitFocusOrder="0" pos="200 430 200 25" tooltip="https://github.com/JosephTLyons/GUI-Delay-Time-Calculator"
                   textCol="ffadaaaa" buttonText="Download the Source Code" connectedEdges="0"
                   needsCallback="0" radioGroupId="0" url="https://github.com/JosephTLyons/GUI-Delay-Time-Calculator"/>
  <SLIDER name="tempoSlider" id="1b36c66db8e52ea5" memberName="tempoSlider"
          virtualName="" explicitFocusOrder="0" pos="0 50 600 30" thumbcol="ffefefef"
          trackcol="ffefefef" textboxtext="ffffffff" textboxbkgd="ff353535"
          textboxhighlight="ffadaaaa" textboxoutline="ff353535" min="1"
          max="1000" int="0.10000000000000000555" style="LinearHorizontal"
          textBoxPos="TextBoxLeft" textBoxEditable="1" textBoxWidth="50"
          textBoxHeight="20" skewFactor="0.5" needsCallback="1"/>
  <LABEL name="theLyonsDenDelayTimeCalculator" id="951f8323b93b29f2" memberName="theLyonsDenDelayTimeCalculator"
         virtualName="" explicitFocusOrder="0" pos="0 0 600 50" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="The Lyons' Den Delay Time Calculator"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Calisto MT" fontsize="47.399999999999998579" bold="0"
         italic="0" justification="36"/>
  <HYPERLINKBUTTON name="donateHyperlink" id="4a395ec4ad75c68d" memberName="donateHyperlink"
                   virtualName="" explicitFocusOrder="0" pos="536 430 64 25" tooltip="https://www.paypal.me/JosephTimothyLyons/1"
                   textCol="ffadaaaa" buttonText="Donate" connectedEdges="0" needsCallback="0"
                   radioGroupId="0" url="https://www.paypal.me/JosephTimothyLyons/1"/>
  <LABEL name="normalLabel" id="a751a1c9841b9424" memberName="normalLabel"
         virtualName="" explicitFocusOrder="0" pos="150 80 150 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="Normal&#10;" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Calisto MT"
         fontsize="30" bold="0" italic="0" justification="33"/>
  <LABEL name="dottedLabel" id="f84ddade330c771e" memberName="dottedLabel"
         virtualName="" explicitFocusOrder="0" pos="300 80 150 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="Dotted" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Calisto MT"
         fontsize="30" bold="0" italic="0" justification="33"/>
  <LABEL name="tripletLabel" id="24f4755bf6b035f2" memberName="tripletLabel"
         virtualName="" explicitFocusOrder="0" pos="450 80 150 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="Triplet" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Calisto MT"
         fontsize="30" bold="0" italic="0" justification="33"/>
  <LABEL name="wholeLabel" id="84a944615f7ab97c" memberName="wholeLabel"
         virtualName="" explicitFocusOrder="0" pos="0 110 150 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="1:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Calisto MT"
         fontsize="30" bold="0" italic="0" justification="33"/>
  <LABEL name="halfLabel" id="670aac61ca569af7" memberName="halfLabel"
         virtualName="" explicitFocusOrder="0" pos="0 150 150 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="1/2:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Calisto MT"
         fontsize="30" bold="0" italic="0" justification="33"/>
  <LABEL name="quarterLabel" id="c5514ec2a3c07661" memberName="quarterLabel"
         virtualName="" explicitFocusOrder="0" pos="0 190 150 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="1/4:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Calisto MT"
         fontsize="30" bold="0" italic="0" justification="33"/>
  <LABEL name="eighthLabel" id="49b134e52607b4bd" memberName="eighthLabel"
         virtualName="" explicitFocusOrder="0" pos="0 230 150 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="1/8:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Calisto MT"
         fontsize="30" bold="0" italic="0" justification="33"/>
  <LABEL name="sixteenthLabel" id="15b5cdc975d8b4c1" memberName="sixteenthLabel"
         virtualName="" explicitFocusOrder="0" pos="0 270 150 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="1/16:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Calisto MT"
         fontsize="30" bold="0" italic="0" justification="33"/>
  <LABEL name="thirtySecondLabel" id="286f381f35aec721" memberName="thirtySecondLabel"
         virtualName="" explicitFocusOrder="0" pos="0 310 150 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="1/32:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Calisto MT"
         fontsize="30" bold="0" italic="0" justification="33"/>
  <LABEL name="sixtyFourthLabel" id="e0fec546bed640df" memberName="sixtyFourthLabel"
         virtualName="" explicitFocusOrder="0" pos="0 350 150 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="1/64:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Calisto MT"
         fontsize="30" bold="0" italic="0" justification="33"/>
  <LABEL name="oneHundreAndTwentyEighthLabel" id="fe1fa9046023fc2a" memberName="oneHundreAndTwentyEighthLabel"
         virtualName="" explicitFocusOrder="0" pos="0 390 150 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="1/128:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Calisto MT"
         fontsize="30" bold="0" italic="0" justification="33"/>
  <TEXTEDITOR name="wholeNormalEditor" id="3e709db971b7b13e" memberName="wholeNormalEditor"
              virtualName="" explicitFocusOrder="0" pos="150 110 150 30" textcol="ffffffff"
              bkgcol="ff353535" initialText="" multiline="0" retKeyStartsLine="0"
              readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="wholeDottedEditor" id="1912d62d2f447597" memberName="wholeDottedEditor"
              virtualName="" explicitFocusOrder="0" pos="300 110 150 30" textcol="ffffffff"
              bkgcol="ff353535" initialText="" multiline="0" retKeyStartsLine="0"
              readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="wholeTripletEditor" id="e112b0a336d6e11d" memberName="wholeTripletEditor"
              virtualName="" explicitFocusOrder="0" pos="450 110 150 34" textcol="ffffffff"
              bkgcol="ff353535" initialText="" multiline="0" retKeyStartsLine="0"
              readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="halfNormalEditor" id="82341999a15b4905" memberName="halfNormalEditor"
              virtualName="" explicitFocusOrder="0" pos="150 150 150 30" textcol="ffffffff"
              bkgcol="ff353535" initialText="" multiline="0" retKeyStartsLine="0"
              readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="halfDottedEditor" id="a85686e91c138fa9" memberName="halfDottedEditor"
              virtualName="" explicitFocusOrder="0" pos="300 150 150 30" textcol="ffffffff"
              bkgcol="ff353535" initialText="" multiline="0" retKeyStartsLine="0"
              readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="halfTripletEditor" id="c55eca7e3b7372f3" memberName="halfTripletEditor"
              virtualName="" explicitFocusOrder="0" pos="450 150 150 30" textcol="ffffffff"
              bkgcol="ff353535" initialText="" multiline="0" retKeyStartsLine="0"
              readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="quarterNormalEditor" id="e57e3dabd7a8102" memberName="quarterNormalEditor"
              virtualName="" explicitFocusOrder="0" pos="150 190 150 30" textcol="ffffffff"
              bkgcol="ff353535" initialText="" multiline="0" retKeyStartsLine="0"
              readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="quarterDottedEditor" id="2fe82d45e4d3e7fc" memberName="quarterDottedEditor"
              virtualName="" explicitFocusOrder="0" pos="300 190 150 30" textcol="ffffffff"
              bkgcol="ff353535" initialText="" multiline="0" retKeyStartsLine="0"
              readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="quarterTripletEditor" id="d2aae6e014d232dc" memberName="quarterTripletEditor"
              virtualName="" explicitFocusOrder="0" pos="450 190 150 30" textcol="ffffffff"
              bkgcol="ff353535" initialText="" multiline="0" retKeyStartsLine="0"
              readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="eighthNormalEditor" id="9d2ae2448e7900db" memberName="eighthNormalEditor"
              virtualName="" explicitFocusOrder="0" pos="150 230 150 30" textcol="ffffffff"
              bkgcol="ff353535" initialText="" multiline="0" retKeyStartsLine="0"
              readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="eighthDottedEditor" id="a4a8910a489e585b" memberName="eighthDottedEditor"
              virtualName="" explicitFocusOrder="0" pos="300 230 150 30" textcol="ffffffff"
              bkgcol="ff353535" initialText="" multiline="0" retKeyStartsLine="0"
              readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="eighthTripletEditor" id="156bf5d61b16ddce" memberName="eighthTripletEditor"
              virtualName="" explicitFocusOrder="0" pos="450 230 150 30" textcol="ffffffff"
              bkgcol="ff353535" initialText="" multiline="0" retKeyStartsLine="0"
              readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="sixteenthNormalEditor" id="24572bb19d126658" memberName="sixteenthNormalEditor"
              virtualName="" explicitFocusOrder="0" pos="150 270 150 30" textcol="ffffffff"
              bkgcol="ff353535" initialText="" multiline="0" retKeyStartsLine="0"
              readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="sixteenthDottedEditor" id="c025d3524e04bf8b" memberName="sixteenthDottedEditor"
              virtualName="" explicitFocusOrder="0" pos="300 270 150 30" textcol="ffffffff"
              bkgcol="ff353535" initialText="" multiline="0" retKeyStartsLine="0"
              readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="sixteenthTripletEditor" id="e9c049b323b23b5a" memberName="sixteenthTripletEditor"
              virtualName="" explicitFocusOrder="0" pos="450 270 150 30" textcol="ffffffff"
              bkgcol="ff353535" initialText="" multiline="0" retKeyStartsLine="0"
              readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="thirtySecondNormalEditor" id="c0fa7d9ff7465796" memberName="thirtySecondNormalEditor"
              virtualName="" explicitFocusOrder="0" pos="150 310 150 30" textcol="ffffffff"
              bkgcol="ff353535" initialText="" multiline="0" retKeyStartsLine="0"
              readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="thirtySecondDottedEditor" id="a8080426d83310b9" memberName="thirtySecondDottedEditor"
              virtualName="" explicitFocusOrder="0" pos="300 310 150 30" textcol="ffffffff"
              bkgcol="ff353535" initialText="" multiline="0" retKeyStartsLine="0"
              readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="thirtySecondTripletEditor" id="50a7d2c7366628ee" memberName="thirtySecondTripletEditor"
              virtualName="" explicitFocusOrder="0" pos="450 310 150 30" textcol="ffffffff"
              bkgcol="ff353535" initialText="" multiline="0" retKeyStartsLine="0"
              readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="sixtyFourthNormalEditor" id="ba43e4d041dac5a5" memberName="sixtyFourthNormalEditor"
              virtualName="" explicitFocusOrder="0" pos="150 350 150 30" textcol="ffffffff"
              bkgcol="ff353535" initialText="" multiline="0" retKeyStartsLine="0"
              readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="sixtyFourthDottedEditor" id="551428071b2d2a98" memberName="sixtyFourthDottedEditor"
              virtualName="" explicitFocusOrder="0" pos="300 350 150 30" textcol="ffffffff"
              bkgcol="ff353535" initialText="" multiline="0" retKeyStartsLine="0"
              readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="sixtyFourthTripletEditor" id="39510d40072f9d4d" memberName="sixtyFourthTripletEditor"
              virtualName="" explicitFocusOrder="0" pos="450 350 150 30" textcol="ffffffff"
              bkgcol="ff353535" initialText="" multiline="0" retKeyStartsLine="0"
              readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="oneTwentyEighthNormalEditor" id="60cb84b268764f6" memberName="oneTwentyEighthNormalEditor"
              virtualName="" explicitFocusOrder="0" pos="150 390 150 30" textcol="ffffffff"
              bkgcol="ff353535" initialText="" multiline="0" retKeyStartsLine="0"
              readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="oneTwentyEighthDottedEditor" id="e78e5d3aa66c7f4" memberName="oneTwentyEighthDottedEditor"
              virtualName="" explicitFocusOrder="0" pos="300 390 150 30" textcol="ffffffff"
              bkgcol="ff353535" initialText="" multiline="0" retKeyStartsLine="0"
              readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="oneTwentyEighthTripletEditor" id="56dcaea61d27bce1" memberName="oneTwentyEighthTripletEditor"
              virtualName="" explicitFocusOrder="0" pos="450 390 150 30" textcol="ffffffff"
              bkgcol="ff353535" initialText="" multiline="0" retKeyStartsLine="0"
              readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTBUTTON name="tapButton" id="3cd8a4f5f3b122f8" memberName="tapButton"
              virtualName="" explicitFocusOrder="0" pos="100 80 25 30" bgColOff="ffadaaaa"
              buttonText="T" connectedEdges="3" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="resetButton" id="137cfed0258a7265" memberName="resetButton"
              virtualName="" explicitFocusOrder="0" pos="125 80 25 30" bgColOff="ffadaaaa"
              buttonText="R" connectedEdges="3" needsCallback="1" radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
