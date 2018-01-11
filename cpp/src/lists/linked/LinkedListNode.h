//#include "../node.cpp"

template<class T>
class LinkedListNode: public Node<T> {

    public:
        LinkedListNode(T);
        LinkedListNode<T> *next;
};