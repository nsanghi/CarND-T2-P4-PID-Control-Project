#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp_, double Ki_, double Kd_) {
    Kp = Kp_;
    Ki = Ki_;
    Kd = Kd_;
    p_error = 0.0;
    i_error = 0.0;
    d_error = 0.0;
}

void PID::UpdateError(double cte) {
    d_error = cte - p_error;
    i_error += cte;
    p_error = cte;
}

double PID::TotalError() {
    return Kp*p_error+Ki*i_error+Kd*d_error;
}
