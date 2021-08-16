# Leap-Motion-Controlled-TurnTable

REQUIREMENTS:<br />

 	LeapDevelopmentKit 3.2.1 (download link: https://developer-archive.leapmotion.com/get-started?id=v3-developer-beta&platform=windows&version=3.2.1.45911)<br />

	Processing 3 (download link: https://processing.org/download/)<br />

___________________________________________________________________________________________________________________________________________________________<br />

STEPS:<br />

	Download requirements if necessary<br />
												                                                                  _<br />
	After installing LeapDevelopmentKit 3.2.1, unzip the folder to the desired location	     |- (source: \LeapDeveloperKit_3.2.1+45911_win\README.txt)<br />
	Run the .exe file and copy the LeapSDK folder to a suitable location on your computer 	_|<br />

	Connect the Leap Motion controller<br />

	Search for Leap Motion Visualizer to check if the Leap Motion controller is connected properly<br />

	Refer 'TurnTable - Wiring diagram' to make the connections if necessary<br />

	Connect the Arduino Uno to the PC<br />

	Open stepper_motor.ino file and get the port number (COMx), upload file if necessary<br />

	Open TurnTable.pde and replace the COM number on line 11 with the new one<br />

	Install 'Leap Motion for Processing' library from Sketch -> Import library -> Add library if required for processing<br />

	Click the 'RUN' icon, a white backgroud pop-up should appear<br />

	Placing your right hand over the controller will result in the motor spinning clockwise<br />

	Placing your left hand over the controller will result in the motor spinning anti-clockwise<br />

___________________________________________________________________________________________________________________________________________________________<br />

NOTES: <br />
	The controller is not 100% accurate in detecting if its your right or left hand and might spin in the opposite direction for second and then fix itself<br />
									                                                 _<br />
	The stepper motor driver used is a 'a4988 stepper motor driver'	  |
	The capacitor used is 100 microFarad 				                      |- (reference: https://www.makerguides.com/a4988-stepper-motor-driver-arduino-tutorial/)<br />
	The Power Supply is 12v						                               _|<br />
	
	Files 'processing code v1.txt' and 'arduino code v1.txt' together makes the motor turn one revolution for every 'swipe gesture'. Right swipe will make the motor spin clockwise and vice-versa (reference: https://developer-archive.leapmotion.com/documentation/v2/java/devguide/Leap_Gestures.html)<br />
	The controller takes images upto 300 frames per second and one swipe might be recorded as 2-4 depending on the speed of the swipe, causing it to revolve multiple times.<br />
  
___________________________________________________________________________________________________________________________________________________________<br />
	
File Tree:<br />

Leap-Motion-Controlled-TurnTable<br />
	|	LeapDevelopmentKit_3.2.1+45911_win<br />
			    |	Leap_motion_orion_setup_win_3.2.1.exe<br />
			    |	README.txt<br />
	|	LeapSDK<br />
	|	processing-3.5.4<br />
	|	TurnTable.pde<br />
	|	stepper_motor<br />
			    |	stepper_motor.ino<br />
	|	README.txt<br />
	|	TurnTable - Wiring diagram.jpg<br />
	|	processing code v1.txt<br />
	|	arduino code v1.txt<br />
