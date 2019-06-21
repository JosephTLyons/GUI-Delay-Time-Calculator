# Changelog:

## XXX - V 1.8.0
1. Ability to calculate tempo directly from entering values into the ms and Hz fields

## June 17, 2019 - V 1.7.1
1. Fixed a bug that was causing tap tempo to round the tempo to whole values when using resolution settings other than "coarse."

## October  28, 2018 - V 1.7.0
1. For Mac users, app works in the new dark mode in macOS Mojave
2. Fixed a bug where the ms or hz values were not being updated when switching from finer resolution modes to coarser resolution modes
3. Fixed a bug where the BPM output field could show characters if the user entered them twice consecutively.  The BPM output field should always show numbers only.
4. Tap Tempo now automatically resets based on a timer that is set to a length of time proportional to the tap tempo timing.  The timer uses the whole note normal millisecond value after the last tap on the button or the key 'T'.  This means that the duration before automatic reset is 4 times the duration between taps.  The GUI no longer has a reset button because of this, but the 'R' button still works in case a user doesn't want to wait the full duration of the automatic reset.  Another thing to note is that automatic reset doesn't occur unless you have tapped the button twice, as there isn't an interval to measure after only 1 tap.  If you need to reset manually, again, use the 'R' button.
5. Moved information-related buttons to information window: Facebook, Email Me, The Code, and Donate buttons; this helped to reduce the GUI clutter
6. Removed the information button entirely to reduce clutter - Information window is now created by clicking on the main Delay Time Calculator label
7. Other minor additions to the information window
8. Changed "1/2x" to "(1/2)x", as it was incorrect before, in both the button itself and the information window
9. Information window now always opens in the center of Delay Time Calculator window
10. Code clean up: now using one class to manage both milliseconds and hertz values, this allows me to delete a TON of code and slightly reduce the memory needed for the app.  Renamed all the private data members in the (now) Values class as well.  Removed handfuls of unnecessary lines of code in the TapTempo class; it is very concise now.

## December 21, 2017 - V 1.6.0
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

## July 26, 2017 - V 1.5.0
1. PC Build
2. Changed behavior of where information window is loaded.  It is now loaded in the middle of the screen to resolve some issues on PC side.
3. Windows can no longer be maxmized.  The GUI isn't resizable anyway, so the ability to go full screen has been removed.

## May 12, 2017 - V 1.4.0:
1. FIXED WHOLE NORMAL VALUES - This value was incorrect as I was accidentally grabbing the value from half dotted!
2. Added option to display values in Hertz - to set LFOs on your synths
3. Added key support for changing from ms to Hz (using keys 'M' and 'H' respectively)
4. Made information section a text editor instead of a label so I can add more information to this and take advantage of scrolling, vesus having to make that window taller each line I add.
5. Switched label font to Arial for the time being since I can't seem to figure how to embed fonts in JUCE currently.  I wanted to get this update out to fix the current bugs, so I'm just using a 'safe' font that should be on everyone's system.  My assumption is that all Mac systems have Arial by default, so the font should show up correctly.

## May 09, 2017 - V 1.3.0:
1. Keys: 1 = 1/2x, 2 = 2x, T = Tap Tempo, R = Reset Tap Tempo, Spacebar = Round Value, Up Arrow = +1, Down Arrow = -1, Right Arrow = +5, Left Arrow = -5;
2. Added a button to invoke a new window to display all the key information, such as which keys trigger which actions and the app version number.
3. Changed all links to buttons on the bottom and added a link to my software Facebook page
4. GUI buttons moved and their actions made more clear by their text
5. Changed all output fields from text editors to text labels.  I did this because values inside text editors can be highlighted and labels cannot be.  The highlighting looks cheesy and unprofessional, so I make them all labels to keep from having the option to highlight numbers in the output fields.
6. Small aesthetic changes due to the new LookAndFeelV4 class of JUCE 5.

## April 22, 2017 - V 1.2.0:
1. Added tap tempo feature.  Tap T in time to set tempo, click R to reset internal values so you can use T to calculate a new tempo.  The R button turns white after the first click of the tap button, to let the user know that if they want to calculate a different speed, to click the reset button.
3. Added a cheap app icon, will probably make a better one later, this is more or less a placeholder
3. Changed color of tempo values on slider to white so that all values that change have the same color (white).  All input and output values are now highlighted and easy to spot.
4. Unified left hand value column by using all fractions instead of words.

## April 22, 2017 - V 1.1.1:
1. Changed deployment settings - now allows users all the way back on OS 10.6

## April 20, 2017 - V 1.1.0:
1. Displays all values at once
2. Changed skewing of slider so that most frequent tempos are in the first half of the slider (1 - 250ish).  This gives the user a bit more accuracy when using these values.
3. Unified theme of GUI a bit by changing color of 1/2x and 2x buttons to match other colors,
4. Right Click to access velocity sensitve scrolling on slider
5. Repositioned all controls to be in close proximity and left room for tap to set delay button
6. App is now code signed (I'm officially an Apple Developer)

## April 15, 2017 - V 1.0.0 intial release:
