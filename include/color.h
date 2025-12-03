#pragma once
#include "vex.h"

extern optical bottomColorSensor;
extern optical topColorSensor;

// color Blue = color(0, 119, 200);
// color Red = color(210, 38, 48);
//function prototypes
void colorSensorPriority(optical &currentSensor);
void blueTop ();
void blueMiddle ();
void redTop ();
void redmiddle ();