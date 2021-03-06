#include<iostream>
//#include "node.h"
#include "LinkedList.h"

using namespace std;

LinkedList::LinkedList(){
    head = NULL;
    tail = NULL;
    opps = 0;
}

void LinkedList::addNode(std::string in){
    node *tmp = new node;
    tmp->data = in;
    tmp->next = NULL;
    
    if(head == NULL){
        length = 0;
        head = tmp;
        tail = tmp;
    }else{
        length++;
        tail->next = tmp;
        tail = tail-> next;
    }
}

std::string LinkedList::printNode(int index){
    int count = 0;
    string out = "";
    struct node read = *head;
    
    while (count != index){
        read = *read.next;
        count++;        
    }
    
    out = read.data;
    
    return out;
}

bool LinkedList::find(std::string in){
    opps = 0;
    bool contains = false;
    
    struct node read = *head;
    while(contains == false && read.next != NULL){
        opps++;
        if(read.data.compare(in) == 0){
            contains = true;
        }
        read = *read.next;
    }
    
    return contains;
    
    
}

int LinkedList::getOpps(){
    return opps;
}

int LinkedList::getLength(){
    return length;
}