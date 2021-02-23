#include<iostream>
#include "nodeB.h"

using namespace std;

class BST{
    private:
         nodeB *root;
         string out;
         void printData(nodeB *start);
         int opps;
    public:
        BST();
        void addNode(string d);
        bool isStored(string d);
        int getOpps();
        string printData();
};