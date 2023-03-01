using namespace vex;

extern brain Brain;

// VEXcode devices
extern motor Topdriveright;
extern motor Topdrivemotorleft;
extern motor drivebackright;
extern motor drivebackleft;
extern motor drivefrontright;
extern motor drivefrontleft;
extern motor Intake;
extern motor Cata;
extern controller Controller1;
extern limit LimitSwitch;
extern digital_out Pneumatic;
extern inertial Inertialsensor;
extern digital_out Pneumatic2;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );