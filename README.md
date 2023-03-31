# Picasso - Wall Art Robot

This is a project which aims at developing a smart wall art robot that can take your picture to the wall. You can customise your wall in any way.

Digital            |  Plot on paper
:-------------------------:|:-------------------------:
<img src="Images/barong%20digital.jpg" width=500px>  |  <img src="Images/barong%20drawn.jpg" width=500px>


## Maintainers
1.Adithya Krishna   https://github.com/Adithya2000-glitch   
2.Gopikrishnan TC  https://github.com/gktc  
3.Steena Xavier  https://github.com/SteenaXavier  
4.Vipin E https://github.com/vipinedayour
## Link to project walkthrough
https://drive.google.com/file/d/1reYak2XWaveg310bacjXTmTI0z7PpHS1/view?usp=sharing
## How it works?

Image-> Bitmap -> Gcode
<img src="Images/workflow.png" >

## Technologies and Libraries used
Grbl  v1.1h https://github.com/grbl/grbl

DrawingBot V3 https://github.com/SonarSonic/DrawingBotV3

Inkscape https://inkscape.org/

Arduino IDE https://www.arduino.cc/en/software

UGS https://winder.github.io/ugs_website/

Open Build Control https://software.openbuilds.com/

## How to configure
1.Clone this repo to your local machine

```
git clone https://github.com/vipinedayour/Picasso-Wall-Art-Robot.git
```
2.Install Arduino IDE

https://support.arduino.cc/hc/en-us/articles/360019833020-Download-and-install-Arduino-IDE


3.Open Picasso-Wall-Art-Robot folder and look for grbl folder.

4.Inside grbl folder you will find examples. Open the grblUpload.ino file using Arduino IDE.

5.Connect your Arduino to your machine and upload the code.

## How to run
**Block Diagram**
<img src="Images/blockdiagram.png">

1.Connect the hardware as shown in block diagram.

2.Grbl firmware should be installed inside the arduino .

3.Process the image and generate gcode using DrawingBot V3 or Inkscape.

4.Use Inkscape or Open build control to send the gcode to the arduino.


## Improvements Required

1.Speed of plotting has to be impoved.

2.Pen holder design has to be modified for better precision.

3.Laser Engraving to be implemented.

## Follow us on
https://www.instagram.com/picasso_gect2023/
