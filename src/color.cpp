#pragma once
#include "color.h"


bool topSensor = false;
//

//

/// @brief gives priority to first color sensor 
void colorSensorPriority(bool &topSensor){
    if (topColorSensor.color() == vex::color::blue || topColorSensor.color() == vex::color::red){ // gives priority to top color sensor
    topSensor = true;
    std::cout << "Top" << std::endl;
  }else{ // gives priority to bottom color sensor
    topSensor = false;
    std::cout << "Bottom" << std::endl;
  }
}

/// @brief output blue balls to top outtake
void blueTop () {
    colorSensorPriority(topSensor); // assign current sensor based on priority
    chainIntake1.spin(forward, 12, volt);
    chainIntake2.spin(forward, 12, volt);
    // check color and output accordingly (blue to top, red to middle)
    if (topSensor == true){
        if (topColorSensor.color() == vex::color::blue) {
            outtake.spin(reverse, 9, volt);
        } else if (topColorSensor.color() == vex::color::red) {
            outtake.spin(forward, 9, volt);
        }
    }else{
        if (bottomColorSensor.color() == vex::color::blue) {
            outtake.spin(reverse, 9, volt);
        } else if (bottomColorSensor.color() == vex::color::red) {
            outtake.spin(forward, 9, volt);
        }
    }
}
/// @brief output blue balls to middle outtake
void blueMiddle () {
    colorSensorPriority(topSensor); // assign current sensor based on priority
    
    // move main chain 
    chainIntake1.spin(forward, 12, volt);
    chainIntake2.spin(forward, 12, volt);

    // check color and output accordingly (blue to middle, red to top)
    if (topSensor == true){
        if (topColorSensor.color() == vex::color::blue) {
            outtake.spin(forward, 9, volt);
        } else if (topColorSensor.color() == vex::color::red) {
            outtake.spin(reverse, 9, volt);
        }
    }else{
        if (bottomColorSensor.color() == vex::color::blue) {
            outtake.spin(forward, 9, volt);
        } else if (bottomColorSensor.color() == vex::color::red) {
            outtake.spin(reverse, 9, volt);
        }
    }
}