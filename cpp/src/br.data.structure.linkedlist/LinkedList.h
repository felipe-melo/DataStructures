#include "LinkedListNode.cpp"

template <class T>
class LinkedList {

    public:
    LinkedListNode<T> *head, *tail;
    LinkedList();
    void add(T);

};