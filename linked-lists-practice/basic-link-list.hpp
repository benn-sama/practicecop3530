#ifndef BASIC_LINK_LIST_HPP
#define BASIC_LINK_LIST_HPP

template <class T>
class IntNode {
    public:
        IntNode (T dataInit, IntNode *nextLoc = nullptr);
        void InsertAfter (IntNode *nodeLoc);
        IntNode *getNext();
        void printNode();
    private:
        T dataVal;
        IntNode *nextNodePtr;
};

#endif