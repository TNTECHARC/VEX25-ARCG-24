#include "vex.h"

// Intake function 
//NOTE: adjust voltage
void bottom_intake(int time){
    intake.spin(forward, 12, volt);
    wait(time, seconds);
    intake.spin(forward, 0, volt);
}
void bottom_output(int time){
    intake.spin(reverse, 12, volt);
    wait(time, seconds);
    intake.spin(forward, 0, volt);
}
void top_output1(int time){
    chainIntake1.spin(forward, 12, volt);
    chainIntake2.spin(forward, 12, volt);
    outtake.spin(forward, 12, volt);
    wait(time, seconds);
    intake.spin(forward, 0, volt);
    chainIntake1.spin(forward, 0, volt);
    chainIntake2.spin(forward, 0, volt);
}
void top_output2(int time){
    chainIntake1.spin(forward, 12, volt);
    chainIntake2.spin(forward, 12, volt);
    outtake.spin(reverse, 12, volt);
    wait(time, seconds);
    intake.spin(forward, 0, volt);
    chainIntake1.spin(forward, 0, volt);
    chainIntake2.spin(forward, 0, volt);
}