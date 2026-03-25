#include <iostream>

using namespace std;

void printItems(int n){
  for (int i = 0; i < n; i++){
    cout << i << endl;
  }
}


// O(n)
int main(){
  printItems(10);
}
