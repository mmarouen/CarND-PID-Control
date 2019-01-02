#ifndef PID_H
#include <math.h>
#include <vector>
#define PID_H
using namespace std;

class PID {
public:
  /*
  * Errors
  */
  double p_error;
  double i_error;
  double d_error;
  /*
  * Coefficients
  */ 
  double Kp;
  double Ki;
  double Kd;
  /*
   * Error increments
   */
  vector<double> dp;
  /*
  * Constructor
  */
  PID();

  /*
  * Destructor.
  */
  virtual ~PID();

  /*
  * Initialize PID.
  */
  void Init(double Kp, double Ki, double Kd);

  /*
  * Update the PID error variables given cross track error.
  */
  void UpdateError(double cte);

  /*
  * Calculate the total PID error.
  */
  double TotalError();
};

#endif /* PID_H */
