#include <iostream>

using namespace std;

int addItems(int n){
  return n + n;
  // What if we had n + n + n ----> Here two operations -- O(2) ---> then wer's simplify this --> O(1)
}

// O(1) ----> Very efficient.
int main(){
  int sum;

  sum = addItems(10);

  cout << sum;
}
