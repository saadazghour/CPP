#include <iostream>

using namespace std;

void printItems(int n){
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      cout << i << j << endl;
    }
  }
}

// O(n^2) - n * n = n^2 - (n^2) - O(n^2)
int main(){
  printItems(10);
}
