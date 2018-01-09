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
        this->size = 0;
        this->head = this->tail = temp;
        temp = NULL;
    } else {
        this->tail->next = temp;
        this->tail = temp;
    }
}

template<class T>
T *LinkedList<T>::remove(int index) {
    if (index < 0 || index >= this->size)
        return NULL:
    
    LinkedListNode<T> *temp = this->head;
    int i = 0;

    for(int i = -1; i != index; i++) {
        temp = temp->next;
    }
    this->size--;
    return temp;
}

template<class T>
int LinkedList<T>::getSize() {
    return this->size;
}