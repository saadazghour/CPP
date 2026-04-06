#include <iostream>

using namespace std;

class Node {
  // attributes
  public:
    int value;
    Node* next;

    // constructors
    Node(int value){
      this->value = value;
      // We can actually remove ( this -> ) her, bc we don't have next as parameter for the Node function.
      // this->next = nullptr;
      next = nullptr;
    }
};

class LinkedList {
  private:
    Node* head;
    Node* tail;
    int length;

  public:
    // constructors
    // Create first new Node, whole functions are commons are they all create new Node.
    LinkedList(int value) {
      Node* newNode = new Node(value);
      head = newNode;
      tail = newNode;
      length = 1;
    }

    // functions members are commons
    // Create new Node
    // Add that's Node at the end
    void append(int value) {
      cout << "append";
    }

    // Create new Node
    // Add that's Node at the beginning
    void prepend(int value) {
      cout << "prepend";
    }

    // Create new Node
    // Insert that's Node at the particular idx
    bool insert(int idx, int value) {
      cout << "Insert";
      return true;
    }
};

int main (){
  LinkedList* myLinkedList = new LinkedList(4);
  cout << "LL1 = " << myLinkedList << endl;
}
