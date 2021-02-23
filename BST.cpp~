#include<iostream>
#include "BST.h"

using namespace std;

BST::BST(){
    root = NULL;
    out = "";
}

void BST::addNode(std::string d){
    node *tmp = new node;
    tmp->data = d;
    tmp->right = NULL;
    tmp->left = NULL;
    
    if(root == NULL){
        root = tmp;
    }else{
         node *current = root;
        bool unstored = true;
        
        while(unstored){
            if(current->data.compare(tmp->data) > 0){
                if(current->right == NULL){
                    current->right = tmp;
                    unstored = false;
                }else{
                    current = current->right;
                }
            }else{
                if(current->left == NULL){
                    current->left = tmp;
                    unstored = false;
                }else{
                    current = current->left;
                }
            }
        }
        
    }
}

bool BST::isStored(string d){
    bool stored = false;
    bool search = true;
    struct node current = *root;
    
    while(search){
        if(current.data.compare(d) == 0){
            stored = true;
            search = false;
        }else{
            if(current.data.compare(d) > 0){
                if(current.right == NULL){
                    search = false;
                }else{
                    current = *current.right;
                }
            }else{
                if(current.left == NULL){
                    search = false;
                }else{
                    current = *current.left;
                }
            }
        }
    }
    
    return stored;
}

void BST::printData(node *start){
    if(start != NULL){
        out = out + start->data + "\n";
        printData(start->left);
        //cout << start->data << endl;
        printData(start->right);
        
    }

}


std::string BST::printData(){
    out = "";
    printData(root);
    return out;
}










