#include <iostream>
#include <string>

using namespace std;

template <class T>
class ListNode {
  public:
    T value;
    ListNode* next;

  public:
    ListNode(T value) {
      this->value = value;
    }
    ListNode() { }
};

template <class T>
class LinkedList {
  private:
    ListNode<T>* head;
    ListNode<T>* tail;
  public:
    LinkedList() {
      head = NULL;
      tail = NULL;
    }

    void add(T val) {
      if(!head) {
        head = tail = new ListNode<T>(val);
      }
      else {
        tail->next = new ListNode<T>(val);
        tail = tail->next;
      }
    }

    T get(int index) {
      ListNode<T>* n = head;
      for(; index; index--) {
        n = n->next;
        if(!n) return NULL;
      }
      return n->value;
    }

    friend class ListIterator;
};


int main(int argc, char** argv) {
  LinkedList<int> l;
  l.add(1);
  l.add(8);
  l.add(4);
  l.add(7);
  l.add(9);
  l.add(2);
  l.add(5);
  for(int i = 0; i < 7; i++)
    cout << "l[" << i << "] = " << l.get(i) << endl;

  LinkedList<string> s;
  s.add("foo");
  s.add("bar");
  s.add("baz");
  for(int i = 0; i < 3; i++)
    cout << "s[" << i << "] = " << s.get(i) << endl;
}
