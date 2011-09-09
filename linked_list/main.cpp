#include <iostream>
#include <string>
#include "linked_list.h"

int main(int argc, char** argv) {
  LinkedList<int> l;
  l.add(1);
  l.add(8);
  l.add(4);
  l.add(7);
  l.add(9);
  l.add(2);
  l.add(5);

  LinkedListIterator<int>* l_iter = l.begin();
  do {
    cout << l_iter->get() << endl;
    l_iter->next();
  } while(!l_iter->end());
  delete l_iter;


  LinkedList<string> s;
  s.add("foo");
  s.add("bar");
  s.add("baz");

  LinkedListIterator<string>* i = s.begin();
  for(; !i->end(); i->next()) {
    cout << i->get() << endl;
  }
  delete i;
}
