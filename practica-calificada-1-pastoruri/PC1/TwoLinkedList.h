//
// Created by ruben on 4/12/19.
//
#include <iostream>
#ifndef PC1_TWOLINKEDLIST_H
#define PC1_TWOLINKEDLIST_H

#include "LinkedList.h"
using namespace std;
namespace UTEC {
    class TwoLinkedList {
        Node* head1;
        Node* head2;
        Node* tail1;
        Node* tail2;
        Node* tail;
    public:
        TwoLinkedList();
        void push_back_1(int a);
        void push_back_2(int a);
        string merge(int a);
        bool is_merged();
        string getlist(int a);
        void save(string name);

        //SETTERS AND GETTERS

        Node *getHead1() const;

        void setHead1(Node *head1);

        Node *getHead2() const;

        void setHead2(Node *head2);

        Node *getTail1() const;

        void setTail1(Node *tail1);

        Node *getTail2() const;

        void setTail2(Node *tail2);

        Node *getTail() const;

        void setTail(Node *tail);

        //-------------------------
    };
}


#endif //PC1_TWOLINKEDLIST_H
