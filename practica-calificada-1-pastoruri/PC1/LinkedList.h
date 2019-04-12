//
// Created by Rodrigo on 12/04/2019.
//
#include <ostream>

#ifndef LINKEDLISTA_LINKEDLIST_H
#define LINKEDLISTA_LINKEDLIST_H
struct Node {
    int value;
    std::string palabro;
    Node* next;
    Node()= default;
    Node(int mvalue, Node* mnext);

    int getValue() const;

    void setValue(int mvalue);

    Node *getNext() const;

    void setNext(Node *mnext);



};



class LinkedList {
    Node* head;
    Node* tail;
public:
    LinkedList()= default;
    LinkedList(Node* mhead, Node* mtail);

    friend std::ostream &operator<<(std::ostream &os, const LinkedList &list);
    int size();
    bool is_empty();
    void print_linkedlist();
    void print_linkedlist_palabro();
    void add_head(int value, Node* next);
    void add_tail(int value, Node* next);
    void remove_head();
    void remove_tail();
    void load_csv(std::string file);
    void save_csv(std::string file);
    //Access

    Node *getHead() const;
    void setHead(Node *head);
    Node *getTail() const;
    void setTail(Node *tail);



};




#endif //LINKEDLISTA_LINKEDLIST_H
