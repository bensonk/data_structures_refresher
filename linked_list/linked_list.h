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
class LinkedListIterator {
  private:
    ListNode<T>* current;
  public:
    LinkedListIterator(ListNode<T>* n) {
      current = n;
    }

    void next() {
      current = current->next;
    }

    T get() {
      return current->value;
    }

    bool end() {
      if(current == NULL)
        return true;
      return false;
    }
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

    LinkedListIterator<T>* begin() {
      return new LinkedListIterator<T>(head);
    }

    LinkedListIterator<T>* end() {
      return new LinkedListIterator<T>(tail);
    }
};

