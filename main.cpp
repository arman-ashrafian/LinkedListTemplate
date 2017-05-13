#include <iostream>
#include "LinkedList.h"

int main() {
    LinkedList<int> list;

    list.push(10);
    list.push(20);
    list.push(30);
    list.push(40);

    list.print();

    std::cout << std::endl;

    list.deleteAt(2);

    list.print();

    return 0;
}