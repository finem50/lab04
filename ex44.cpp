//Compute quadratic equation (b^2)-4ac

#include <iostream>
using namespace std;

double bb_4ac();
void get_a_b_c(double& a, double& b, double& c);

int main(){
  double result;
  result = bb_4ac();

  cout << "The result of the computation is: " << result << endl;
  return 0;
}

double bb_4ac(){

  double a, b, c; //Coefficients of a quadratic equation
  get_a_b_c(a, b, c);

  return b * b - 4 * a * c;
}

void get_a_b_c(double& a, double& b, double& c){

  cout << "Enter values for a, b and c respectively to calculate "
      << "quadratic equation with those values <Enter>: \n";
  cin >> a >> b >> c;
  cout << "You have entered a = " << a << ", b = " << b << ", c = " << c << endl;

  return;
}
