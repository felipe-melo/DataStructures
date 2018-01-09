#include "../node.cpp"

template<class T>
class DoubleLinkedListNode: public Node<T> {

    public:
        DoubleLinkedListNode(T);
        DoubleLinkedListNode<T> *next;
        DoubleLinkedListNode<T> *previous;
};