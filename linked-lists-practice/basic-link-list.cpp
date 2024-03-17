#include "basic-link-list.hpp"

//constructor
template <class T>
IntNode<T>::IntNode(T dataInit, IntNode *nextLoc) {
    this->dataVal = dataInit;
    this->nextNodePtr = nextLoc;
}

// insert node after this node

template <class T>
void IntNode<T>::InsertAfter(IntNode *nodeLoc) {
    IntNode *tmpNext = nullptr;

    tmpNext = this->nextNodePtr;    // remembers next node
    this->nextNodePtr = nodeLoc;    // this node points to new node
    nodeLoc->nextNodePtr = tmpNext; // this node points to next node
}

// print dataVal
template <class T>
void IntNode<T>::printNode() {
    std::cout << this->dataVal << std::endl;
}

// grab location pointer by nextNodePtr

template <class T>
IntNode<T> *IntNode<T>::getNext() {
    return this->nextNodePtr;
}