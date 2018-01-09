#include "DoubleLinkedList.h"

template<class T>
DoubleLinkedList<T>::DoubleLinkedList() {
    this-> head = NULL;
    this-> tail = NULL;
}

template<class T>
void DoubleLinkedList<T>::add(T element) {

    DoubleLinkedListNode<T> *temp = new DoubleLinkedListNode<T>(element);
    temp->next = NULL;
    temp->next = this->tail;

    if (this->head == NULL) {
        this->size = 0;
        this->head = this->tail = temp;
        temp = NULL;
    } else {
        this->tail->next = temp;
        this->tail = temp;
    }
}

template<class T>
T *DoubleLinkedList<T>::remove(int index) {
    if (index < 0 || index >= this->size)
        return NULL:

    int start, end;

    if (this->size/2 >= index) {
        start = 0;
        end = this->size/2;
    } else {
        start = this->size/2;
        end = this->size;
    }
    LinkedListNode<T> *temp = this->head;
    while()
    return NULL;
}

template<class T>
int DoubleLinkedList<T>::getSize() {
    return this->size;
}