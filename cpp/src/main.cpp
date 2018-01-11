#include <iostream>
#include "lists/linked/LinkedList.cpp"

using namespace std;

int main() {
    LinkedList<int> *list = new LinkedList<int>();

    list->add(10);
    list->add(20);
    list->add(30);

    //cout << list->head->element << endl;
    //cout << list->head->next->element << endl;
    //cout << list->head->next->next->element << endl;

    for(LinkedListNode<int> *node = list->head; node != NULL; node = node->next) {
        cout << node->element << endl;
    }

    list->remove(1);

    for(LinkedListNode<int> *node = list->head; node != NULL; node = node->next) {
        cout << node->element << endl;
    }

    list->remove(0);

    for(LinkedListNode<int> *node = list->head; node != NULL; node = node->next) {
        cout << node->element << endl;
    }

    list->remove(0);

    for(LinkedListNode<int> *node = list->head; node != NULL; node = node->next) {
        cout << node->element << endl;
    }

    for(LinkedListNode<int> *node = list->head; node != NULL; node = node->next) {
        cout << node->element << endl;
    }

    for(LinkedListNode<int> *node = list->head; node != NULL; node = node->next) {
        cout << node->element << endl;
    }
}