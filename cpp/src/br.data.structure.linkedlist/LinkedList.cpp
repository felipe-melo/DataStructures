#include "LinkedList.h"

template<class T>
LinkedList<T>::LinkedList() {
    this-> head = NULL;
    this-> tail = NULL;
}

template<class T>
void LinkedList<T>::add(T element) {

    LinkedListNode<T> *temp = new LinkedListNode<T>(element);
    temp->next = NULL;

    if (this->head == NULL) {
        this->head = this->tail = temp;
        temp = NULL;
    } else {
        this->tail->next = temp;
        this->tail = temp;
    }
}