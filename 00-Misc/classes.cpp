#include <iostream>

using namespace std;

class Cookie {
  // attributes
  private:
    string color;

  // constructors
  public:
    Cookie (string color){
      this->color = color;
    }

    string getColor(){
      return color;
    }

    void setColor(string color){
      this->color = color;
    }
};

int main(){

  Cookie* cookieOne = new Cookie("green");
  Cookie* cookieTwo = new Cookie("blue");

  // cookieOne->setColor("yellow");

  cout << "C1: " << cookieOne->getColor() << endl;
  cout << "C2: " << cookieTwo->getColor() << endl;
}



// Output:

// C1: green
// C2: blue
