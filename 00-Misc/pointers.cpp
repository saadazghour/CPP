#include <iostream>

using namespace std;


int main() {

  // We are not using Pointer
  // int num1 = 11;
  // int num2 = num1;

  // num1 = 22;

  // cout << "num1 = " << num1 << endl;
  // cout << "num2 = " << num2 << endl;

  // We are using Pointer
  int* num1 = new int(11);
  int* num2 = num1;

  *num1 = 22;

  cout << "num1 = " << *num1 << endl;
  cout << "num2 = " << *num2 << endl;
}



// Output:

// num1 = 22
// num2 = 22
