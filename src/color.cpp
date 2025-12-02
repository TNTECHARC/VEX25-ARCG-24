#pragma once
#include "color.h"
#include "vex.h"

//functions

//////////// Optical Sensors ////////////

Optical colSensor = optical(PORT15);

/////////////////////////////////////////
void blueTop () {
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
void blueMiddle () {
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

void redTop () {
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
void redmiddle () {
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