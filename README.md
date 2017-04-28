# GUI-Delay-Time-Calculator
A simple application that calculates delay and reverb pre-delay times based on the tempo the user inputs.

![alt tag](https://github.com/JosephTLyons/GUI-Delay-Time-Calculator/blob/master/Delay%20Time%20Calculator%20GUI.png)

Features:
* Delay times calculated for: 1, 1/2, 1/4, 1/8, 1/16, 1/32, 1/64, and 1/128.
* A slider for user input of tempo, from 1 - 1000 bpm in increments of 0.1.  Also, the user can input their tempo by double clicking the text box to the left of the slider.  Holding down command will give finer control over the slider.
* 1/2x and 2x buttons to quickly double or half tempo.  This may be usefuly if you need to get faster or slower times than the ones available on the screen.
* Tap to set tempo with Tap (T) and reset (R) buttons.  Some setups will only measure the time between two hits, some will average a few hits together, however, my algorithm averages every single hit.  I find this to be more accurate as you can click 10-15 times to really hone in on a specific tempo.  Flucuations won't matter as much the more taps you put in.  The only downfall to this is is that once you start tapping, the algoritm never stops measuring time.  So you must manually reset the system with the R button each time you want to set a new tempo or if you stop tapping for any period of time and come back to it.  For convenience, the R button turns white to let you know you need to reset the interal system if you want to calculate a new tempo or if you have stopped tapping for any amount time and need to come back to it. Note: The first time you click, the tempo slider will move to 1.  This is not a bug, this is the nature of calculating the tempo based on taps.  Two hits are needed to get the first calculation.  So I set the slider to 1 during the first hit then, move it to the correct tempo after.

Changelog:

April XX, 2017 - V 1.3:
1.  Upgraded to JUCE 5.  Source code is now closed and a "Made with JUCE" splash screen pops up due to my licencing choice.
2.  Small aesthetic changes due to the new LookAndFeelV4 class of JUCE 5.
3.  Version numbers now automatically reported at bottom of app.

April 22, 2017 - V 1.2:
1. Added tap tempo feature.  Tap T in time to set tempo, click R to reset internal values so you can use T to calculate a new tempo.  The R button turns white after the first click of the tap button, to let the user know that if they want to calculate a different speed, to click the reset button.
3. Added a cheap app icon, will probably make a better one later, this is more or less a placeholder
3. Changed color of tempo values on slider to white so that all values that change have the same color (white).  All input and output values are now highlighted and easy to spot.
4. Unified left hand value column by using all fractions instead of words.

April 22, 2017 - V 1.1.1:
1. Changed deployment settings - now allows users all the way back on OS 10.6

April 20, 2017 - V 1.1:
1. Displays all values at once
2. Changed skewing of slider so that most frequent tempos are in the first half of the slider (1 - 250ish).  This gives the user a bit more accuracy when using these values.
3. Unified theme of GUI a bit by changing color of 1/2x and 2x buttons to match other colors,
4. Right Click to access velocity sensitve scrolling on slider
5. Repositioned all controls to be in close proximity and left room for tap to set delay button
6. App is now code signed (I'm officially an Apple Developer)

April 15, 2017 - V 1.0 intial release:

Features still to add:

* Change to whole BPM values and use modifier buttons to access 1/10th notes (or any other method to access these values
* Add T and R button to keys that can be used to tap and reset BPM
* Make items along bottom of GUI all same font, font size, and spacing
