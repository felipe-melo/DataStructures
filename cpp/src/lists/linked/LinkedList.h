#include "LinkedListNode.cpp"
#include "../list.h"

template <class T>
class LinkedList: public List<T> {

    public:
    LinkedListNode<T> *head, *tail;
        LinkedList();
        void add(T);
        T *remove(int);
        int getSize();

};