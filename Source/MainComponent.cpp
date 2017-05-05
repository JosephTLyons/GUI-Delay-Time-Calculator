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
    doubleTempoButton->addListener (this);
    doubleTempoButton->setColour (TextButton::buttonColourId, Colour (0xffadaaaa));
    doubleTempoButton->setColour (TextButton::textColourOffId, Colour (0xff353535));

    addAndMakeVisible (halfTempoButton = new TextButton ("halfTempoButton"));
    halfTempoButton->setButtonText (TRANS("1/2x"));
    halfTempoButton->addListener (this);
    halfTempoButton->setColour (TextButton::buttonColourId, Colour (0xffadaaaa));
    halfTempoButton->setColour (TextButton::textColourOffId, Colour (0xff353535));

    addAndMakeVisible (emailHyperlink = new HyperlinkButton (TRANS("Email Me"),
                                                             URL ("josephtlyons@gmail.com")));
    emailHyperlink->setTooltip (TRANS("josephtlyons@gmail.com"));
    emailHyperlink->setButtonText (TRANS("Email Me"));
    emailHyperlink->setColour (HyperlinkButton::textColourId, Colour (0xffadaaaa));

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

    addAndMakeVisible (theLyonsDenDelayTimeCalculator = new Label ("theLyonsDenDelayTimeCalculator",
                                                                   TRANS("The Lyons\' Den Delay Time Calculator")));
    theLyonsDenDelayTimeCalculator->setFont (Font ("Calisto MT", 47.40f, Font::plain).withTypefaceStyle ("Regular"));
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
    normalLabel->setFont (Font ("Calisto MT", 30.00f, Font::plain).withTypefaceStyle ("Regular"));
    normalLabel->setJustificationType (Justification::centredLeft);
    normalLabel->setEditable (false, false, false);
    normalLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    normalLabel->setColour (TextEditor::textColourId, Colours::black);
    normalLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (dottedLabel = new Label ("dottedLabel",
                                                TRANS("Dotted")));
    dottedLabel->setFont (Font ("Calisto MT", 30.00f, Font::plain).withTypefaceStyle ("Regular"));
    dottedLabel->setJustificationType (Justification::centredLeft);
    dottedLabel->setEditable (false, false, false);
    dottedLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    dottedLabel->setColour (TextEditor::textColourId, Colours::black);
    dottedLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (tripletLabel = new Label ("tripletLabel",
                                                 TRANS("Triplet")));
    tripletLabel->setFont (Font ("Calisto MT", 30.00f, Font::plain).withTypefaceStyle ("Regular"));
    tripletLabel->setJustificationType (Justification::centredLeft);
    tripletLabel->setEditable (false, false, false);
    tripletLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    tripletLabel->setColour (TextEditor::textColourId, Colours::black);
    tripletLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (wholeLabel = new Label ("wholeLabel",
                                               TRANS("1:")));
    wholeLabel->setFont (Font ("Calisto MT", 30.00f, Font::plain).withTypefaceStyle ("Regular"));
    wholeLabel->setJustificationType (Justification::centredLeft);
    wholeLabel->setEditable (false, false, false);
    wholeLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    wholeLabel->setColour (TextEditor::textColourId, Colours::black);
    wholeLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (halfLabel = new Label ("halfLabel",
                                              TRANS("1/2:")));
    halfLabel->setFont (Font ("Calisto MT", 30.00f, Font::plain).withTypefaceStyle ("Regular"));
    halfLabel->setJustificationType (Justification::centredLeft);
    halfLabel->setEditable (false, false, false);
    halfLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    halfLabel->setColour (TextEditor::textColourId, Colours::black);
    halfLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (quarterLabel = new Label ("quarterLabel",
                                                 TRANS("1/4:")));
    quarterLabel->setFont (Font ("Calisto MT", 30.00f, Font::plain).withTypefaceStyle ("Regular"));
    quarterLabel->setJustificationType (Justification::centredLeft);
    quarterLabel->setEditable (false, false, false);
    quarterLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    quarterLabel->setColour (TextEditor::textColourId, Colours::black);
    quarterLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (eighthLabel = new Label ("eighthLabel",
                                                TRANS("1/8:")));
    eighthLabel->setFont (Font ("Calisto MT", 30.00f, Font::plain).withTypefaceStyle ("Regular"));
    eighthLabel->setJustificationType (Justification::centredLeft);
    eighthLabel->setEditable (false, false, false);
    eighthLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    eighthLabel->setColour (TextEditor::textColourId, Colours::black);
    eighthLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (sixteenthLabel = new Label ("sixteenthLabel",
                                                   TRANS("1/16:")));
    sixteenthLabel->setFont (Font ("Calisto MT", 30.00f, Font::plain).withTypefaceStyle ("Regular"));
    sixteenthLabel->setJustificationType (Justification::centredLeft);
    sixteenthLabel->setEditable (false, false, false);
    sixteenthLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    sixteenthLabel->setColour (TextEditor::textColourId, Colours::black);
    sixteenthLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (thirtySecondLabel = new Label ("thirtySecondLabel",
                                                      TRANS("1/32:")));
    thirtySecondLabel->setFont (Font ("Calisto MT", 30.00f, Font::plain).withTypefaceStyle ("Regular"));
    thirtySecondLabel->setJustificationType (Justification::centredLeft);
    thirtySecondLabel->setEditable (false, false, false);
    thirtySecondLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    thirtySecondLabel->setColour (TextEditor::textColourId, Colours::black);
    thirtySecondLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (sixtyFourthLabel = new Label ("sixtyFourthLabel",
                                                     TRANS("1/64:")));
    sixtyFourthLabel->setFont (Font ("Calisto MT", 30.00f, Font::plain).withTypefaceStyle ("Regular"));
    sixtyFourthLabel->setJustificationType (Justification::centredLeft);
    sixtyFourthLabel->setEditable (false, false, false);
    sixtyFourthLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    sixtyFourthLabel->setColour (TextEditor::textColourId, Colours::black);
    sixtyFourthLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (oneHundreAndTwentyEighthLabel = new Label ("oneHundreAndTwentyEighthLabel",
                                                                  TRANS("1/128:")));
    oneHundreAndTwentyEighthLabel->setFont (Font ("Calisto MT", 30.00f, Font::plain).withTypefaceStyle ("Regular"));
    oneHundreAndTwentyEighthLabel->setJustificationType (Justification::centredLeft);
    oneHundreAndTwentyEighthLabel->setEditable (false, false, false);
    oneHundreAndTwentyEighthLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    oneHundreAndTwentyEighthLabel->setColour (TextEditor::textColourId, Colours::black);
    oneHundreAndTwentyEighthLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (sixteenthNormalEditor = new TextEditor ("sixteenthNormalEditor"));
    sixteenthNormalEditor->setMultiLine (false);
    sixteenthNormalEditor->setReturnKeyStartsNewLine (false);
    sixteenthNormalEditor->setReadOnly (true);
    sixteenthNormalEditor->setScrollbarsShown (true);
    sixteenthNormalEditor->setCaretVisible (false);
    sixteenthNormalEditor->setPopupMenuEnabled (true);
    sixteenthNormalEditor->setColour (TextEditor::textColourId, Colours::white);
    sixteenthNormalEditor->setColour (TextEditor::backgroundColourId, Colour (0xff353535));
    sixteenthNormalEditor->setColour (TextEditor::outlineColourId, Colour (0xff353535));
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
    sixteenthDottedEditor->setColour (TextEditor::outlineColourId, Colour (0xff353535));
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
    sixteenthTripletEditor->setColour (TextEditor::outlineColourId, Colour (0xff353535));
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
    thirtySecondNormalEditor->setColour (TextEditor::outlineColourId, Colour (0xff353535));
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
    thirtySecondDottedEditor->setColour (TextEditor::outlineColourId, Colour (0xff353535));
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
    thirtySecondTripletEditor->setColour (TextEditor::outlineColourId, Colour (0xff353535));
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
    sixtyFourthNormalEditor->setColour (TextEditor::outlineColourId, Colour (0xff353535));
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
    sixtyFourthDottedEditor->setColour (TextEditor::outlineColourId, Colour (0xff353535));
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
    sixtyFourthTripletEditor->setColour (TextEditor::outlineColourId, Colour (0xff353535));
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
    oneTwentyEighthNormalEditor->setColour (TextEditor::outlineColourId, Colour (0xff353535));
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
    oneTwentyEighthDottedEditor->setColour (TextEditor::outlineColourId, Colour (0xff353535));
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
    oneTwentyEighthTripletEditor->setColour (TextEditor::outlineColourId, Colour (0xff353535));
    oneTwentyEighthTripletEditor->setText (String());

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

    addAndMakeVisible (versionNumberLabel = new Label ("versionNumberLabel",
                                                       TRANS("Version:")));
    versionNumberLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    versionNumberLabel->setJustificationType (Justification::centredLeft);
    versionNumberLabel->setEditable (false, false, false);
    versionNumberLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    versionNumberLabel->setColour (TextEditor::textColourId, Colours::black);
    versionNumberLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (versionNumberEditor = new TextEditor ("versionNumberEditor"));
    versionNumberEditor->setMultiLine (false);
    versionNumberEditor->setReturnKeyStartsNewLine (false);
    versionNumberEditor->setReadOnly (true);
    versionNumberEditor->setScrollbarsShown (true);
    versionNumberEditor->setCaretVisible (false);
    versionNumberEditor->setPopupMenuEnabled (true);
    versionNumberEditor->setColour (TextEditor::textColourId, Colour (0xffadaaaa));
    versionNumberEditor->setColour (TextEditor::backgroundColourId, Colour (0xff353535));
    versionNumberEditor->setColour (TextEditor::outlineColourId, Colour (0xff353535));
    versionNumberEditor->setText (String());

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
                                                      TRANS("stuff\n")));
    eighthDottedLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    eighthDottedLabel->setJustificationType (Justification::centredLeft);
    eighthDottedLabel->setEditable (false, false, false);
    eighthDottedLabel->setColour (TextEditor::textColourId, Colours::black);
    eighthDottedLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (eighthTripletLabel = new Label ("eighthTripletLabel",
                                                       TRANS("stuff\n")));
    eighthTripletLabel->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    eighthTripletLabel->setJustificationType (Justification::centredLeft);
    eighthTripletLabel->setEditable (false, false, false);
    eighthTripletLabel->setColour (TextEditor::textColourId, Colours::black);
    eighthTripletLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 485);


    //[Constructor] You can add your own custom stuff here..

    tempoSlider->setValue(120);

    // Right click for velocity sensitive sliding
    tempoSlider->setPopupMenuEnabled(true);

    // Set version number editor to current version number
    versionNumberEditor->setText((String) ProjectInfo::versionString);

    //[/Constructor]
}

MainComponent::~MainComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    doubleTempoButton = nullptr;
    halfTempoButton = nullptr;
    emailHyperlink = nullptr;
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
    versionNumberLabel = nullptr;
    versionNumberEditor = nullptr;
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

    doubleTempoButton->setBounds (150, 80, 150, 30);
    halfTempoButton->setBounds (0, 80, 150, 30);
    emailHyperlink->setBounds (0, 460, 80, 25);
    tempoSlider->setBounds (0, 50, 600, 30);
    theLyonsDenDelayTimeCalculator->setBounds (0, 0, 600, 50);
    donateHyperlink->setBounds (536, 460, 64, 25);
    normalLabel->setBounds (150, 110, 150, 30);
    dottedLabel->setBounds (300, 110, 150, 30);
    tripletLabel->setBounds (450, 110, 150, 30);
    wholeLabel->setBounds (0, 140, 150, 30);
    halfLabel->setBounds (0, 180, 150, 30);
    quarterLabel->setBounds (0, 220, 150, 30);
    eighthLabel->setBounds (0, 260, 150, 30);
    sixteenthLabel->setBounds (0, 300, 150, 30);
    thirtySecondLabel->setBounds (0, 340, 150, 30);
    sixtyFourthLabel->setBounds (0, 380, 150, 30);
    oneHundreAndTwentyEighthLabel->setBounds (0, 420, 150, 30);
    sixteenthNormalEditor->setBounds (150, 300, 100, 30);
    sixteenthDottedEditor->setBounds (300, 300, 100, 30);
    sixteenthTripletEditor->setBounds (450, 300, 100, 30);
    thirtySecondNormalEditor->setBounds (150, 340, 100, 30);
    thirtySecondDottedEditor->setBounds (300, 340, 100, 30);
    thirtySecondTripletEditor->setBounds (450, 340, 100, 30);
    sixtyFourthNormalEditor->setBounds (150, 380, 100, 30);
    sixtyFourthDottedEditor->setBounds (300, 380, 100, 30);
    sixtyFourthTripletEditor->setBounds (450, 380, 100, 30);
    oneTwentyEighthNormalEditor->setBounds (150, 420, 100, 30);
    oneTwentyEighthDottedEditor->setBounds (300, 420, 100, 30);
    oneTwentyEighthTripletEditor->setBounds (450, 420, 100, 30);
    tapButton->setBounds (300, 80, 150, 30);
    resetButton->setBounds (450, 80, 150, 30);
    versionNumberLabel->setBounds (218, 460, 90, 25);
    versionNumberEditor->setBounds (308, 460, 74, 25);
    wholeNormalLabel->setBounds (150, 140, 100, 30);
    wholeDottedLabel->setBounds (300, 140, 100, 30);
    wholeTripletLabel->setBounds (450, 140, 100, 30);
    halfNormalLabel->setBounds (150, 180, 100, 30);
    halfDottedLabel->setBounds (300, 180, 100, 30);
    halfTripletLabel->setBounds (450, 180, 100, 30);
    quarterNormalLabel->setBounds (150, 220, 100, 30);
    quarterDottedLabel->setBounds (300, 220, 100, 30);
    quarterTripletLabel->setBounds (450, 220, 100, 30);
    eighthNormalLabel->setBounds (150, 260, 100, 30);
    eighthDottedLabel->setBounds (300, 260, 100, 30);
    eighthTripletLabel->setBounds (450, 260, 100, 30);
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
        //resetButton->setColour(TextButton::button, <#juce::Colour newColour#>)

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

        // Set values for all text labels
        wholeNormalLabel->setText((String) delayTimeObject.getHalfDotted(), dontSendNotification);
        wholeDottedLabel->setText((String) delayTimeObject.getWholeDotted(), dontSendNotification);
        wholeTripletLabel->setText((String) delayTimeObject.getWholeTriplet(), dontSendNotification);

        halfNormalLabel->setText((String) delayTimeObject.getHalfNormal(), dontSendNotification);
        halfDottedLabel->setText((String) delayTimeObject.getHalfDotted(), dontSendNotification);
        halfTripletLabel->setText((String) delayTimeObject.getHalfTriplet(), dontSendNotification);

        quarterNormalLabel->setText((String) delayTimeObject.getQuarterNormal(), dontSendNotification);
        quarterDottedLabel->setText((String) delayTimeObject.getQuarterDotted(), dontSendNotification);
        quarterTripletLabel->setText((String) delayTimeObject.getQuarterTriplet(), dontSendNotification);

        eighthNormalLabel->setText((String) delayTimeObject.getEighthNormal(), dontSendNotification);
        eighthDottedLabel->setText((String) delayTimeObject.getEighthDotted(), dontSendNotification);
        eighthTripletLabel->setText((String) delayTimeObject.getEighthTriplet(), dontSendNotification);

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
                 fixedSize="1" initialWidth="600" initialHeight="485">
  <BACKGROUND backgroundColour="ff353535"/>
  <TEXTBUTTON name="doubleTempoButton" id="74a1161b6a8bd75d" memberName="doubleTempoButton"
              virtualName="" explicitFocusOrder="0" pos="150 80 150 30" bgColOff="ffadaaaa"
              textCol="ff353535" buttonText="2x" connectedEdges="0" needsCallback="1"
              radioGroupId="0"/>
  <TEXTBUTTON name="halfTempoButton" id="edac6a2aecdd8ef5" memberName="halfTempoButton"
              virtualName="" explicitFocusOrder="0" pos="0 80 150 30" bgColOff="ffadaaaa"
              textCol="ff353535" buttonText="1/2x" connectedEdges="0" needsCallback="1"
              radioGroupId="0"/>
  <HYPERLINKBUTTON name="emailHyperlink" id="61f33ae81920857e" memberName="emailHyperlink"
                   virtualName="" explicitFocusOrder="0" pos="0 460 80 25" tooltip="josephtlyons@gmail.com"
                   textCol="ffadaaaa" buttonText="Email Me" connectedEdges="0" needsCallback="0"
                   radioGroupId="0" url="josephtlyons@gmail.com"/>
  <SLIDER name="tempoSlider" id="1b36c66db8e52ea5" memberName="tempoSlider"
          virtualName="" explicitFocusOrder="0" pos="0 50 600 30" bkgcol="ff000000"
          thumbcol="ffffffff" trackcol="ffadaaaa" textboxtext="ffffffff"
          textboxbkgd="ff353535" textboxhighlight="ffadaaaa" textboxoutline="ff353535"
          min="1" max="1000" int="0.10000000000000000555" style="LinearHorizontal"
          textBoxPos="TextBoxLeft" textBoxEditable="1" textBoxWidth="50"
          textBoxHeight="20" skewFactor="0.5" needsCallback="1"/>
  <LABEL name="theLyonsDenDelayTimeCalculator" id="951f8323b93b29f2" memberName="theLyonsDenDelayTimeCalculator"
         virtualName="" explicitFocusOrder="0" pos="0 0 600 50" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="The Lyons' Den Delay Time Calculator"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Calisto MT" fontsize="47.399999999999998579" kerning="0"
         bold="0" italic="0" justification="36"/>
  <HYPERLINKBUTTON name="donateHyperlink" id="4a395ec4ad75c68d" memberName="donateHyperlink"
                   virtualName="" explicitFocusOrder="0" pos="536 460 64 25" tooltip="https://www.paypal.me/JosephTimothyLyons/1"
                   textCol="ffadaaaa" buttonText="Donate" connectedEdges="0" needsCallback="0"
                   radioGroupId="0" url="https://www.paypal.me/JosephTimothyLyons/1"/>
  <LABEL name="normalLabel" id="a751a1c9841b9424" memberName="normalLabel"
         virtualName="" explicitFocusOrder="0" pos="150 110 150 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="Normal&#10;" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Calisto MT"
         fontsize="30" kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="dottedLabel" id="f84ddade330c771e" memberName="dottedLabel"
         virtualName="" explicitFocusOrder="0" pos="300 110 150 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="Dotted" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Calisto MT"
         fontsize="30" kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="tripletLabel" id="24f4755bf6b035f2" memberName="tripletLabel"
         virtualName="" explicitFocusOrder="0" pos="450 110 150 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="Triplet" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Calisto MT"
         fontsize="30" kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="wholeLabel" id="84a944615f7ab97c" memberName="wholeLabel"
         virtualName="" explicitFocusOrder="0" pos="0 140 150 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="1:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Calisto MT"
         fontsize="30" kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="halfLabel" id="670aac61ca569af7" memberName="halfLabel"
         virtualName="" explicitFocusOrder="0" pos="0 180 150 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="1/2:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Calisto MT"
         fontsize="30" kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="quarterLabel" id="c5514ec2a3c07661" memberName="quarterLabel"
         virtualName="" explicitFocusOrder="0" pos="0 220 150 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="1/4:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Calisto MT"
         fontsize="30" kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="eighthLabel" id="49b134e52607b4bd" memberName="eighthLabel"
         virtualName="" explicitFocusOrder="0" pos="0 260 150 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="1/8:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Calisto MT"
         fontsize="30" kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="sixteenthLabel" id="15b5cdc975d8b4c1" memberName="sixteenthLabel"
         virtualName="" explicitFocusOrder="0" pos="0 300 150 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="1/16:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Calisto MT"
         fontsize="30" kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="thirtySecondLabel" id="286f381f35aec721" memberName="thirtySecondLabel"
         virtualName="" explicitFocusOrder="0" pos="0 340 150 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="1/32:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Calisto MT"
         fontsize="30" kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="sixtyFourthLabel" id="e0fec546bed640df" memberName="sixtyFourthLabel"
         virtualName="" explicitFocusOrder="0" pos="0 380 150 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="1/64:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Calisto MT"
         fontsize="30" kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="oneHundreAndTwentyEighthLabel" id="fe1fa9046023fc2a" memberName="oneHundreAndTwentyEighthLabel"
         virtualName="" explicitFocusOrder="0" pos="0 420 150 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="1/128:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Calisto MT"
         fontsize="30" kerning="0" bold="0" italic="0" justification="33"/>
  <TEXTEDITOR name="sixteenthNormalEditor" id="24572bb19d126658" memberName="sixteenthNormalEditor"
              virtualName="" explicitFocusOrder="0" pos="150 300 100 30" textcol="ffffffff"
              bkgcol="ff353535" outlinecol="ff353535" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="sixteenthDottedEditor" id="c025d3524e04bf8b" memberName="sixteenthDottedEditor"
              virtualName="" explicitFocusOrder="0" pos="300 300 100 30" textcol="ffffffff"
              bkgcol="ff353535" outlinecol="ff353535" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="sixteenthTripletEditor" id="e9c049b323b23b5a" memberName="sixteenthTripletEditor"
              virtualName="" explicitFocusOrder="0" pos="450 300 100 30" textcol="ffffffff"
              bkgcol="ff353535" outlinecol="ff353535" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="thirtySecondNormalEditor" id="c0fa7d9ff7465796" memberName="thirtySecondNormalEditor"
              virtualName="" explicitFocusOrder="0" pos="150 340 100 30" textcol="ffffffff"
              bkgcol="ff353535" outlinecol="ff353535" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="thirtySecondDottedEditor" id="a8080426d83310b9" memberName="thirtySecondDottedEditor"
              virtualName="" explicitFocusOrder="0" pos="300 340 100 30" textcol="ffffffff"
              bkgcol="ff353535" outlinecol="ff353535" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="thirtySecondTripletEditor" id="50a7d2c7366628ee" memberName="thirtySecondTripletEditor"
              virtualName="" explicitFocusOrder="0" pos="450 340 100 30" textcol="ffffffff"
              bkgcol="ff353535" outlinecol="ff353535" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="sixtyFourthNormalEditor" id="ba43e4d041dac5a5" memberName="sixtyFourthNormalEditor"
              virtualName="" explicitFocusOrder="0" pos="150 380 100 30" textcol="ffffffff"
              bkgcol="ff353535" outlinecol="ff353535" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="sixtyFourthDottedEditor" id="551428071b2d2a98" memberName="sixtyFourthDottedEditor"
              virtualName="" explicitFocusOrder="0" pos="300 380 100 30" textcol="ffffffff"
              bkgcol="ff353535" outlinecol="ff353535" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="sixtyFourthTripletEditor" id="39510d40072f9d4d" memberName="sixtyFourthTripletEditor"
              virtualName="" explicitFocusOrder="0" pos="450 380 100 30" textcol="ffffffff"
              bkgcol="ff353535" outlinecol="ff353535" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="oneTwentyEighthNormalEditor" id="60cb84b268764f6" memberName="oneTwentyEighthNormalEditor"
              virtualName="" explicitFocusOrder="0" pos="150 420 100 30" textcol="ffffffff"
              bkgcol="ff353535" outlinecol="ff353535" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="oneTwentyEighthDottedEditor" id="e78e5d3aa66c7f4" memberName="oneTwentyEighthDottedEditor"
              virtualName="" explicitFocusOrder="0" pos="300 420 100 30" textcol="ffffffff"
              bkgcol="ff353535" outlinecol="ff353535" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="oneTwentyEighthTripletEditor" id="56dcaea61d27bce1" memberName="oneTwentyEighthTripletEditor"
              virtualName="" explicitFocusOrder="0" pos="450 420 100 30" textcol="ffffffff"
              bkgcol="ff353535" outlinecol="ff353535" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTBUTTON name="tapButton" id="3cd8a4f5f3b122f8" memberName="tapButton"
              virtualName="" explicitFocusOrder="0" pos="300 80 150 30" bgColOff="ffadaaaa"
              textCol="ff353535" buttonText="Tap Tempo" connectedEdges="0"
              needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="resetButton" id="137cfed0258a7265" memberName="resetButton"
              virtualName="" explicitFocusOrder="0" pos="450 80 150 30" bgColOff="ffadaaaa"
              textCol="ff353535" buttonText="Reset Tap Tempo" connectedEdges="0"
              needsCallback="1" radioGroupId="0"/>
  <LABEL name="versionNumberLabel" id="b387ac42be587b24" memberName="versionNumberLabel"
         virtualName="" explicitFocusOrder="0" pos="218 460 90 25" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="Version:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="25" kerning="0" bold="0" italic="0" justification="33"/>
  <TEXTEDITOR name="versionNumberEditor" id="41ac6e79aa2cd908" memberName="versionNumberEditor"
              virtualName="" explicitFocusOrder="0" pos="308 460 74 25" textcol="ffadaaaa"
              bkgcol="ff353535" outlinecol="ff353535" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <LABEL name="new label" id="3b0b371f9cfffd20" memberName="wholeNormalLabel"
         virtualName="" explicitFocusOrder="0" pos="150 140 100 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25"
         kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="wholeDottedLabel" id="5aa96ffcf47310ae" memberName="wholeDottedLabel"
         virtualName="" explicitFocusOrder="0" pos="300 140 100 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25"
         kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="wholeTripletLabel" id="acb484e802c4fea9" memberName="wholeTripletLabel"
         virtualName="" explicitFocusOrder="0" pos="450 140 100 30" edTextCol="ff000000"
         edBkgCol="0" labelText="&#10;" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25"
         kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="halfNormalLabel" id="fb1b90b40fe022a1" memberName="halfNormalLabel"
         virtualName="" explicitFocusOrder="0" pos="150 180 100 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25"
         kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="halfDottedLabel" id="29a3d055318a2256" memberName="halfDottedLabel"
         virtualName="" explicitFocusOrder="0" pos="300 180 100 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25"
         kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="halfTripletLabel" id="474722dc22cd155b" memberName="halfTripletLabel"
         virtualName="" explicitFocusOrder="0" pos="450 180 100 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25"
         kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="quarterNormalLabel" id="a0b43f6d2cebf017" memberName="quarterNormalLabel"
         virtualName="" explicitFocusOrder="0" pos="150 220 100 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25"
         kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="quarterDottedLabel" id="6e5caff96007dec1" memberName="quarterDottedLabel"
         virtualName="" explicitFocusOrder="0" pos="300 220 100 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25"
         kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="quarterTripletLabel" id="fe2643302e963795" memberName="quarterTripletLabel"
         virtualName="" explicitFocusOrder="0" pos="450 220 100 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25"
         kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="eighthNormalLabel" id="aabf4b6c5866f43a" memberName="eighthNormalLabel"
         virtualName="" explicitFocusOrder="0" pos="150 260 100 30" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25"
         kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="eighthDottedLabel" id="df0f0f30eec2686f" memberName="eighthDottedLabel"
         virtualName="" explicitFocusOrder="0" pos="300 260 100 30" edTextCol="ff000000"
         edBkgCol="0" labelText="stuff&#10;" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25"
         kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="eighthTripletLabel" id="7b34c480a75f818" memberName="eighthTripletLabel"
         virtualName="" explicitFocusOrder="0" pos="450 260 100 30" edTextCol="ff000000"
         edBkgCol="0" labelText="stuff&#10;" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="25"
         kerning="0" bold="0" italic="0" justification="33"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
