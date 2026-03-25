#include <iostream>

using namespace std;

void printItems(int n){
  for (int i = 0; i < n; i++){
    cout << i << endl;
  }

  for (int j = 0; j < n; j++)
  {
    cout << j << endl;
  }
}

// Drop Constants O(2n) - n + n = 2n - O(2n) - O(n)

// O(n)
int main(){
  printItems(10);
}
