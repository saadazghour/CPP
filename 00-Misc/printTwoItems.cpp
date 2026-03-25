#include <iostream>

using namespace std;

void printItems(int a, int b){
  // O(a)
  for (int i = 0; i < a; i++){
    cout << i << endl;
  }

   // O(b)
  for (int j = 0; j < b; j++){
    cout << j << endl;
  }
}

// Then will be her ---> O( a + b)
// Big O: Different Terms for Inputs
int main(){
  printItems(10, 6);
}
