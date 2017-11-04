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
//[/Headers]

#include "InformationComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
InformationComponent::InformationComponent ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    addAndMakeVisible (informationLabel = new Label ("informationLabel",
                                                     TRANS("Information")));
    informationLabel->setFont (Font ("Arial", 47.40f, Font::plain).withTypefaceStyle ("Regular").withExtraKerningFactor (0.043f));
    informationLabel->setJustificationType (Justification::centred);
    informationLabel->setEditable (false, false, false);
    informationLabel->setColour (Label::textColourId, Colour (0xffadaaaa));
    informationLabel->setColour (TextEditor::textColourId, Colours::black);
    informationLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (versionNumberLabelOutput = new Label ("versionNumberLabel",
                                                             String()));
    versionNumberLabelOutput->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    versionNumberLabelOutput->setJustificationType (Justification::centredLeft);
    versionNumberLabelOutput->setEditable (false, false, false);
    versionNumberLabelOutput->setColour (Label::textColourId, Colour (0xffadaaaa));
    versionNumberLabelOutput->setColour (TextEditor::textColourId, Colours::black);
    versionNumberLabelOutput->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (informationTextEditor = new TextEditor ("textEditorString"));
    informationTextEditor->setMultiLine (true);
    informationTextEditor->setReturnKeyStartsNewLine (true);
    informationTextEditor->setReadOnly (true);
    informationTextEditor->setScrollbarsShown (true);
    informationTextEditor->setCaretVisible (false);
    informationTextEditor->setPopupMenuEnabled (true);
    informationTextEditor->setColour (TextEditor::backgroundColourId, Colour (0xff353535));
    informationTextEditor->setColour (TextEditor::outlineColourId, Colour (0xff353535));
    informationTextEditor->setText (String());


    //[UserPreSize]
    //[/UserPreSize]

    setSize (240, 290);


    //[Constructor] You can add your own custom stuff here..

    // Add information to text string
    informationTextEditorString += "-'C' for coarse resolution\n";
    informationTextEditorString += "-'S' for standard resolution\n";
    informationTextEditorString += "-'F' for fine resolution\n\n";
    
    informationTextEditorString += "-'1' to trigger 1/2x\n";
    informationTextEditorString += "-'2' to trigger 2x\n";
    informationTextEditorString += "-'T' to trigger Tap Tempo\n";
    informationTextEditorString += "-'R' to trigger Reset Tap Tempo\n\n";
    
    informationTextEditorString += "-'M' to enable ms\n";
    informationTextEditorString += "-'H' to enable Hz\n\n";
    
    informationTextEditorString += "-Spacebar to round tempo\n";
    informationTextEditorString += "-Right Arrow = +5\n";
    informationTextEditorString += "-Left Arrow = -5\n";
    informationTextEditorString += "-Up Arrow = +1\n";
    informationTextEditorString += "-Down Arrow = -1";

    // Set font size
    informationTextEditor->setFont(16.5);

    // Add string to textEditor
    informationTextEditor->setText(informationTextEditorString);

    // Set version number editor to current version number
    versionNumberString = "Delay Time Calculator Version: ";
    versionNumberString += ProjectInfo::versionString;
    versionNumberLabelOutput->setText(versionNumberString, dontSendNotification);

    //[/Constructor]
}

InformationComponent::~InformationComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    informationLabel = nullptr;
    versionNumberLabelOutput = nullptr;
    informationTextEditor = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void InformationComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff353535));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void InformationComponent::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    informationLabel->setBounds (0, 0, 240, 50);
    versionNumberLabelOutput->setBounds (0, 270, 240, 20);
    informationTextEditor->setBounds (0, 50, 240, 220);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="InformationComponent" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="1" initialWidth="240" initialHeight="290">
  <BACKGROUND backgroundColour="ff353535"/>
  <LABEL name="informationLabel" id="951f8323b93b29f2" memberName="informationLabel"
         virtualName="" explicitFocusOrder="0" pos="0 0 240 50" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="Information" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="47.399999999999998579" kerning="0.042999999999999996558"
         bold="0" italic="0" justification="36"/>
  <LABEL name="versionNumberLabel" id="30f8922fa9ce43fc" memberName="versionNumberLabelOutput"
         virtualName="" explicitFocusOrder="0" pos="0 270 240 20" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" kerning="0" bold="0" italic="0" justification="33"/>
  <TEXTEDITOR name="textEditorString" id="724fec5cca6df686" memberName="informationTextEditor"
              virtualName="" explicitFocusOrder="0" pos="0 50 240 220" bkgcol="ff353535"
              outlinecol="ff353535" initialText="" multiline="1" retKeyStartsLine="1"
              readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
