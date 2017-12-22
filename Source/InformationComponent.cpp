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

    addAndMakeVisible (informationTextEditor = new TextEditor ("informationTextEditor"));
    informationTextEditor->setMultiLine (true);
    informationTextEditor->setReturnKeyStartsNewLine (true);
    informationTextEditor->setReadOnly (true);
    informationTextEditor->setScrollbarsShown (true);
    informationTextEditor->setCaretVisible (false);
    informationTextEditor->setPopupMenuEnabled (true);
    informationTextEditor->setColour (TextEditor::backgroundColourId, Colour (0xff353535));
    informationTextEditor->setColour (TextEditor::outlineColourId, Colour (0xff353535));
    informationTextEditor->setText (String());

    addAndMakeVisible (facebookButton = new TextButton ("facebookButton"));
    facebookButton->setButtonText (TRANS("Facebook"));
    facebookButton->addListener (this);
    facebookButton->setColour (TextButton::buttonColourId, Colour (0xffadaaaa));
    facebookButton->setColour (TextButton::buttonOnColourId, Colour (0xffadaaaa));
    facebookButton->setColour (TextButton::textColourOffId, Colours::black);

    addAndMakeVisible (emailMeButton = new TextButton ("emailMeButton"));
    emailMeButton->setButtonText (TRANS("Email Me"));
    emailMeButton->addListener (this);
    emailMeButton->setColour (TextButton::buttonColourId, Colour (0xffadaaaa));
    emailMeButton->setColour (TextButton::buttonOnColourId, Colour (0xffadaaaa));
    emailMeButton->setColour (TextButton::textColourOffId, Colours::black);

    addAndMakeVisible (theCodeButton = new TextButton ("theCodeButton"));
    theCodeButton->setButtonText (TRANS("The Code"));
    theCodeButton->addListener (this);
    theCodeButton->setColour (TextButton::buttonColourId, Colour (0xffadaaaa));
    theCodeButton->setColour (TextButton::buttonOnColourId, Colour (0xffadaaaa));
    theCodeButton->setColour (TextButton::textColourOffId, Colours::black);

    addAndMakeVisible (donateButton = new TextButton ("donateButton"));
    donateButton->setButtonText (TRANS("Donate"));
    donateButton->addListener (this);
    donateButton->setColour (TextButton::buttonColourId, Colour (0xffadaaaa));
    donateButton->setColour (TextButton::buttonOnColourId, Colour (0xffadaaaa));
    donateButton->setColour (TextButton::textColourOffId, Colours::black);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (240, 376);


    //[Constructor] You can add your own custom stuff here..

    // Set highlight to transparent so that highlighting of text isn't viewable
    informationTextEditor->setColour(TextEditor::highlightColourId, Colours::transparentWhite);
    informationTextEditor->setPopupMenuEnabled(false);
    informationTextEditor->setFont(16.5);

    // Set text editor scrollbar color to color of text in TextEditor
    textEditorScrollColor.setColour(ScrollBar::thumbColourId,
                                    informationTextEditor->findColour(informationTextEditor->textColourId));
    informationTextEditor->setLookAndFeel(&textEditorScrollColor);

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
    facebookButton = nullptr;
    emailMeButton = nullptr;
    theCodeButton = nullptr;
    donateButton = nullptr;


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

    // Add dividing line below product name
    g.setColour (Colours::white);
    g.setOpacity (0.25);
    int y = 55, distanceFromEdge = 17, thickness = 1;
    g.drawLine (distanceFromEdge, y, getWidth() - distanceFromEdge, y, thickness);

    //[/UserPaint]
}

void InformationComponent::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    informationLabel->setBounds (0, 0, 240, 50);
    versionNumberLabelOutput->setBounds (0, 356, 240, 20);
    informationTextEditor->setBounds (0, 56, 240, 220);
    facebookButton->setBounds (0, 276, 240, 20);
    emailMeButton->setBounds (0, 296, 240, 20);
    theCodeButton->setBounds (0, 316, 240, 20);
    donateButton->setBounds (0, 336, 240, 20);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void InformationComponent::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == facebookButton)
    {
        //[UserButtonCode_facebookButton] -- add your button handler code here..
        
        launchURL ("https://www.facebook.com/TheLyonsDenSoftware/");
        
        //[/UserButtonCode_facebookButton]
    }
    else if (buttonThatWasClicked == emailMeButton)
    {
        //[UserButtonCode_emailMeButton] -- add your button handler code here..
        
        launchURL ("JosephTLyons@gmail.com");
        
        //[/UserButtonCode_emailMeButton]
    }
    else if (buttonThatWasClicked == theCodeButton)
    {
        //[UserButtonCode_theCodeButton] -- add your button handler code here..
        
        launchURL ("https://github.com/JosephTLyons/GUI-Delay-Time-Calculator");
        
        //[/UserButtonCode_theCodeButton]
    }
    else if (buttonThatWasClicked == donateButton)
    {
        //[UserButtonCode_donateButton] -- add your button handler code here..
        
        launchURL ("https://www.paypal.me/JosephTimothyLyons/1");
        
        //[/UserButtonCode_donateButton]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...

void InformationComponent::launchURL (const char *hyperLink)
{
    URL uRL (hyperLink);
    uRL.launchInDefaultBrowser();
}

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
                 fixedSize="1" initialWidth="240" initialHeight="376">
  <BACKGROUND backgroundColour="ff353535"/>
  <LABEL name="informationLabel" id="951f8323b93b29f2" memberName="informationLabel"
         virtualName="" explicitFocusOrder="0" pos="0 0 240 50" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="Information" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="47.399999999999998579" kerning="0.042999999999999996558"
         bold="0" italic="0" justification="36"/>
  <LABEL name="versionNumberLabel" id="30f8922fa9ce43fc" memberName="versionNumberLabelOutput"
         virtualName="" explicitFocusOrder="0" pos="0 356 240 20" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" kerning="0" bold="0" italic="0" justification="33"/>
  <TEXTEDITOR name="informationTextEditor" id="724fec5cca6df686" memberName="informationTextEditor"
              virtualName="" explicitFocusOrder="0" pos="0 56 240 220" bkgcol="ff353535"
              outlinecol="ff353535" initialText="" multiline="1" retKeyStartsLine="1"
              readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTBUTTON name="facebookButton" id="6ac572ffc02e0967" memberName="facebookButton"
              virtualName="" explicitFocusOrder="0" pos="0 276 240 20" bgColOff="ffadaaaa"
              bgColOn="ffadaaaa" textCol="ff000000" buttonText="Facebook" connectedEdges="0"
              needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="emailMeButton" id="10fd8fe4350617b3" memberName="emailMeButton"
              virtualName="" explicitFocusOrder="0" pos="0 296 240 20" bgColOff="ffadaaaa"
              bgColOn="ffadaaaa" textCol="ff000000" buttonText="Email Me" connectedEdges="0"
              needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="theCodeButton" id="3278fdaf35ce768" memberName="theCodeButton"
              virtualName="" explicitFocusOrder="0" pos="0 316 240 20" bgColOff="ffadaaaa"
              bgColOn="ffadaaaa" textCol="ff000000" buttonText="The Code" connectedEdges="0"
              needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="donateButton" id="dcebaa8490729ac8" memberName="donateButton"
              virtualName="" explicitFocusOrder="0" pos="0 336 240 20" bgColOff="ffadaaaa"
              bgColOn="ffadaaaa" textCol="ff000000" buttonText="Donate" connectedEdges="0"
              needsCallback="1" radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
