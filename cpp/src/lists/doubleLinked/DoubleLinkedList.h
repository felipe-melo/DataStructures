#include "DoubleLinkedListNode.cpp"
#include "../list.h"

template <class T>
class DoubleLinkedList: public List<T> {

    public:
        DoubleLinkedListNode<T> *head, *tail;
        LinkedList();
        void add(T);
        T *remove(int);
        int getSize();

};