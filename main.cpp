#include<iostream>
#include<cstdlib>
#include<ctime>
#include<fstream>
#include<string>
#include "LinkedList.h"
#include "BST.h"

using namespace std;

int main(){
    BST b;
    LinkedList l;
    string words[200];
    
    bool printed[200];
    
    for(int i = 0; i < 200; i++){
        printed[i] = false;
    }
    
    fstream infile;
    infile.open("input.txt", ios::in);
    
    if(infile.is_open()){
        string in;
        int index = 0;
        while(getline(infile, in)){
            words[index] = in;
            b.addNode(in);
            l.addNode(in);
        }
        
    }
    infile.close();
    
    srand((unsigned) time(0));
    
    for(int i = 0; i < 200; i++){
        int randnum = (rand() % 200);
        bool busy = true;
        
        while(busy){
            if(printed[randnum] == false){
                //cout << randnum << endl;
                //if(l.find(words[randnum]) || b.isStored(words[randnum])){
                    bool sl = l.find(words[randnum]);
                    bool sb = b.isStored(words[randnum]);
                    cout << l.getOpps() << " : " << b.getOpps() << endl;
                //}                
                printed[randnum] = true;
                busy = false;
            }else{
                randnum = (rand() % 200);
            }
        }
        
    }
    
    
    
    return 0;
}