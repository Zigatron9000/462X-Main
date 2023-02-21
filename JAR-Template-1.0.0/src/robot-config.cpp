#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
motor Topdriveright = motor(PORT9, ratio6_1, true);
motor Topdrivemotorleft = motor(PORT19, ratio6_1, false);
motor drivebackright = motor(PORT10, ratio6_1, false);
motor drivebackleft = motor(PORT20, ratio6_1, true);
motor drivefrontright = motor(PORT7, ratio6_1, false);
motor drivefrontleft = motor(PORT6, ratio6_1, true);
motor Intake = motor(PORT18, ratio6_1, false);
motor Cata = motor(PORT8, ratio36_1, true);
controller Controller1 = controller(primary);
limit LimitSwitch = limit(Brain.ThreeWirePort.A);
digital_out Pneumatic = digital_out(Brain.ThreeWirePort.B);
inertial Inertialsensor = inertial(PORT17);

// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}