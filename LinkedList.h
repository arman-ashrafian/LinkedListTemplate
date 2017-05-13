
#ifndef LINKEDLISTTEMPLATE_LINKEDLIST_H
#define LINKEDLISTTEMPLATE_LINKEDLIST_H

#include <iostream>

template <class TYPE>
class LinkedList {
public:
    LinkedList();
    ~LinkedList();

    void push(TYPE);
    void insertMiddle(TYPE);
    bool deleteAt(int i);
    void reverseList(LinkedList &list);
    void clearList();

    TYPE getTop() const;
    int getSize() const;
    void print() const;

private:
    struct Node
    {
        TYPE data;
        Node *next;
    };

    Node *head;     // pointer to head of list
    int size;       // size of the list
};

template <class TYPE>
LinkedList<TYPE>::LinkedList() {
    this->size = 0;
    this->head = NULL;
}

template <class TYPE>
LinkedList<TYPE>::~LinkedList() {
    clearList();
}

template <class TYPE>
void LinkedList<TYPE>::push(TYPE elem)
{
    Node *newPtr;

    newPtr = new Node;

    if(newPtr != NULL) {
        newPtr->data = elem;
        newPtr->next = this->head;
        this->head = newPtr;
        this->size++;
    }
}

template <class TYPE>
void LinkedList<TYPE>::print() const {
    Node *ptr;
    ptr = this->head;

    while(ptr != NULL) {
        std::cout << ptr->data << std::endl;
        ptr = ptr->next;
    }
}

template <class TYPE>
void LinkedList<TYPE>::clearList() {
    Node *ptr;
    ptr = head;

    while(ptr != NULL) {
        head = head->next;
        delete ptr;
        ptr = head;
    }
    this->size = 0;
}

template <class TYPE>
int LinkedList<TYPE>::getSize() const {
    return this->size;
}

template <class TYPE>
TYPE LinkedList<TYPE>::getTop() const {
    Node *ptr;
    ptr = this->head;

    if(ptr != NULL) {
        return ptr->data;
    } else {
        throw "empty list";
    }
}

template <class TYPE>
void LinkedList<TYPE>::insertMiddle(TYPE elem) {
    int midIndex = this->size/2;

    Node *newPtr;
    newPtr = new Node;

    if(newPtr != NULL) {
        newPtr->data = elem;
        newPtr->next = NULL;
    }

    if(this->head == NULL) {
        this->head = newPtr;
    } else {
        Node *midPtr;
        midPtr = head;
        for(int i = 0; i < midIndex - 1; i++) {
            midPtr = midPtr->next;
        }
        newPtr->next = midPtr->next;
        midPtr->next = newPtr;
    }
    this->size++;
}

template <class TYPE>
bool LinkedList<TYPE>::deleteAt(int index) {
    Node *ptr;
    Node *prev;
    ptr = head;

    if(ptr == NULL || index > this->size) {
        return false;
    } else if(index == 1) {
        head = head->next;
        delete ptr;
    } else {
        for(int i = 0; i < index; i++) {
            prev = ptr;
            ptr = ptr->next;
        }

        prev->next = ptr->next;
        delete ptr;
    }

    return true;
}

template <class TYPE>
void LinkedList<TYPE>::reverseList(LinkedList &list) {
    
}

#endif //LINKEDLISTTEMPLATE_LINKEDLIST_H