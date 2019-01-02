#include "PID.h"
#include <math.h>
#include <vector>
using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
	this->Kd=Kd;
	this->Ki=Ki;
	this->Kp=Kp;
	this->p_error=0;
	this->d_error=0;
	this->i_error=0;
}

void PID::UpdateError(double cte) {
	this->d_error=cte-this->p_error;
	this->p_error=cte;
	this->i_error+=cte;

}

double PID::TotalError() {
	return -p_error*Kp-d_error*Kd-Ki*i_error;
}

