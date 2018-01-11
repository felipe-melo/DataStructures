#include "../list.h"
#include "LinkedListNode.cpp"

template <class T>
class LinkedList: public List<T> {

    public:
    LinkedListNode<T> *head, *tail;
        LinkedList();
        void add(T);
        LinkedListNode<T> *remove(int);
        int getSize();

};