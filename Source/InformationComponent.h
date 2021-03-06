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
                              public juce::Button::Listener
{
public:
    //==============================================================================
    InformationComponent ();
    ~InformationComponent() override;

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.

    void launchURL (const String &hyperlink);

    //[/UserMethods]

    void paint (juce::Graphics& g) override;
    void resized() override;
    void buttonClicked (juce::Button* buttonThatWasClicked) override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.

    String versionNumberString;
    String informationTextEditorString;
    LookAndFeel_V4 textEditorScrollColor;

    //[/UserVariables]

    //==============================================================================
    std::unique_ptr<juce::Label> informationLabel;
    std::unique_ptr<juce::Label> versionNumberLabelOutput;
    std::unique_ptr<juce::TextEditor> informationTextEditor;
    std::unique_ptr<juce::TextButton> facebookButton;
    std::unique_ptr<juce::TextButton> emailMeButton;
    std::unique_ptr<juce::TextButton> theCodeButton;
    std::unique_ptr<juce::TextButton> donateButton;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (InformationComponent)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

