# Leap-Motion-Controlled-TurnTable

REQUIREMENTS:<br />

 	LeapDevelopmentKit 3.2.1 (download link: https://developer-archive.leapmotion.com/get-started?id=v3-developer-beta&platform=windows&version=3.2.1.45911)

	Processing 3 (download link: https://processing.org/download/)

________________________________________________________________________________________________________________________________________<br />

STEPS:<br />

	Download requirements if necessary
												_
	After installing LeapDevelopmentKit 3.2.1, unzip the folder to the desired location	 |- (source: \LeapDeveloperKit_3.2.1+45911_win\README.txt)
	Run the .exe file and copy the LeapSDK folder to a suitable location on your computer 	_|

	Connect the Leap Motion controller

	Search for Leap Motion Visualizer to check if the Leap Motion controller is connected properly

	Refer 'TurnTable - Wiring diagram' to make the connections if necessary

	Connect the Arduino Uno to the PC

	Open stepper_motor.ino file and get the port number (COMx), upload file if necessary

	Open TurnTable.pde and replace the COM number on line 11 with the new one

	Install 'Leap Motion for Processing' library from Sketch -> Import library -> Add library if required for processing

	Click the 'RUN' icon, a white backgroud pop-up should appear

	Placing your right hand over the controller will result in the motor spinning clockwise

	Placing your left hand over the controller will result in the motor spinning anti-clockwise

________________________________________________________________________________________________________________________________________<br />

NOTES: <br />
	The controller is not 100% accurate in detecting if its your right or left hand and might spin in the opposite direction for second and then fix itself<br />
									
	The stepper motor driver used is a 'a4988 stepper motor driver'
	The capacitor used is 100 microFarad 				  
	The Power Supply is 12v	&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; ]- (reference: https://www.makerguides.com/a4988-stepper-motor-driver-arduino-tutorial/)			        
	
	Files 'processing code v1.txt' and 'arduino code v1.txt' together makes the motor turn one revolution for every 'swipe gesture'. Right swipe will make the motor spin clockwise and vice-versa (reference: https://developer-archive.leapmotion.com/documentation/v2/java/devguide/Leap_Gestures.html)
	The controller takes images upto 300 frames per second and one swipe might be recorded as 2-4 depending on the speed of the swipe, causing it to revolve multiple times.
  
________________________________________________________________________________________________________________________________________<br />
	
File Tree:<br />

Leap-Motion-Controlled-TurnTable<br />
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;	|	LeapDevelopmentKit_3.2.1+45911_win<br />
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;			    |	Leap_motion_orion_setup_win_3.2.1.exe<br />
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;			    |	README.txt<br />
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;	|	LeapSDK<br />
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;	|	processing-3.5.4<br />
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;	|	TurnTable.pde<br />
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;	|	stepper_motor<br />
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;			    |	stepper_motor.ino<br />
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;	|	README.txt<br />
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;	|	TurnTable - Wiring diagram.jpg<br />
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;	|	processing code v1.txt<br />
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;	|	arduino code v1.txt<br />
