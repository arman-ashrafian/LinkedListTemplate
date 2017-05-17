/* Arman Ashrafian
 * CS 1C
 * 5-17-2017
 */

#include <iostream>
#include <iomanip>
#include "LinkedList.h"

int main() {

    LinkedList<int> list1, list2;

    /* Insert elements into list 1 */
    list1.push(60);
    list1.push(123);
    list1.push(62);
    list1.push(78);
    list1.push(88);

    std::cout << "List 1: ";
    list1.print();

    /* Reverse list 1 */
    list1.reverseList(list2);

    std::cout << "List 2: ";
    list2.print();

    /* Delete third node of both lists */
    std::cout << "\nDeleting 3rd node\n";
    list1.deleteAt(2);
    list2.deleteAt(2);

    std::cout << "List 1: ";
    list1.print();
    std::cout << "List 2: ";
    list2.print();

    /* Insert Middle */
    std::cout << "\nInserting in the middle\n";
    list1.insertMiddle(70);
    list2.insertMiddle(70);

    std::cout << "List 1: ";
    list1.print();
    std::cout << "List 2: ";
    list2.print();

    std::cout << "\nRepeat using doubles...\n\n";
    /*************** Repeat with doubles *******************/
    LinkedList<double> list3, list4;

    std::cout << std::fixed << std::setprecision(1);

    list3.push(60);
    list3.push(123);
    list3.push(62);
    list3.push(78);
    list3.push(88);

    std::cout << "List 1: ";
    list3.print();

	/* Reverse list 1 */
    list3.reverseList(list4);

	std::cout << "List 2: ";
	list4.print();

	/* Delete third node of both lists */
	std::cout << "\nDeleting 3rd node\n";
	list3.deleteAt(2);
	list4.deleteAt(2);

	std::cout << "List 1: ";
	list3.print();
	std::cout << "List 2: ";
	list4.print();

	/* Insert Middle */
	std::cout << "\nInserting in the middle\n";
	list3.insertMiddle(70);
	list4.insertMiddle(70);

	std::cout << "List 1: ";
	list3.print();
	std::cout << "List 2: ";
	list4.print();

	/* Error Checking */
	std::cout << "\nError Checking\n\n";
	std::cout << "list1.deleteAt(100): ";
	try {
		list1.deleteAt(100);
	} catch(...) {
		std::cout << "cannot delete, node does not exist\n";
	}

	std::cout << "Clearing list 1\n";
	list1.clearList();
	std::cout << "Deleting from an empty list:\nlist1.deleteAt(2): ";\

	try {
		list1.deleteAt(2);
	} catch(...) {
		std::cout << "cannot delete, list is empty";
	}




    return 0;
}
