#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {
//Kp=0.2;
//Kd=3;
//Ki=0.001;

//Kp=0.2;
//Kd=1;
//Ki=0.01;

Kp=0.2;
Kd=3.0;
Ki=0.015;

}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {

}

void PID::UpdateError(double cte) {
}

double PID::TotalError() {
}

