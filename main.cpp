#include <iostream>
#include "LinkedList.h"
#include "Stack.h"

/*
 * This program uses a stack template which is a wrapper
 * for the Linked List
 */
int main() {

    Stack<int> myStack;

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    myStack.push(40);

    int mySize = myStack.size();
    std::cout << "size: " << mySize << std::endl;

    try {
        for(int i = 0; i < mySize; i++) {
            std::cout << myStack.pop() << std::endl;
        }

        myStack.pop(); // Popping an empty stack
    } catch(...) {
        std::cout << "Cannot pop an empty stack" << std::endl;
    }


    return 0;
}