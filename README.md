# Underwater Robotics
An underwater robot design for E96 Underwater Robotics.
## Design Overview
The chassis consists of 2 water jetted hexagonal aluminum plates connected by 6 PVC pipes. The robot is powered by 4 bilge pump motors, which are attached using shrouds and mounts that attach to the PVC. Mounted on top of the robot is a spring-powered torpedo launcher system controlled by a servo. The chassis also includes a camera mount and an e-bay for potted wire connections from on-board components to the tether. All parts of the bot, apart from PVC pipes and aluminum plates, are designed to be either 3D printed or laser-cut out of acrylic.

On the electronics side, the controller is made up of two joysticks, an Arduino Mega, and two H-bridges to control power supply to the motors. Data from the joysticks is input to the Arduino, which converts it to the appropriate motor power and direction for each motor wired to the H-bridges. A joystick button is also wired to activate the servo controlling the torpedo launcher system.
