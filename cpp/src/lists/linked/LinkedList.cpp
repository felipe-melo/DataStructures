#include "LinkedList.h"

template<class T>
LinkedList<T>::LinkedList() {
    this->head = NULL;
}

template<class T>
void LinkedList<T>::add(T element) {

    LinkedListNode<T> *temp = new LinkedListNode<T>(element);
    temp->next = NULL;

    if (this->head == NULL) {
        this->size = 1;
        this->head = this->tail = temp;
    } else {
        this->size++;
        this->tail->next = temp;
        this->tail = temp;
    }
    temp = NULL;
}

template<class T>
LinkedListNode<T> *LinkedList<T>::remove(int index) {
    if (index < 0 || index >= this->size)
        return NULL;

    LinkedListNode<T> *temp = this->head;
    LinkedListNode<T> *aux;

    if (index == 0) {
        this->head = this->head->next;
        if (this->size == 1)
            this->tail = NULL;
        this->size--;
        return temp;
    }
    
    for(int i = 0; i < index-1; i++) {
        temp = temp->next;
    }

    aux = temp->next;
    temp->next = temp->next->next;
    this->size--;
    return aux;
}

template<class T>
int LinkedList<T>::getSize() {
    return this->size;
}