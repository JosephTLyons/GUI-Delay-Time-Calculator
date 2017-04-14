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
    delayTimeTextEditor->setColour (TextEditor::textColourId, Colour (0xffadaaaa));
    delayTimeTextEditor->setColour (TextEditor::backgroundColourId, Colour (0xff353535));
    delayTimeTextEditor->setText (String());

    addAndMakeVisible (modificationComboBox = new ComboBox ("modificationComboBox"));
    modificationComboBox->setEditableText (false);
    modificationComboBox->setJustificationType (Justification::centredLeft);
    modificationComboBox->setTextWhenNothingSelected (String());
    modificationComboBox->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    modificationComboBox->addItem (TRANS("Normal"), 1);
    modificationComboBox->addItem (TRANS("Dotted"), 2);
    modificationComboBox->addItem (TRANS("Triplet"), 3);
    modificationComboBox->addListener (this);

    addAndMakeVisible (intervalsComboBox = new ComboBox ("intervalsComboBox"));
    intervalsComboBox->setEditableText (false);
    intervalsComboBox->setJustificationType (Justification::centredLeft);
    intervalsComboBox->setTextWhenNothingSelected (String());
    intervalsComboBox->setTextWhenNoChoicesAvailable (String());
    intervalsComboBox->addItem (TRANS("1"), 1);
    intervalsComboBox->addItem (TRANS("1/2"), 2);
    intervalsComboBox->addItem (TRANS("1/4"), 3);
    intervalsComboBox->addItem (TRANS("1/8"), 4);
    intervalsComboBox->addItem (TRANS("1/16"), 5);
    intervalsComboBox->addItem (TRANS("1/32"), 6);
    intervalsComboBox->addItem (TRANS("1/64"), 7);
    intervalsComboBox->addItem (TRANS("1/128"), 8);
    intervalsComboBox->addListener (this);

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
    alterTheCodeHyperlink->setColour (HyperlinkButton::textColourId, Colour (0xccffffff));

    addAndMakeVisible (tempoSlider = new Slider ("tempoSlider"));
    tempoSlider->setRange (1, 1000, 0.1);
    tempoSlider->setSliderStyle (Slider::LinearHorizontal);
    tempoSlider->setTextBoxStyle (Slider::TextBoxLeft, false, 50, 20);
    tempoSlider->setColour (Slider::textBoxTextColourId, Colour (0xffadaaaa));
    tempoSlider->setColour (Slider::textBoxBackgroundColourId, Colour (0xff353535));
    tempoSlider->setColour (Slider::textBoxHighlightColourId, Colour (0x40ffffff));
    tempoSlider->setColour (Slider::textBoxOutlineColourId, Colour (0xff353535));
    tempoSlider->addListener (this);

    addAndMakeVisible (theLyonsDenDelayTimeCalculator2 = new Label ("theLyonsDenDelayTimeCalculator",
                                                                    TRANS("The Lyons\' Den Delay Time Calculator")));
    theLyonsDenDelayTimeCalculator2->setFont (Font ("Bodoni 72 Oldstyle", 47.40f, Font::plain));
    theLyonsDenDelayTimeCalculator2->setJustificationType (Justification::centred);
    theLyonsDenDelayTimeCalculator2->setEditable (false, false, false);
    theLyonsDenDelayTimeCalculator2->setColour (Label::textColourId, Colour (0xffadaaaa));
    theLyonsDenDelayTimeCalculator2->setColour (TextEditor::textColourId, Colours::black);
    theLyonsDenDelayTimeCalculator2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (msLabel = new Label ("msLabel",
                                            TRANS("ms")));
    msLabel->setFont (Font ("Bodoni 72 Oldstyle", 47.40f, Font::plain));
    msLabel->setJustificationType (Justification::centred);
    msLabel->setEditable (false, false, false);
    msLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    msLabel->setColour (TextEditor::textColourId, Colours::black);
    msLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 150);


    //[Constructor] You can add your own custom stuff here..

    tempoSlider->setValue(120);

    // Initialize combo boxes to 1/4 and normal from DelayTime class enums
    intervalsComboBox->setSelectedId(delayTimeObject.getIntervalChosen());
    modificationComboBox->setSelectedId(delayTimeObject.getValueModificationChosen());

    // Set delay time editor font size
    delayTimeTextEditor->setFont(60);

    //[/Constructor]
}

MainComponent::~MainComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    delayTimeTextEditor = nullptr;
    modificationComboBox = nullptr;
    intervalsComboBox = nullptr;
    doubleTempoButton = nullptr;
    halfTempoButton = nullptr;
    emailHyperlink = nullptr;
    theLyonsDenDelayTimeCalculator = nullptr;
    alterTheCodeHyperlink = nullptr;
    tempoSlider = nullptr;
    theLyonsDenDelayTimeCalculator2 = nullptr;
    msLabel = nullptr;


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

    delayTimeTextEditor->setBounds (300, 80, 218, 70);
    modificationComboBox->setBounds (150, 80, 150, 30);
    intervalsComboBox->setBounds (0, 80, 150, 30);
    doubleTempoButton->setBounds (550, 50, 50, 30);
    halfTempoButton->setBounds (500, 50, 50, 30);
    emailHyperlink->setBounds (0, 120, 80, 25);
    theLyonsDenDelayTimeCalculator->setBounds (0, 0, 600, 50);
    alterTheCodeHyperlink->setBounds (97, 120, 200, 25);
    tempoSlider->setBounds (0, 50, 500, 30);
    theLyonsDenDelayTimeCalculator2->setBounds (0, 0, 600, 50);
    msLabel->setBounds (518, 80, 82, 70);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void MainComponent::comboBoxChanged (ComboBox* comboBoxThatHasChanged)
{
    //[UsercomboBoxChanged_Pre]
    //[/UsercomboBoxChanged_Pre]

    if (comboBoxThatHasChanged == modificationComboBox)
    {
        //[UserComboBoxCode_modificationComboBox] -- add your combo box handling code here..

        // Set new interval value in class
        delayTimeObject.setValueModificationChosen(modificationComboBox->getSelectedId());

        //[/UserComboBoxCode_modificationComboBox]
    }
    else if (comboBoxThatHasChanged == intervalsComboBox)
    {
        //[UserComboBoxCode_intervalsComboBox] -- add your combo box handling code here..

        // Set new interval value in class
        delayTimeObject.setIntervalChosen(intervalsComboBox->getSelectedId());

        //[/UserComboBoxCode_intervalsComboBox]
    }

    //[UsercomboBoxChanged_Post]

    // Recalculate delay time
    delayTimeObject.calculateDelayTime();

    // Reset text editor with new value
    delayTimeTextEditor->setText((String) delayTimeObject.calculateDelayTime());

    //[/UsercomboBoxChanged_Post]
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
        delayTimeTextEditor->setText((String) delayTimeObject.calculateDelayTime());

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
                 fixedSize="1" initialWidth="600" initialHeight="150">
  <BACKGROUND backgroundColour="ff353535"/>
  <TEXTEDITOR name="delayTimeTextEditor" id="bf6dfd83597fb1a6" memberName="delayTimeTextEditor"
              virtualName="" explicitFocusOrder="0" pos="300 80 218 70" textcol="ffadaaaa"
              bkgcol="ff353535" initialText="" multiline="0" retKeyStartsLine="0"
              readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <COMBOBOX name="modificationComboBox" id="3b8465bdbe8efc8f" memberName="modificationComboBox"
            virtualName="" explicitFocusOrder="0" pos="150 80 150 30" editable="0"
            layout="33" items="Normal&#10;Dotted&#10;Triplet" textWhenNonSelected=""
            textWhenNoItems="(no choices)"/>
  <COMBOBOX name="intervalsComboBox" id="2cf26b790b8239bc" memberName="intervalsComboBox"
            virtualName="" explicitFocusOrder="0" pos="0 80 150 30" editable="0"
            layout="33" items="1&#10;1/2&#10;1/4&#10;1/8&#10;1/16&#10;1/32&#10;1/64&#10;1/128"
            textWhenNonSelected="" textWhenNoItems=""/>
  <TEXTBUTTON name="doubleTempoButton" id="74a1161b6a8bd75d" memberName="doubleTempoButton"
              virtualName="" explicitFocusOrder="0" pos="550 50 50 30" buttonText="2x"
              connectedEdges="3" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="halfTempoButton" id="edac6a2aecdd8ef5" memberName="halfTempoButton"
              virtualName="" explicitFocusOrder="0" pos="500 50 50 30" buttonText="1/2"
              connectedEdges="3" needsCallback="1" radioGroupId="0"/>
  <HYPERLINKBUTTON name="emailHyperlink" id="61f33ae81920857e" memberName="emailHyperlink"
                   virtualName="" explicitFocusOrder="0" pos="0 120 80 25" tooltip="josephtlyons@gmail.com"
                   textCol="ccffffff" buttonText="Email Me" connectedEdges="0" needsCallback="0"
                   radioGroupId="0" url="josephtlyons@gmail.com"/>
  <LABEL name="theLyonsDenDelayTimeCalculator" id="30efee6a53c20dfb" memberName="theLyonsDenDelayTimeCalculator"
         virtualName="" explicitFocusOrder="0" pos="0 0 600 50" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="The Lyons' Den Delay Time Calculator"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Bodoni 72 Oldstyle" fontsize="47.399999999999998579"
         bold="0" italic="0" justification="36"/>
  <HYPERLINKBUTTON name="alterTheCodeHyperlink" id="1c00e9554abf8ce9" memberName="alterTheCodeHyperlink"
                   virtualName="" explicitFocusOrder="0" pos="97 120 200 25" tooltip="https://github.com/JosephTLyons/GUI-Delay-Time-Calculator"
                   textCol="ccffffff" buttonText="Download the Source Code" connectedEdges="0"
                   needsCallback="0" radioGroupId="0" url="https://github.com/JosephTLyons/GUI-Delay-Time-Calculator"/>
  <SLIDER name="tempoSlider" id="1b36c66db8e52ea5" memberName="tempoSlider"
          virtualName="" explicitFocusOrder="0" pos="0 50 500 30" textboxtext="ffadaaaa"
          textboxbkgd="ff353535" textboxhighlight="40ffffff" textboxoutline="ff353535"
          min="1" max="1000" int="0.10000000000000000555" style="LinearHorizontal"
          textBoxPos="TextBoxLeft" textBoxEditable="1" textBoxWidth="50"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <LABEL name="theLyonsDenDelayTimeCalculator" id="951f8323b93b29f2" memberName="theLyonsDenDelayTimeCalculator2"
         virtualName="" explicitFocusOrder="0" pos="0 0 600 50" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="The Lyons' Den Delay Time Calculator"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Bodoni 72 Oldstyle" fontsize="47.399999999999998579"
         bold="0" italic="0" justification="36"/>
  <LABEL name="msLabel" id="28c03c389359c67" memberName="msLabel" virtualName=""
         explicitFocusOrder="0" pos="518 80 82 70" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="ms" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Bodoni 72 Oldstyle"
         fontsize="47.399999999999998579" bold="0" italic="0" justification="36"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
