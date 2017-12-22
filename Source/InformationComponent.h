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

    void launchURL (const char *hyperLink);

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
    ScopedPointer<Label> informationLabel;
    ScopedPointer<Label> versionNumberLabelOutput;
    ScopedPointer<TextEditor> informationTextEditor;
    ScopedPointer<TextButton> facebookButton;
    ScopedPointer<TextButton> emailMeButton;
    ScopedPointer<TextButton> theCodeButton;
    ScopedPointer<TextButton> donateButton;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (InformationComponent)
};

//[EndFile] You can add extra defines here...
//[/EndFile]
