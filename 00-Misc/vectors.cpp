#include <iostream>
#include <vector>

using namespace std;

vector<int> myVect = {11, 3, 23, 7};
vector<int> myVect2 = {10, 2, 22, 6};

int main(){
  // This will be O(1)
  myVect.push_back(17);
  myVect.pop_back();

  myVect2.erase(myVect2.begin());

  for(int i : myVect) {
    cout << i << endl;
  }

  cout << "-------" << endl;

  for (int i : myVect2) {
    cout << i << endl;
  }

  cout << "-------" << endl;

  for (int i = 0; i < myVect2.size(); i++) {
    cout << i << " " << endl; // Check correct idx
  }

  // This will be O(n)
  myVect2.insert(myVect2.begin(), 100);

  cout << "-------" << endl;

  for (int i : myVect2) {
    cout << i << endl;
  }

  cout << "---------" << endl;

  myVect2.insert(myVect2.begin()+1, 99);

  for (int i : myVect2) {
    cout << i << endl;
  }

  cout << "--------" << endl;

  for (int i = 0; i < myVect2.size(); i++) {
    cout << i << endl;
  }
}
