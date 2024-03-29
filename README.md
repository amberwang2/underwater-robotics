# underwater-robotics
An underwater robot design for E96A Underwater Robotics.

<p align="center">
  <img src="https://github.com/massiveg00se/underwater-robotics/blob/main/Media/bot2.jpg" width="60%">
</p>

## Design Overview
The chassis consists of 2 water jetted hexagonal aluminum plates connected by 6 PVC pipes. The robot is powered by 4 bilge pump motors, which are attached using shrouds and mounts that attach to the PVC. Mounted on top of the robot is a spring-powered torpedo launcher system controlled by a servo. The chassis also includes a camera mount and an e-bay for potted wire connections from on-board components to the tether. All parts of the bot, apart from PVC pipes and aluminum plates, are designed to be either 3D printed or laser-cut out of acrylic.

On the electronics side, the controller is made up of two joysticks, an Arduino Mega, and two H-bridges to control power supply to the motors. Data from the joysticks is input to the Arduino, which converts it to the appropriate motor power and direction for each motor wired to the H-bridges. A joystick button is also wired to activate the servo controlling the torpedo launcher system.

### Flaws and additional notes
- While the aluminum plates provided stability against rolling, they also weighed it down. We were not able to make our bot neutrally buoyant and struggled to bring it back up with the motors alone. Using acrylic plates instead and adding more motors might solve this issue.
- Motor placement did not allow for going diagonally up or down since the same motors were used for left-right and up-down motion
- Moving left and right caused the bot to tilt and may have been caused by balance issues between motors or manufacturing flaws

<p align="center">
  <img src="https://github.com/massiveg00se/underwater-robotics/blob/main/Media/bot.jpg" width="80%">
</p>
<p align="center">
  <img src="https://github.com/massiveg00se/underwater-robotics/blob/main/Media/torpedolauncher.jpg" width="80%">
</p>
<p align="center">
  <img src="https://github.com/massiveg00se/underwater-robotics/blob/main/Media/ebay.jpg" width="80%">
</p>
<p align="center">
  <img src="https://github.com/massiveg00se/underwater-robotics/blob/main/Media/controller.jpg" width="40%">
&nbsp; &nbsp;
  <img src="https://github.com/massiveg00se/underwater-robotics/blob/main/Media/controller2.jpg" width="40%">
</p>
<p align="center">
  <img src="https://github.com/massiveg00se/underwater-robotics/blob/main/Media/debugging.jpg" width="80%">
</p>
<p align="center">
  <img src="https://github.com/massiveg00se/underwater-robotics/blob/main/Media/schematic.png" width="80%">
</p>
