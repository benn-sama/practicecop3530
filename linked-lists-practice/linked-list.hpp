#ifndef LINKED_LIST_HPP
#define LINKED_LIST_HPP

/* all linked lists classes will be tempate of class typename
    all classes are derived from Dr.Fang's lecture notes.
    this file is for practice and learning purposes only.
    
    git repo: https://github.com/uwf-fang/cop3530-examples/blob/main/m07-linked-list/linked-list.hpp

*/

template <class T>
class Node {
    private:
        T value;
        Node *next;
    public:
    //...
};

template<class T>
class BidirectionalNode {
    private:
        T value;
        BidirectionalNode *next;
        BidirectionalNode *prev;
    public:
        //...
};

template <class T>
class MinLinkedList {
    private:
        Node<T> *head;
    public:
    //...
};

template <class T>
class SinglyLinkedList {
    private:
        Node<T> *head;
        Node<T> *tail;
    public:
    //...
};

template <class T>
class DoublyLinkedList {
    private:
        BidirectionalNode<T> *head;
        BidirectionalNode<T> *tail;
    public:
    //...
};

#endif 