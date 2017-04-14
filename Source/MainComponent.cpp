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

    addAndMakeVisible (delayTimeTextEditor = new TextEditor ("delayTimeTextEditor"));
    delayTimeTextEditor->setMultiLine (false);
    delayTimeTextEditor->setReturnKeyStartsNewLine (false);
    delayTimeTextEditor->setReadOnly (true);
    delayTimeTextEditor->setScrollbarsShown (true);
    delayTimeTextEditor->setCaretVisible (false);
    delayTimeTextEditor->setPopupMenuEnabled (true);
    delayTimeTextEditor->setText (String());

    addAndMakeVisible (tempoInputTextEditor = new TextEditor ("tempoInputTextEditor"));
    tempoInputTextEditor->setMultiLine (false);
    tempoInputTextEditor->setReturnKeyStartsNewLine (false);
    tempoInputTextEditor->setReadOnly (false);
    tempoInputTextEditor->setScrollbarsShown (true);
    tempoInputTextEditor->setCaretVisible (true);
    tempoInputTextEditor->setPopupMenuEnabled (true);
    tempoInputTextEditor->setText (String());

    addAndMakeVisible (comboBox = new ComboBox ("new combo box"));
    comboBox->setEditableText (false);
    comboBox->setJustificationType (Justification::centredLeft);
    comboBox->setTextWhenNothingSelected (TRANS("Normal"));
    comboBox->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    comboBox->addItem (TRANS("Normal"), 1);
    comboBox->addItem (TRANS("Dotted"), 2);
    comboBox->addItem (TRANS("Triplet"), 3);
    comboBox->addListener (this);

    addAndMakeVisible (comboBox2 = new ComboBox ("new combo box"));
    comboBox2->setEditableText (false);
    comboBox2->setJustificationType (Justification::centredLeft);
    comboBox2->setTextWhenNothingSelected (TRANS("1/4"));
    comboBox2->setTextWhenNoChoicesAvailable (String());
    comboBox2->addItem (TRANS("1"), 1);
    comboBox2->addItem (TRANS("1/2"), 2);
    comboBox2->addItem (TRANS("1/4"), 3);
    comboBox2->addItem (TRANS("1/8"), 4);
    comboBox2->addItem (TRANS("1/16"), 5);
    comboBox2->addItem (TRANS("1/32"), 6);
    comboBox2->addItem (TRANS("1/64"), 7);
    comboBox2->addListener (this);

    addAndMakeVisible (doubleTempoButton = new TextButton ("doubleTempoButton"));
    doubleTempoButton->setButtonText (TRANS("2x"));
    doubleTempoButton->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight);
    doubleTempoButton->addListener (this);

    addAndMakeVisible (halfTempoButton = new TextButton ("halfTempoButton"));
    halfTempoButton->setButtonText (TRANS("1/2"));
    halfTempoButton->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight);
    halfTempoButton->addListener (this);

    addAndMakeVisible (emailHyperlink = new HyperlinkButton (TRANS("Email Me"),
                                                             URL ("josephtlyons@gmail.com")));
    emailHyperlink->setTooltip (TRANS("josephtlyons@gmail.com"));
    emailHyperlink->setButtonText (TRANS("Email Me"));
    emailHyperlink->setColour (HyperlinkButton::textColourId, Colour (0xccffffff));

    addAndMakeVisible (theLyonsDenDelayTimeCalculator = new Label ("theLyonsDenDelayTimeCalculator",
                                                                   TRANS("The Lyons\' Den Delay Time Calculator")));
    theLyonsDenDelayTimeCalculator->setFont (Font ("Bodoni 72 Oldstyle", 40.30f, Font::plain));
    theLyonsDenDelayTimeCalculator->setJustificationType (Justification::centred);
    theLyonsDenDelayTimeCalculator->setEditable (false, false, false);
    theLyonsDenDelayTimeCalculator->setColour (Label::textColourId, Colour (0xffadaaaa));
    theLyonsDenDelayTimeCalculator->setColour (TextEditor::textColourId, Colours::black);
    theLyonsDenDelayTimeCalculator->setColour (TextEditor::backgroundColourId, Colour (0x00000000));


    //[UserPreSize]
    //[/UserPreSize]

    setSize (500, 130);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

MainComponent::~MainComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    delayTimeTextEditor = nullptr;
    tempoInputTextEditor = nullptr;
    comboBox = nullptr;
    comboBox2 = nullptr;
    doubleTempoButton = nullptr;
    halfTempoButton = nullptr;
    emailHyperlink = nullptr;
    theLyonsDenDelayTimeCalculator = nullptr;


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

    delayTimeTextEditor->setBounds (400, 70, 100, 30);
    tempoInputTextEditor->setBounds (0, 70, 100, 30);
    comboBox->setBounds (300, 70, 100, 30);
    comboBox2->setBounds (200, 70, 100, 30);
    doubleTempoButton->setBounds (150, 70, 50, 30);
    halfTempoButton->setBounds (100, 70, 50, 30);
    emailHyperlink->setBounds (0, 104, 80, 24);
    theLyonsDenDelayTimeCalculator->setBounds (0, 0, 500, 48);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void MainComponent::comboBoxChanged (ComboBox* comboBoxThatHasChanged)
{
    //[UsercomboBoxChanged_Pre]
    //[/UsercomboBoxChanged_Pre]

    if (comboBoxThatHasChanged == comboBox)
    {
        //[UserComboBoxCode_comboBox] -- add your combo box handling code here..
        //[/UserComboBoxCode_comboBox]
    }
    else if (comboBoxThatHasChanged == comboBox2)
    {
        //[UserComboBoxCode_comboBox2] -- add your combo box handling code here..
        //[/UserComboBoxCode_comboBox2]
    }

    //[UsercomboBoxChanged_Post]
    //[/UsercomboBoxChanged_Post]
}

void MainComponent::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == doubleTempoButton)
    {
        //[UserButtonCode_doubleTempoButton] -- add your button handler code here..
        //[/UserButtonCode_doubleTempoButton]
    }
    else if (buttonThatWasClicked == halfTempoButton)
    {
        //[UserButtonCode_halfTempoButton] -- add your button handler code here..
        //[/UserButtonCode_halfTempoButton]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
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
                 fixedSize="1" initialWidth="500" initialHeight="130">
  <BACKGROUND backgroundColour="ff353535"/>
  <TEXTEDITOR name="delayTimeTextEditor" id="bf6dfd83597fb1a6" memberName="delayTimeTextEditor"
              virtualName="" explicitFocusOrder="0" pos="400 70 100 30" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="1" scrollbars="1"
              caret="0" popupmenu="1"/>
  <TEXTEDITOR name="tempoInputTextEditor" id="360064ad70e7a23" memberName="tempoInputTextEditor"
              virtualName="" explicitFocusOrder="0" pos="0 70 100 30" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <COMBOBOX name="new combo box" id="3b8465bdbe8efc8f" memberName="comboBox"
            virtualName="" explicitFocusOrder="0" pos="300 70 100 30" editable="0"
            layout="33" items="Normal&#10;Dotted&#10;Triplet" textWhenNonSelected="Normal"
            textWhenNoItems="(no choices)"/>
  <COMBOBOX name="new combo box" id="2cf26b790b8239bc" memberName="comboBox2"
            virtualName="" explicitFocusOrder="0" pos="200 70 100 30" editable="0"
            layout="33" items="1&#10;1/2&#10;1/4&#10;1/8&#10;1/16&#10;1/32&#10;1/64"
            textWhenNonSelected="1/4" textWhenNoItems=""/>
  <TEXTBUTTON name="doubleTempoButton" id="74a1161b6a8bd75d" memberName="doubleTempoButton"
              virtualName="" explicitFocusOrder="0" pos="150 70 50 30" buttonText="2x"
              connectedEdges="3" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="halfTempoButton" id="edac6a2aecdd8ef5" memberName="halfTempoButton"
              virtualName="" explicitFocusOrder="0" pos="100 70 50 30" buttonText="1/2"
              connectedEdges="3" needsCallback="1" radioGroupId="0"/>
  <HYPERLINKBUTTON name="emailHyperlink" id="61f33ae81920857e" memberName="emailHyperlink"
                   virtualName="" explicitFocusOrder="0" pos="0 104 80 24" tooltip="josephtlyons@gmail.com"
                   textCol="ccffffff" buttonText="Email Me" connectedEdges="0" needsCallback="0"
                   radioGroupId="0" url="josephtlyons@gmail.com"/>
  <LABEL name="theLyonsDenDelayTimeCalculator" id="30efee6a53c20dfb" memberName="theLyonsDenDelayTimeCalculator"
         virtualName="" explicitFocusOrder="0" pos="0 0 500 48" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="The Lyons' Den Delay Time Calculator"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Bodoni 72 Oldstyle" fontsize="40.299999999999997158"
         bold="0" italic="0" justification="36"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
