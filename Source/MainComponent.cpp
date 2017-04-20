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

    addAndMakeVisible (theLyonsDenDelayTimeCalculator = new Label ("theLyonsDenDelayTimeCalculator",
                                                                   TRANS("The Lyons\' Den Delay Time Calculator")));
    theLyonsDenDelayTimeCalculator->setFont (Font ("Bodoni 72 Oldstyle", 47.40f, Font::plain));
    theLyonsDenDelayTimeCalculator->setJustificationType (Justification::centred);
    theLyonsDenDelayTimeCalculator->setEditable (false, false, false);
    theLyonsDenDelayTimeCalculator->setColour (Label::textColourId, Colour (0xffadaaaa));
    theLyonsDenDelayTimeCalculator->setColour (TextEditor::textColourId, Colours::black);
    theLyonsDenDelayTimeCalculator->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

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
    tempoSlider->setColour (Slider::textBoxTextColourId, Colour (0xffadaaaa));
    tempoSlider->setColour (Slider::textBoxBackgroundColourId, Colour (0xff353535));
    tempoSlider->setColour (Slider::textBoxHighlightColourId, Colour (0xffadaaaa));
    tempoSlider->setColour (Slider::textBoxOutlineColourId, Colour (0xff353535));
    tempoSlider->addListener (this);
    tempoSlider->setSkewFactor (0.5);

    addAndMakeVisible (theLyonsDenDelayTimeCalculator2 = new Label ("theLyonsDenDelayTimeCalculator",
                                                                    TRANS("The Lyons\' Den Delay Time Calculator")));
    theLyonsDenDelayTimeCalculator2->setFont (Font ("Bodoni 72 Oldstyle", 47.40f, Font::plain));
    theLyonsDenDelayTimeCalculator2->setJustificationType (Justification::centred);
    theLyonsDenDelayTimeCalculator2->setEditable (false, false, false);
    theLyonsDenDelayTimeCalculator2->setColour (Label::textColourId, Colour (0xffadaaaa));
    theLyonsDenDelayTimeCalculator2->setColour (TextEditor::textColourId, Colours::black);
    theLyonsDenDelayTimeCalculator2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (donateHyperlink = new HyperlinkButton (TRANS("Donate"),
                                                              URL ("https://www.paypal.me/JosephTimothyLyons/1")));
    donateHyperlink->setTooltip (TRANS("https://www.paypal.me/JosephTimothyLyons/1"));
    donateHyperlink->setButtonText (TRANS("Donate"));
    donateHyperlink->setColour (HyperlinkButton::textColourId, Colour (0xffadaaaa));

    addAndMakeVisible (normalLabel = new Label ("normalLabel",
                                                TRANS("Normal\n")));
    normalLabel->setFont (Font ("Bodoni 72 Oldstyle", 30.00f, Font::plain));
    normalLabel->setJustificationType (Justification::centred);
    normalLabel->setEditable (false, false, false);
    normalLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    normalLabel->setColour (TextEditor::textColourId, Colours::black);
    normalLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (dottedLabel = new Label ("dottedLabel",
                                                TRANS("Dotted")));
    dottedLabel->setFont (Font ("Bodoni 72 Oldstyle", 30.00f, Font::plain));
    dottedLabel->setJustificationType (Justification::centred);
    dottedLabel->setEditable (false, false, false);
    dottedLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    dottedLabel->setColour (TextEditor::textColourId, Colours::black);
    dottedLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (tripletLabel = new Label ("tripletLabel",
                                                 TRANS("Triplet")));
    tripletLabel->setFont (Font ("Bodoni 72 Oldstyle", 30.00f, Font::plain));
    tripletLabel->setJustificationType (Justification::centred);
    tripletLabel->setEditable (false, false, false);
    tripletLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    tripletLabel->setColour (TextEditor::textColourId, Colours::black);
    tripletLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (wholeLabel = new Label ("wholeLabel",
                                               TRANS("Whole:")));
    wholeLabel->setFont (Font ("Bodoni 72 Oldstyle", 30.00f, Font::plain));
    wholeLabel->setJustificationType (Justification::centredLeft);
    wholeLabel->setEditable (false, false, false);
    wholeLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    wholeLabel->setColour (TextEditor::textColourId, Colours::black);
    wholeLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (halfLabel = new Label ("halfLabel",
                                              TRANS("Half:")));
    halfLabel->setFont (Font ("Bodoni 72 Oldstyle", 30.00f, Font::plain));
    halfLabel->setJustificationType (Justification::centredLeft);
    halfLabel->setEditable (false, false, false);
    halfLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    halfLabel->setColour (TextEditor::textColourId, Colours::black);
    halfLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (quarterLabel = new Label ("quarterLabel",
                                                 TRANS("Quarter:")));
    quarterLabel->setFont (Font ("Bodoni 72 Oldstyle", 30.00f, Font::plain));
    quarterLabel->setJustificationType (Justification::centredLeft);
    quarterLabel->setEditable (false, false, false);
    quarterLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    quarterLabel->setColour (TextEditor::textColourId, Colours::black);
    quarterLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (eighthLabel = new Label ("eighthLabel",
                                                TRANS("Eighth:")));
    eighthLabel->setFont (Font ("Bodoni 72 Oldstyle", 30.00f, Font::plain));
    eighthLabel->setJustificationType (Justification::centredLeft);
    eighthLabel->setEditable (false, false, false);
    eighthLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    eighthLabel->setColour (TextEditor::textColourId, Colours::black);
    eighthLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (sixteenthLabel = new Label ("sixteenthLabel",
                                                   TRANS("Sixteenth:")));
    sixteenthLabel->setFont (Font ("Bodoni 72 Oldstyle", 30.00f, Font::plain));
    sixteenthLabel->setJustificationType (Justification::centredLeft);
    sixteenthLabel->setEditable (false, false, false);
    sixteenthLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    sixteenthLabel->setColour (TextEditor::textColourId, Colours::black);
    sixteenthLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (thirtySecondLabel = new Label ("thirtySecondLabel",
                                                      TRANS("Thirty-Second:")));
    thirtySecondLabel->setFont (Font ("Bodoni 72 Oldstyle", 30.00f, Font::plain));
    thirtySecondLabel->setJustificationType (Justification::centred);
    thirtySecondLabel->setEditable (false, false, false);
    thirtySecondLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    thirtySecondLabel->setColour (TextEditor::textColourId, Colours::black);
    thirtySecondLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (thirtySecondLabel2 = new Label ("thirtySecondLabel",
                                                       TRANS("Thirty-Second:")));
    thirtySecondLabel2->setFont (Font ("Bodoni 72 Oldstyle", 30.00f, Font::plain));
    thirtySecondLabel2->setJustificationType (Justification::centredLeft);
    thirtySecondLabel2->setEditable (false, false, false);
    thirtySecondLabel2->setColour (Label::textColourId, Colour (0xffadaaaa));
    thirtySecondLabel2->setColour (TextEditor::textColourId, Colours::black);
    thirtySecondLabel2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (sixtyFourthLabel = new Label ("sixtyFourthLabel",
                                                     TRANS("Sixty-Fourth:")));
    sixtyFourthLabel->setFont (Font ("Bodoni 72 Oldstyle", 30.00f, Font::plain));
    sixtyFourthLabel->setJustificationType (Justification::centredLeft);
    sixtyFourthLabel->setEditable (false, false, false);
    sixtyFourthLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    sixtyFourthLabel->setColour (TextEditor::textColourId, Colours::black);
    sixtyFourthLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (oneHundreAndTwentyEighthLabel = new Label ("oneHundreAndTwentyEighthLabel",
                                                                  TRANS("1/128th:")));
    oneHundreAndTwentyEighthLabel->setFont (Font ("Bodoni 72 Oldstyle", 30.00f, Font::plain));
    oneHundreAndTwentyEighthLabel->setJustificationType (Justification::centredLeft);
    oneHundreAndTwentyEighthLabel->setEditable (false, false, false);
    oneHundreAndTwentyEighthLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    oneHundreAndTwentyEighthLabel->setColour (TextEditor::textColourId, Colours::black);
    oneHundreAndTwentyEighthLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (wholeNormalEditor = new TextEditor ("wholeNormalEditor"));
    wholeNormalEditor->setMultiLine (false);
    wholeNormalEditor->setReturnKeyStartsNewLine (false);
    wholeNormalEditor->setReadOnly (false);
    wholeNormalEditor->setScrollbarsShown (true);
    wholeNormalEditor->setCaretVisible (true);
    wholeNormalEditor->setPopupMenuEnabled (true);
    wholeNormalEditor->setText (String());

    addAndMakeVisible (wholeDottedEditor = new TextEditor ("wholeDottedEditor"));
    wholeDottedEditor->setMultiLine (false);
    wholeDottedEditor->setReturnKeyStartsNewLine (false);
    wholeDottedEditor->setReadOnly (false);
    wholeDottedEditor->setScrollbarsShown (true);
    wholeDottedEditor->setCaretVisible (true);
    wholeDottedEditor->setPopupMenuEnabled (true);
    wholeDottedEditor->setText (String());

    addAndMakeVisible (wholeTripletEditor = new TextEditor ("wholeTripletEditor"));
    wholeTripletEditor->setMultiLine (false);
    wholeTripletEditor->setReturnKeyStartsNewLine (false);
    wholeTripletEditor->setReadOnly (false);
    wholeTripletEditor->setScrollbarsShown (true);
    wholeTripletEditor->setCaretVisible (true);
    wholeTripletEditor->setPopupMenuEnabled (true);
    wholeTripletEditor->setText (String());


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 455);


    //[Constructor] You can add your own custom stuff here..

    tempoSlider->setValue(120);

    // Right click for velocity sensitive sliding
    tempoSlider->setPopupMenuEnabled(true);

    //[/Constructor]
}

MainComponent::~MainComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    doubleTempoButton = nullptr;
    halfTempoButton = nullptr;
    emailHyperlink = nullptr;
    theLyonsDenDelayTimeCalculator = nullptr;
    alterTheCodeHyperlink = nullptr;
    tempoSlider = nullptr;
    theLyonsDenDelayTimeCalculator2 = nullptr;
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
    thirtySecondLabel2 = nullptr;
    sixtyFourthLabel = nullptr;
    oneHundreAndTwentyEighthLabel = nullptr;
    wholeNormalEditor = nullptr;
    wholeDottedEditor = nullptr;
    wholeTripletEditor = nullptr;


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

    doubleTempoButton->setBounds (550, 50, 50, 30);
    halfTempoButton->setBounds (500, 50, 50, 30);
    emailHyperlink->setBounds (0, 430, 80, 25);
    theLyonsDenDelayTimeCalculator->setBounds (0, 0, 600, 50);
    alterTheCodeHyperlink->setBounds (200, 430, 200, 25);
    tempoSlider->setBounds (0, 50, 500, 30);
    theLyonsDenDelayTimeCalculator2->setBounds (0, 0, 600, 50);
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
    thirtySecondLabel2->setBounds (0, 310, 150, 30);
    sixtyFourthLabel->setBounds (0, 350, 150, 30);
    oneHundreAndTwentyEighthLabel->setBounds (0, 390, 150, 30);
    wholeNormalEditor->setBounds (150, 110, 150, 30);
    wholeDottedEditor->setBounds (300, 110, 150, 30);
    wholeTripletEditor->setBounds (450, 110, 150, 30);
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
        wholeDottedEditor->setText((String) delayTimeObject.getWholeDottedNormal());

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
              virtualName="" explicitFocusOrder="0" pos="550 50 50 30" bgColOff="ffadaaaa"
              buttonText="2x" connectedEdges="3" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="halfTempoButton" id="edac6a2aecdd8ef5" memberName="halfTempoButton"
              virtualName="" explicitFocusOrder="0" pos="500 50 50 30" bgColOff="ffadaaaa"
              buttonText="1/2x" connectedEdges="3" needsCallback="1" radioGroupId="0"/>
  <HYPERLINKBUTTON name="emailHyperlink" id="61f33ae81920857e" memberName="emailHyperlink"
                   virtualName="" explicitFocusOrder="0" pos="0 430 80 25" tooltip="josephtlyons@gmail.com"
                   textCol="ffadaaaa" buttonText="Email Me" connectedEdges="0" needsCallback="0"
                   radioGroupId="0" url="josephtlyons@gmail.com"/>
  <LABEL name="theLyonsDenDelayTimeCalculator" id="30efee6a53c20dfb" memberName="theLyonsDenDelayTimeCalculator"
         virtualName="" explicitFocusOrder="0" pos="0 0 600 50" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="The Lyons' Den Delay Time Calculator"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Bodoni 72 Oldstyle" fontsize="47.399999999999998579"
         bold="0" italic="0" justification="36"/>
  <HYPERLINKBUTTON name="alterTheCodeHyperlink" id="1c00e9554abf8ce9" memberName="alterTheCodeHyperlink"
                   virtualName="" explicitFocusOrder="0" pos="200 430 200 25" tooltip="https://github.com/JosephTLyons/GUI-Delay-Time-Calculator"
                   textCol="ffadaaaa" buttonText="Download the Source Code" connectedEdges="0"
                   needsCallback="0" radioGroupId="0" url="https://github.com/JosephTLyons/GUI-Delay-Time-Calculator"/>
  <SLIDER name="tempoSlider" id="1b36c66db8e52ea5" memberName="tempoSlider"
          virtualName="" explicitFocusOrder="0" pos="0 50 500 30" thumbcol="ffefefef"
          trackcol="ffefefef" textboxtext="ffadaaaa" textboxbkgd="ff353535"
          textboxhighlight="ffadaaaa" textboxoutline="ff353535" min="1"
          max="1000" int="0.10000000000000000555" style="LinearHorizontal"
          textBoxPos="TextBoxLeft" textBoxEditable="1" textBoxWidth="50"
          textBoxHeight="20" skewFactor="0.5" needsCallback="1"/>
  <LABEL name="theLyonsDenDelayTimeCalculator" id="951f8323b93b29f2" memberName="theLyonsDenDelayTimeCalculator2"
         virtualName="" explicitFocusOrder="0" pos="0 0 600 50" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="The Lyons' Den Delay Time Calculator"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Bodoni 72 Oldstyle" fontsize="47.399999999999998579"
         bold="0" italic="0" justification="36"/>
  <HYPERLINKBUTTON name="donateHyperlink" id="4a395ec4ad75c68d" memberName="donateHyperlink"
                   virtualName="" explicitFocusOrder="0" pos="536 430 64 25" tooltip="https://www.paypal.me/JosephTimothyLyons/1"
                   textCol="ffadaaaa" buttonText="Donate" connectedEdges="0" needsCallback="0"
                   radioGroupId="0" url="https://www.paypal.me/JosephTimothyLyons/1"/>
  <LABEL name="normalLabel" id="a751a1c9841b9424" memberName="normalLabel"
         virtualName="" explicitFocusOrder="0" pos="150 80 150 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="Normal&#10;" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Bodoni 72 Oldstyle"
         fontsize="30" bold="0" italic="0" justification="36"/>
  <LABEL name="dottedLabel" id="f84ddade330c771e" memberName="dottedLabel"
         virtualName="" explicitFocusOrder="0" pos="300 80 150 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="Dotted" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Bodoni 72 Oldstyle"
         fontsize="30" bold="0" italic="0" justification="36"/>
  <LABEL name="tripletLabel" id="24f4755bf6b035f2" memberName="tripletLabel"
         virtualName="" explicitFocusOrder="0" pos="450 80 150 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="Triplet" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Bodoni 72 Oldstyle"
         fontsize="30" bold="0" italic="0" justification="36"/>
  <LABEL name="wholeLabel" id="84a944615f7ab97c" memberName="wholeLabel"
         virtualName="" explicitFocusOrder="0" pos="0 110 150 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="Whole:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Bodoni 72 Oldstyle"
         fontsize="30" bold="0" italic="0" justification="33"/>
  <LABEL name="halfLabel" id="670aac61ca569af7" memberName="halfLabel"
         virtualName="" explicitFocusOrder="0" pos="0 150 150 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="Half:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Bodoni 72 Oldstyle"
         fontsize="30" bold="0" italic="0" justification="33"/>
  <LABEL name="quarterLabel" id="c5514ec2a3c07661" memberName="quarterLabel"
         virtualName="" explicitFocusOrder="0" pos="0 190 150 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="Quarter:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Bodoni 72 Oldstyle"
         fontsize="30" bold="0" italic="0" justification="33"/>
  <LABEL name="eighthLabel" id="49b134e52607b4bd" memberName="eighthLabel"
         virtualName="" explicitFocusOrder="0" pos="0 230 150 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="Eighth:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Bodoni 72 Oldstyle"
         fontsize="30" bold="0" italic="0" justification="33"/>
  <LABEL name="sixteenthLabel" id="15b5cdc975d8b4c1" memberName="sixteenthLabel"
         virtualName="" explicitFocusOrder="0" pos="0 270 150 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="Sixteenth:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Bodoni 72 Oldstyle"
         fontsize="30" bold="0" italic="0" justification="33"/>
  <LABEL name="thirtySecondLabel" id="286f381f35aec721" memberName="thirtySecondLabel"
         virtualName="" explicitFocusOrder="0" pos="0 310 150 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="Thirty-Second:"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Bodoni 72 Oldstyle" fontsize="30" bold="0" italic="0"
         justification="36"/>
  <LABEL name="thirtySecondLabel" id="fe8cbfe5e1ab3a56" memberName="thirtySecondLabel2"
         virtualName="" explicitFocusOrder="0" pos="0 310 150 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="Thirty-Second:"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Bodoni 72 Oldstyle" fontsize="30" bold="0" italic="0"
         justification="33"/>
  <LABEL name="sixtyFourthLabel" id="e0fec546bed640df" memberName="sixtyFourthLabel"
         virtualName="" explicitFocusOrder="0" pos="0 350 150 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="Sixty-Fourth:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Bodoni 72 Oldstyle"
         fontsize="30" bold="0" italic="0" justification="33"/>
  <LABEL name="oneHundreAndTwentyEighthLabel" id="fe1fa9046023fc2a" memberName="oneHundreAndTwentyEighthLabel"
         virtualName="" explicitFocusOrder="0" pos="0 390 150 30" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="1/128th:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Bodoni 72 Oldstyle"
         fontsize="30" bold="0" italic="0" justification="33"/>
  <TEXTEDITOR name="wholeNormalEditor" id="3e709db971b7b13e" memberName="wholeNormalEditor"
              virtualName="" explicitFocusOrder="0" pos="150 110 150 30" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <TEXTEDITOR name="wholeDottedEditor" id="1912d62d2f447597" memberName="wholeDottedEditor"
              virtualName="" explicitFocusOrder="0" pos="300 110 150 30" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <TEXTEDITOR name="wholeTripletEditor" id="e112b0a336d6e11d" memberName="wholeTripletEditor"
              virtualName="" explicitFocusOrder="0" pos="450 110 150 30" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
