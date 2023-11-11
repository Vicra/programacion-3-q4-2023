#include "linkedlist.h"
#include<iostream>
using namespace std;


LinkedList::LinkedList()
{
this->head=nullptr;

}

void LinkedList::add(int newValue)
{
    Node*newNode=new Node(newValue);
    //Caso 1 (La lista esta vacia)
    if(this->head==nullptr){
        this->head=newNode;
    }
    //Caso 2 (La lista no esta vacia
    else{
        Node*iterator=this->head;
        while(iterator->next!=nullptr){
            iterator=iterator->next;
        }
        iterator->next=newNode;
    }

}

void LinkedList::print()
{
    Node*iterator=this->head;
    while(iterator!=nullptr){
        cout<<iterator->value<<"->";
        iterator=iterator->next;

    }
    cout<<"nullptr";
}

bool LinkedList::remove(int value)
{
    Node*iterator=this->head;
    //Caso 1(La lista esta vacia)
    if(this->head==nullptr){
        return false;
    }
    //Caso 2 (Si solo hay un elemento)
    if(this->head->next==nullptr){
        if(this->head->value== value){
            delete this->head;
            this->head=nullptr;
        }
    }


    while(iterator!=nullptr){
        if(value== iterator->value){

        }
    }
}
