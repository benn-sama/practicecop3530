#include "basic-link-list.hpp"
#include <iostream>

int main () {
    IntNode<int> *headObj = nullptr; // create IntNode pointers
    IntNode<int> *nodeObj1 = nullptr;
    IntNode<int> *nodeObj2 = nullptr;
    IntNode<int> *nodeObj3 = nullptr;
    IntNode<int> *currObj = nullptr;

    // front of nodes list
    headObj = new IntNode(-1);
    
    // insert nodes
    nodeObj1 = new IntNode(555);
    headObj->InsertAfter(nodeObj1);

    nodeObj2 = new IntNode(999);
    nodeObj1->InsertAfter(nodeObj2);

    nodeObj3 = new IntNode(777);
    nodeObj2->InsertAfter(nodeObj3);

    // print linked list
    currObj = headObj;
    while (currObj != nullptr) {
        currObj->printNode();
        currObj = currObj->getNext();
    }
}