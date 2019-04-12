//
// Created by ruben on 4/12/19.
//


#include "TwoLinkedList.h"
using namespace std;

#include <iostream>

#include <fstream>
#include <string>
Node *UTEC::TwoLinkedList::getHead1() const {
    return head1;
}

void UTEC::TwoLinkedList::setHead1(Node *head1) {
    TwoLinkedList::head1 = head1;
}

Node *UTEC::TwoLinkedList::getHead2() const {
    return head2;
}

void UTEC::TwoLinkedList::setHead2(Node *head2) {
    TwoLinkedList::head2 = head2;
}

Node *UTEC::TwoLinkedList::getTail1() const {
    return tail1;
}

void UTEC::TwoLinkedList::setTail1(Node *tail1) {
    TwoLinkedList::tail1 = tail1;
}

Node *UTEC::TwoLinkedList::getTail2() const {
    return tail2;
}

void UTEC::TwoLinkedList::setTail2(Node *tail2) {
    TwoLinkedList::tail2 = tail2;
}

Node *UTEC::TwoLinkedList::getTail() const {
    return tail;
}

void UTEC::TwoLinkedList::setTail(Node *tail) {
    TwoLinkedList::tail = tail;
}




//FIN DE SETTERS AND GETTERS


UTEC::TwoLinkedList::TwoLinkedList(){
    setHead1(nullptr);
    setHead2(nullptr);
    setTail1(nullptr);
    setTail2(nullptr);
    setTail(nullptr);

}

void UTEC::TwoLinkedList::push_back_1(int a) {
    if(((this->tail1)->next)==nullptr){
        Node* temp=tail1;
        tail1->next=temp;
        tail1=temp;
        tail1->value=a;
    }
    else{
        Node* temp=tail;
        tail->next=temp;
        tail=temp;
        tail->value=a;
    }
}


void UTEC::TwoLinkedList::push_back_2(int a) {
    if(((this->tail2)->next)==nullptr){
        Node* temp=tail2;
        tail2->next=temp;
        tail2=temp;
        tail2->value=a;
    }
    else{
        Node* temp=tail;
        tail->next=temp;
        tail=temp;
        tail->value=a;
    }
}

string UTEC::TwoLinkedList::merge(int a){

        Node* bond=new Node(a, nullptr);
        if(tail1->next!=nullptr && tail2->next!= nullptr)
        {
            cout<<"Operación duplicada"<<endl;
        }
        else{
            tail1->next=bond;
            tail2->next=bond;
            this->tail=bond;
        }
}

bool UTEC::TwoLinkedList::is_merged() {

    if(((this->tail1)->next)==((this->tail2)->next)){
        return 1;
    }
    else{
        return 0;
    }

}




string UTEC::TwoLinkedList::getlist(int a){
    switch(a){
        case 1: {
            string retr;
            string space=" ";
            Node* temp = head1;
            while(temp!= nullptr  ) {
                retr.append(to_string(temp->value));
                retr.append(space);
                temp = temp->next;
            }
            return retr;
        }
        case 2:{
            string retr;
            string space=" ";
            Node* temp = head2;
            while(temp!= tail2->next) {
                retr.append(to_string(temp->value));
                retr.append(space);
                temp = temp->next;
            }
            return retr;
        }

        case 0:{
            if(tail1->next==tail2->next && tail1->next!= nullptr ){
                string retr;
                string space=" ";
                Node *bond=(tail1->next);
                while(bond!= nullptr  ) {
                    retr.append(to_string(bond->value));
                    retr.append(space);
                    bond = bond->next;
                }
                return retr;
            }
            else{
                return "vacio";
            }


        }


    }
}


void UTEC::TwoLinkedList::save(string name){

    fstream csv;

    csv.open(name, ios::out | ios::app);

        if(head1== nullptr && head2!= nullptr && tail2!= nullptr){
            string retr;
            string space=",";
            csv<<"\n";
            Node *bond=(head2);
            while(bond!= nullptr  ) {
                csv<<to_string(bond->value);
                csv<<",";
                bond = bond->next;
            }
            csv<<"\n";

            Node *bond1=(tail2->next);
            while(bond1!= nullptr ) {
                csv<<to_string(bond->value);
                csv<<",";
                bond1 = bond1->next;
            }
        }
        else if(head1!=nullptr && head2== nullptr && tail1!= nullptr){
            string retr;
            string space=" ";

            Node *bond=(head1);
            while(bond!= nullptr  ) {
                csv<<to_string(bond->value);
                csv<<",";
                bond = bond->next;
            }
            csv<<"\n";
            Node *bond1=(tail1->next);
            while(bond1!= nullptr ) {
                csv<<to_string(bond1->value);
                csv<<",";
                bond1 = bond1->next;
            }
        }


        else if(head1!= nullptr && head2!= nullptr && tail1!= nullptr){
            Node *bond=(head1);
            while(bond!= tail1->next) {
                csv<<to_string(bond->value);
                csv<<",";
                bond = bond->next;
            }
            csv<<"\n";
            Node *bond1=(head2);
            while(bond!= tail2->next) {
                csv<<to_string(bond1->value);
                csv<<",";
                bond1 = bond1->next;
            }
            csv<<"\n";
            Node *bond3=(tail2->next);
            while(bond!= nullptr) {
                csv<<to_string(bond3->value);
                csv<<",";
                bond3 = bond3->next;
            }


        }




}









