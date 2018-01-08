#include <iostream>
#include "br.data.structure.linkedlist/LinkedList.cpp"

using namespace std;

int main() {
    LinkedList<int> *list = new LinkedList<int>();

    list->add(10);
    list->add(20);
    list->add(30);
}