#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "node.h"


class LinkedList
{

public:
    LinkedList();
    void add(int newValue);
    void print();
    bool remove(int value);
    Node*head;
};

#endif // LINKEDLIST_H
