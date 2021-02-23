#include<iostream>
#include "node.h"

using namespace std;

class LinkedList{
    private:
        node *head;
        node *tail;
        int length;
        int opps;
    public:
        LinkedList();
        void addNode(string in);
        string printNode(int index);
        bool find(string in);
        int getOpps();
        int getLength();        
};