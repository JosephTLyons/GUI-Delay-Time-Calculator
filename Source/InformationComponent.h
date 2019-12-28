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

#pragma once

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class InformationComponent  : public Component,
                              public Button::Listener
{
public:
    //==============================================================================
    InformationComponent ();
    ~InformationComponent();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.

    void launchURL (const String &hyperlink);

    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;
    void buttonClicked (Button* buttonThatWasClicked) override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.

    String versionNumberString;
    String informationTextEditorString;
    LookAndFeel_V4 textEditorScrollColor;

    //[/UserVariables]

    //==============================================================================
    std::unique_ptr<Label> informationLabel;
    std::unique_ptr<Label> versionNumberLabelOutput;
    std::unique_ptr<TextEditor> informationTextEditor;
    std::unique_ptr<TextButton> facebookButton;
    std::unique_ptr<TextButton> emailMeButton;
    std::unique_ptr<TextButton> theCodeButton;
    std::unique_ptr<TextButton> donateButton;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (InformationComponent)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

