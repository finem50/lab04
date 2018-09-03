#include <iostream>
using namespace std;

void swap(int& variable1, int& variable2);

int main(){

  int variable1, variable2;

  cout << "Enter two values that you would like to be swapped, separated by a single space <Enter>: ";
  cin >> variable1 >> variable2;
  cout << "You have entered variable1 = " << variable1 << " and variable2 = " << variable2 << endl;

  swap(variable1, variable2);
  cout << "After swap, variable1 = " << variable1 << " and variable2 = " << variable2 << endl;

  return 0;
}

void swap(int& variable1, int& variable2){

  int temp;
  temp = variable1;
  variable1 = variable2;
  variable2 = temp;

  return;
}
