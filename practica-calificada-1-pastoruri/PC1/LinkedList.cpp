//
// Created by Rodrigo on 12/04/2019.
//
#include <fstream>
#include <iostream>

#include "LinkedList.h"
using namespace std;

//NODE
Node::Node(int mvalue, Node* mnext){
    setValue(mvalue);
    setNext(mnext);
}

int Node::getValue() const {
    return value;
}

void Node::setValue(int value) {
    Node::value = value;
}

Node *Node::getNext() const {
    return next;
}

void Node::setNext(Node *next) {
    Node::next = next;
}
//LINKEDLIST

LinkedList::LinkedList(Node* mhead, Node* mtail){
    setHead(mhead);
    setTail(mtail);
}

void LinkedList::print_linkedlist(){
    Node* temp=head;
    for(int i=0; i<size();i++) {
        std::cout << temp->getValue() << std::endl;
        temp = temp->next;
    }

}
void LinkedList::print_linkedlist_palabro(){
    Node* temp=head;
    for(int i=0; i<size();i++) {
        std::cout << temp->palabro<< std::endl;
        temp = temp->next;
    }

}

Node *LinkedList::getHead() const {
    return head;
}

int LinkedList::size() {
    int count = 0;
    Node* actual = head;
    while(actual != nullptr) {
        count++;
        actual = actual->getNext();
    }
    return count;
}

bool LinkedList::is_empty() {
    return head == nullptr;
}


void LinkedList::setHead(Node *head) {
    this->head = head;
}

Node *LinkedList::getTail() const {
    return tail;
}

void LinkedList::setTail(Node *tail) {
    LinkedList::tail = tail;
}

std::ostream &operator<<(std::ostream &os, const LinkedList &list) {
    os << "head: " << list.head << " tail: " << list.tail;
    return os;
}


void LinkedList::add_tail(int value, Node* next) {
    Node* temp = new Node(value, nullptr);
    if (is_empty()) {
        tail = temp;
        head = temp;
    } else {
        tail->setNext(temp);
        tail = temp;
    }
}



void LinkedList::add_head(int value, Node* next) {
    Node* temp = new Node(value, nullptr);
    if (is_empty()) {
        tail = temp;
        head = temp;
    } else {
        (temp->setNext(head));
        head = temp;
    }
}

void LinkedList::remove_head() {
    Node *temp = head;
    (this->head) = ((this->head)->next);
    delete temp;
}

void LinkedList::remove_tail() {
    Node* actual = head;
    while((actual->next)->next != nullptr) {
        actual = actual->getNext();
    }
    delete (actual->next);
    tail=actual;
    (actual->next)= nullptr;
}

void LinkedList::load_csv(string file) {
    ifstream dat(file);
    if(!dat.is_open()) {cout << "ERROR: No se puede abrir archivo";}
    Node* temp=head;

    while(dat.good()){
        getline(dat,(temp->palabro),'\n');
        temp=(temp->next);
    }
    dat.close();
}

void LinkedList::save_csv(string file) {
    fstream Archivo;
    Archivo.open(file);
    Archivo << 14 << endl;

}