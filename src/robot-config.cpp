#include "robot-config.h"

////////////// DO NOT REMOVE //////////////

// Defines the Brain and Controller
brain Brain;
controller Controller1;

///////////////////////////////////////////

//////////// Intake Motors ////////////

motor In1 = motor(PORT1, ratio6_1, true);

motor In2 = motor(PORT4, ratio6_1, true);
motor In3 = motor(PORT5, ratio6_1, true);

///////////////////////////////////////////

//////////// Drive Train Motors ////////////

motor R1 = motor(PORT20, ratio6_1, false);
motor R2 = motor(PORT19, ratio6_1, false);
motor R3 = motor(PORT18, ratio6_1, false);
motor R4 = motor(PORT17, ratio6_1, true);
motor L1 = motor(PORT10, ratio6_1, true);
motor L2 = motor(PORT9, ratio6_1, true);
motor L3 = motor(PORT8, ratio6_1, true);
motor L4 = motor(PORT7, ratio6_1, false);

///////////////////////////////////////////

//////////// Odometry Sensors ////////////
//TODO: CHANGE THE NAMES OF THESE
rotation forwardR = rotation(PORT9);
rotation lateral = rotation(PORT2);

/////////////////////////////////////////

//////////// Inertial Sensors ////////////

inertial gyro1 = inertial(PORT6);

/////////////////////////////////////////
