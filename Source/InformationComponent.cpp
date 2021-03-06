/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 6.0.1

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2020 - Raw Material Software Limited.

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

    informationLabel.reset (new juce::Label ("informationLabel",
                                             TRANS("Information")));
    addAndMakeVisible (informationLabel.get());
    informationLabel->setFont (juce::Font ("Arial", 47.40f, juce::Font::plain).withTypefaceStyle ("Regular").withExtraKerningFactor (0.043f));
    informationLabel->setJustificationType (juce::Justification::centred);
    informationLabel->setEditable (false, false, false);
    informationLabel->setColour (juce::Label::textColourId, juce::Colour (0xffadaaaa));
    informationLabel->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    informationLabel->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    informationLabel->setBounds (0, 0, 240, 50);

    versionNumberLabelOutput.reset (new juce::Label ("versionNumberLabel",
                                                     juce::String()));
    addAndMakeVisible (versionNumberLabelOutput.get());
    versionNumberLabelOutput->setFont (juce::Font (15.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
    versionNumberLabelOutput->setJustificationType (juce::Justification::centred);
    versionNumberLabelOutput->setEditable (false, false, false);
    versionNumberLabelOutput->setColour (juce::Label::textColourId, juce::Colour (0xffadaaaa));
    versionNumberLabelOutput->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    versionNumberLabelOutput->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    versionNumberLabelOutput->setBounds (0, 341, 240, 40);

    informationTextEditor.reset (new juce::TextEditor ("informationTextEditor"));
    addAndMakeVisible (informationTextEditor.get());
    informationTextEditor->setMultiLine (true);
    informationTextEditor->setReturnKeyStartsNewLine (true);
    informationTextEditor->setReadOnly (true);
    informationTextEditor->setScrollbarsShown (true);
    informationTextEditor->setCaretVisible (false);
    informationTextEditor->setPopupMenuEnabled (true);
    informationTextEditor->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0xff353535));
    informationTextEditor->setColour (juce::TextEditor::outlineColourId, juce::Colour (0xff353535));
    informationTextEditor->setText (juce::String());

    informationTextEditor->setBounds (0, 121, 240, 220);

    facebookButton.reset (new juce::TextButton ("facebookButton"));
    addAndMakeVisible (facebookButton.get());
    facebookButton->setButtonText (TRANS("Facebook"));
    facebookButton->addListener (this);
    facebookButton->setColour (juce::TextButton::buttonColourId, juce::Colour (0xffadaaaa));
    facebookButton->setColour (juce::TextButton::buttonOnColourId, juce::Colour (0xffadaaaa));
    facebookButton->setColour (juce::TextButton::textColourOffId, juce::Colours::black);

    facebookButton->setBounds (0, 61, 120, 30);

    emailMeButton.reset (new juce::TextButton ("emailMeButton"));
    addAndMakeVisible (emailMeButton.get());
    emailMeButton->setButtonText (TRANS("Email Me"));
    emailMeButton->addListener (this);
    emailMeButton->setColour (juce::TextButton::buttonColourId, juce::Colour (0xffadaaaa));
    emailMeButton->setColour (juce::TextButton::buttonOnColourId, juce::Colour (0xffadaaaa));
    emailMeButton->setColour (juce::TextButton::textColourOffId, juce::Colours::black);

    emailMeButton->setBounds (120, 61, 120, 30);

    theCodeButton.reset (new juce::TextButton ("theCodeButton"));
    addAndMakeVisible (theCodeButton.get());
    theCodeButton->setButtonText (TRANS("The Code"));
    theCodeButton->addListener (this);
    theCodeButton->setColour (juce::TextButton::buttonColourId, juce::Colour (0xffadaaaa));
    theCodeButton->setColour (juce::TextButton::buttonOnColourId, juce::Colour (0xffadaaaa));
    theCodeButton->setColour (juce::TextButton::textColourOffId, juce::Colours::black);

    theCodeButton->setBounds (0, 91, 120, 30);

    donateButton.reset (new juce::TextButton ("donateButton"));
    addAndMakeVisible (donateButton.get());
    donateButton->setButtonText (TRANS("Donate"));
    donateButton->addListener (this);
    donateButton->setColour (juce::TextButton::buttonColourId, juce::Colour (0xffadaaaa));
    donateButton->setColour (juce::TextButton::buttonOnColourId, juce::Colour (0xffadaaaa));
    donateButton->setColour (juce::TextButton::textColourOffId, juce::Colours::black);

    donateButton->setBounds (120, 91, 120, 30);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (240, 381);


    //[Constructor] You can add your own custom stuff here..

    // Set highlight to transparent so that highlighting of text isn't viewable
    informationTextEditor->setColour(TextEditor::highlightColourId, Colours::transparentWhite);
    informationTextEditor->setPopupMenuEnabled (false);
    informationTextEditor->setFont (16.5);

    // Set text editor scrollbar color to color of text in TextEditor
    textEditorScrollColor.setColour(ScrollBar::thumbColourId,
                                    informationTextEditor->findColour(informationTextEditor->textColourId));
    informationTextEditor->setLookAndFeel(&textEditorScrollColor);

    informationTextEditorString = "Key Commands:\n";

    // Add information to text string
    informationTextEditorString += "c: Coarse Resolution\n";
    informationTextEditorString += "s: Standard Resolution\n";
    informationTextEditorString += "f: Fine Resolution\n\n";

    informationTextEditorString += "1: (1/2)x\n";
    informationTextEditorString += "2: 2x\n";
    informationTextEditorString += "t: Tap Tempo\n";
    informationTextEditorString += "r: Reset Tap Tempo\n\n";

    informationTextEditorString += "m: ms\n";
    informationTextEditorString += "h: Hz\n\n";

    informationTextEditorString += "Spacebar: Round Tempo\n";
    informationTextEditorString += "Right Arrow: +5 BPM\n";
    informationTextEditorString += "Left Arrow: -5 BPM\n";
    informationTextEditorString += "Up Arrow: +1 BPM\n";
    informationTextEditorString += "Down Arrow: -1 BPM";

    // Add string to textEditor
    informationTextEditor->setText(informationTextEditorString);

    // Set version number editor to current version number
    versionNumberString = "Lyons' Den Software\n";
    versionNumberString += "Delay Time Calculator Version: ";
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
void InformationComponent::paint (juce::Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (juce::Colour (0xff353535));

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

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void InformationComponent::buttonClicked (juce::Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == facebookButton.get())
    {
        //[UserButtonCode_facebookButton] -- add your button handler code here..

        launchURL ("https://www.facebook.com/TheLyonsDenSoftware/");

        //[/UserButtonCode_facebookButton]
    }
    else if (buttonThatWasClicked == emailMeButton.get())
    {
        //[UserButtonCode_emailMeButton] -- add your button handler code here..

        launchURL ("JosephTLyons@gmail.com");

        //[/UserButtonCode_emailMeButton]
    }
    else if (buttonThatWasClicked == theCodeButton.get())
    {
        //[UserButtonCode_theCodeButton] -- add your button handler code here..

        launchURL ("https://github.com/JosephTLyons/GUI-Delay-Time-Calculator");

        //[/UserButtonCode_theCodeButton]
    }
    else if (buttonThatWasClicked == donateButton.get())
    {
        //[UserButtonCode_donateButton] -- add your button handler code here..

        launchURL ("https://www.paypal.me/JosephTimothyLyons/1");

        //[/UserButtonCode_donateButton]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...

void InformationComponent::launchURL (const String &hyperlink)
{
    URL url (hyperlink);
    url.launchInDefaultBrowser();
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
                 fixedSize="1" initialWidth="240" initialHeight="381">
  <BACKGROUND backgroundColour="ff353535"/>
  <LABEL name="informationLabel" id="951f8323b93b29f2" memberName="informationLabel"
         virtualName="" explicitFocusOrder="0" pos="0 0 240 50" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="Information" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="47.4" kerning="0.043" bold="0" italic="0" justification="36"/>
  <LABEL name="versionNumberLabel" id="30f8922fa9ce43fc" memberName="versionNumberLabelOutput"
         virtualName="" explicitFocusOrder="0" pos="0 341 240 40" textCol="ffadaaaa"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <TEXTEDITOR name="informationTextEditor" id="724fec5cca6df686" memberName="informationTextEditor"
              virtualName="" explicitFocusOrder="0" pos="0 121 240 220" bkgcol="ff353535"
              outlinecol="ff353535" initialText="" multiline="1" retKeyStartsLine="1"
              readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTBUTTON name="facebookButton" id="6ac572ffc02e0967" memberName="facebookButton"
              virtualName="" explicitFocusOrder="0" pos="0 61 120 30" bgColOff="ffadaaaa"
              bgColOn="ffadaaaa" textCol="ff000000" buttonText="Facebook" connectedEdges="0"
              needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="emailMeButton" id="10fd8fe4350617b3" memberName="emailMeButton"
              virtualName="" explicitFocusOrder="0" pos="120 61 120 30" bgColOff="ffadaaaa"
              bgColOn="ffadaaaa" textCol="ff000000" buttonText="Email Me" connectedEdges="0"
              needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="theCodeButton" id="3278fdaf35ce768" memberName="theCodeButton"
              virtualName="" explicitFocusOrder="0" pos="0 91 120 30" bgColOff="ffadaaaa"
              bgColOn="ffadaaaa" textCol="ff000000" buttonText="The Code" connectedEdges="0"
              needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="donateButton" id="dcebaa8490729ac8" memberName="donateButton"
              virtualName="" explicitFocusOrder="0" pos="120 91 120 30" bgColOff="ffadaaaa"
              bgColOn="ffadaaaa" textCol="ff000000" buttonText="Donate" connectedEdges="0"
              needsCallback="1" radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]

