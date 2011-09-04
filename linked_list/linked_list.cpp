#include <iostream>
using namespace std;


class ListNode {
  public:
    int value;
    ListNode* next;

  public:
    ListNode(int value) {
      this->value = value;
    }
    ListNode() {
    }
};

class LinkedList {
  private:
    ListNode* head;
    ListNode* tail;
  public:
    LinkedList() {
      head = NULL;
      tail = NULL;
    }

    void add(int val) {
      if(!head) {
        head = tail = new ListNode(val);
      }
      else {
        tail->next = new ListNode(val);
        tail = tail->next;
      }
    }

    int get(int index) {
      ListNode* n = head;
      for(; index; index--) {
        n = n->next;
        if(!n) return -1;
      }
      return n->value;
    }
};


int main(int argc, char** argv) {
  LinkedList l;
  l.add(1);
  l.add(8);
  l.add(4);
  l.add(7);
  l.add(9);
  l.add(2);
  l.add(5);
  for(int i = 0; i < 7; i++)
    cout << "l[" << i << "] = " << l.get(i) << endl;
}
