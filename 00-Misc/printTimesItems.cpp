#include <iostream>

using namespace std;

void printItems(int a, int b){
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < b; j++) {
      cout << i << j << endl;
    }
  }
}


// Then will be her ---> O( a * b)
// Big O: Different Terms for Inputs
int main(){
  printItems(10,5);
}
