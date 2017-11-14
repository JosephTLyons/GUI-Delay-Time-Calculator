# GUI-Delay-Time-Calculator
A simple application that calculates delay and reverb pre-delay times based on the tempo the user inputs.  Alternaively, it can display the values in terms of Hertz, which may be helpful for syncing synthesizer LFOs in time.

![alt tag](https://github.com/JosephTLyons/GUI-Delay-Time-Calculator/blob/master/Delay%20Time%20Calculator%20GUI.png)
-Image is larger than the actual GUI

## Features:

* Delay times calculated for: 1, 1/2, 1/4, 1/8, 1/16, 1/32, 1/64, and 1/128.
* Option to show values in terms of Hertz, which might be useful for setting synth LFOs.
* A slider for user input of tempo, from 1 - 1000 bpm.  The user can also input their tempo by clicking the text box to the left of the slider.  Holding down command will give finer control over the slider.
* Options of using bpm intervals of (X), (0.X), or (0.0X)
* User can choose from whole, tenths, or hundredths resolution, for tempo increments.
* 1/2x and 2x buttons to quickly double or half the current tempo.  This may be useful if you need to get faster or slower times than the ones available on the screen.
* Tap to set tempo with Tap Tempo and Reset Tap Tempo buttons.  Some setups will only measure the time between two hits, some will average a few hits together, however, my algorithm averages every single hit.  I find this to be more accurate as you can click 10-15 times to really hone in on a specific tempo.  Flucuations won't matter as much the more taps you put in.  The only downfall to this is is that once you start tapping, the algoritm never stops measuring time.  So you must manually reset the system with the R button each time you want to set a new tempo or if you stop tapping for any period of time and come back to it.  For convenience, the R button turns white to let you know you need to reset the interal system if you want to calculate a new tempo or if you have stopped tapping for any amount time and need to come back to it. Note: The first time you click, the tempo slider will move to 1.  This is not a bug, this is the nature of calculating the tempo based on taps.  Two hits are needed to get the first calculation.  So I set the slider to 1 during the first hit then, move it to the correct tempo after. Lastly, a tap count is recorded (1.6.0) and displayed directly in the Tap Tempo button text.
* Keys: 1 = 1/2x, 2 = 2x, T = Tap Tempo, R = Reset Tap Tempo, 'M' enables ms, 'H' enables Hz, 'Spacebar = Round Value, Up Arrow = +1, Down Arrow = -1, Right Arrow = +5, Left Arrow = -5, C = Coarse Resolution, S = Standard Resolution, F = Fine Resolution
* An information panel to display the keys that trigger actions and version number

## Bugs to Fix:

* None reported

## Features to add:

* Scaleable UI
* Embed custom font (was using CalistoMT) (remove temporary Arial font setting - which was a cheat) 
* Analyze MusicMath features
* Remove slider and use a text box that can be changed by clicking and dragging?
* Make installer

## Changelog:

### November XX, 2017 - V 1.6.0
1. Reworked GUI to be more symmetrical at top and to have a larger BPM value readout
2. Added tap count to the tap tempo button, for more visual feedback of tap tempo function
3. Added resolution buttons to switch from standard values (0.X) to coarse values (X) to fine values (0.0X)
4. The tap tempo button now registers its click when the mouse is on down click, instead of on upclick, which makes it more accurate.
5. More accurate AppIcon
6. Changed color of scrollbar in information window to be more in line with the theme of the app
7. Added separating line under window names in both main and information windows
8. Small changes to information window
9. Small performance tweaks
10. General code clean up

### July 26, 2017 - V 1.5.0
1. PC Build
2. Changed behavior of where information window is loaded.  It is now loaded in the middle of the screen to resolve some issues on PC side.
3. Windows can no longer be maxmized.  The GUI isn't resizable anyway, so the ability to go full screen has been removed.

### May 12, 2017 - V 1.4.0:
1. FIXED WHOLE NORMAL VALUES - This value was incorrect as I was accidentally grabbing the value from half dotted!
2. Added option to display values in Hertz - to set LFOs on your synths
3. Added key support for changing from ms to Hz (using keys 'M' and 'H' respectively)
4. Made information section a text editor instead of a label so I can add more information to this and take advantage of scrolling, vesus having to make that window taller each line I add.
5. Switched label font to Arial for the time being since I can't seem to figure how to embed fonts in JUCE currently.  I wanted to get this update out to fix the current bugs, so I'm just using a 'safe' font that should be on everyone's system.  My assumption is that all Mac systems have Arial by default, so the font should show up correctly.

### May 09, 2017 - V 1.3.0:
1. Keys: 1 = 1/2x, 2 = 2x, T = Tap Tempo, R = Reset Tap Tempo, Spacebar = Round Value, Up Arrow = +1, Down Arrow = -1, Right Arrow = +5, Left Arrow = -5;
2. Added a button to invoke a new window to display all the key information, such as which keys trigger which actions and the app version number.
3. Changed all links to buttons on the bottom and added a link to my software Facebook page
4. GUI buttons moved and their actions made more clear by their text
5. Changed all output fields from text editors to text labels.  I did this because values inside text editors can be highlighted and labels cannot be.  The highlighting looks cheesy and unprofessional, so I make them all labels to keep from having the option to highlight numbers in the output fields.
6. Small aesthetic changes due to the new LookAndFeelV4 class of JUCE 5.

### April 22, 2017 - V 1.2.0:
1. Added tap tempo feature.  Tap T in time to set tempo, click R to reset internal values so you can use T to calculate a new tempo.  The R button turns white after the first click of the tap button, to let the user know that if they want to calculate a different speed, to click the reset button.
3. Added a cheap app icon, will probably make a better one later, this is more or less a placeholder
3. Changed color of tempo values on slider to white so that all values that change have the same color (white).  All input and output values are now highlighted and easy to spot.
4. Unified left hand value column by using all fractions instead of words.

### April 22, 2017 - V 1.1.1:
1. Changed deployment settings - now allows users all the way back on OS 10.6

### April 20, 2017 - V 1.1.0:
1. Displays all values at once
2. Changed skewing of slider so that most frequent tempos are in the first half of the slider (1 - 250ish).  This gives the user a bit more accuracy when using these values.
3. Unified theme of GUI a bit by changing color of 1/2x and 2x buttons to match other colors,
4. Right Click to access velocity sensitve scrolling on slider
5. Repositioned all controls to be in close proximity and left room for tap to set delay button
6. App is now code signed (I'm officially an Apple Developer)

### April 15, 2017 - V 1.0.0 intial release:
