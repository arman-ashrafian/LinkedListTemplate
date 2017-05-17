/* Arman Ashrafian
 * CS 1C
 * 5-17-2017
 */

#ifndef LINKEDLISTTEMPLATE_STACK_H
#define LINKEDLISTTEMPLATE_STACK_H

#include "LinkedList.h"


/* Stack Template
 * - wraps LinkedList to create a Stack interface
 */
template <class TYPE>
class Stack {
public:
   ~Stack();

    void push(TYPE);
    TYPE pop();
    int size();
    void destroy();

private:
    LinkedList<TYPE> stack;
};


template <class TYPE>
void Stack<TYPE>::push(TYPE data) {
    stack.push(data);
}

template <class TYPE>
TYPE Stack<TYPE>::pop() {
    TYPE data = stack.getTop();
    stack.deleteAt(0);
    return data;
}

template <class TYPE>
int Stack<TYPE>::size() {
    return stack.getSize();
}

template <class TYPE>
void Stack<TYPE>::destroy() {
    stack.clearList();
}

template <class TYPE>
Stack<TYPE>::~Stack() {
    stack.clearList();
}

#endif //LINKEDLISTTEMPLATE_STACK_H
