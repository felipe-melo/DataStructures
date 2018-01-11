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
    temp->previous = this->tail;

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
        return NULL;

    LinkedListNode<T> *temp = this->head;
    LinkedListNode<T> *aux;

    if (index == 0) {
        this->head = this->head->next;
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
int DoubleLinkedList<T>::getSize() {
    return this->size;
}