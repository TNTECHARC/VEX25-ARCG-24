#pragma once
#include "color.h"
#include "vex.h"




//////////// Optical Sensors ////////////

optical bottomColorSensor = optical(PORT15); // replace port
optical topColorSensor = optical(PORT20); // replace port
optical colSensor = optical(100); // dummy initialization

/////////////////////////////////////////

/// @brief gives priority to first color sensor 
void colorSensorPriority(optical &currentSensor){

  if (topColorSensor.isNearObject()){ // gives priority to top color sensor
    currentSensor = topColorSensor;

  }else{ // gives priority to bottom color sensor
    currentSensor = bottomColorSensor;
  }
}

/// @brief output blue balls to top outtake
void blueTop () {
    colorSensorPriority(colSensor); // assign current sensor based on priority

    // check color and output accordingly (blue to top, red to middle)
    if (colSensor.color() == vex::color::blue) {
        chainIntake1.spin(forward, 12, volt);
        chainIntake2.spin(forward, 12, volt);
        outtake.spin(forward, 9, volt);
    } else if (colSensor.color() == vex::color::red) {
        chainIntake1.spin(forward, 12, volt);
        chainIntake2.spin(forward, 12, volt);
        outtake.spin(reverse, 9, volt);
    }
}
/// @brief output blue balls to middle outtake
void blueMiddle () {
    colorSensorPriority(colSensor); // assign current sensor based on priority

    // check color and output accordingly (blue to middle, red to top)
    if (colSensor.color() == vex::color::blue) {
        chainIntake1.spin(forward, 12, volt);
        chainIntake2.spin(forward, 12, volt);
        outtake.spin(reverse, 9, volt);
    } else if (colSensor.color() == vex::color::red) {
        chainIntake1.spin(forward, 12, volt);
        chainIntake2.spin(forward, 12, volt);
        outtake.spin(forward, 9, volt);
    }
}
/// @brief output red balls to top outtake
void redTop () {
    colorSensorPriority(colSensor); // assign current sensor based on priority

    // check color and output accordingly (red to top, blue to middle)
    if (colSensor.color() == vex::color::red) {
        chainIntake1.spin(forward, 12, volt);
        chainIntake2.spin(forward, 12, volt);
        outtake.spin(forward, 9, volt);
    } else if (colSensor.color() == vex::color::blue) {
        chainIntake1.spin(forward, 12, volt);
        chainIntake2.spin(forward, 12, volt);
        outtake.spin(reverse, 9, volt);
    }
}
/// @brief output red balls to middle outtake
void redmiddle () {
    colorSensorPriority(colSensor); // assign current sensor based on priority

    // check color and output accordingly (red to middle, blue to top)
    if (colSensor.color() == vex::color::red) {
        chainIntake1.spin(forward, 12, volt);
        chainIntake2.spin(forward, 12, volt);
        outtake.spin(reverse, 9, volt);
    } else if (colSensor.color() == vex::color::blue) {
        chainIntake1.spin(forward, 12, volt);
        chainIntake2.spin(forward, 12, volt);
        outtake.spin(forward, 9, volt);
    }
}