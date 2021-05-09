#include <cstdlib>
#include <iostream>
#include <string>
#include "BinarySearchTree.h"
using namespace std;


int main(int argc, char** argv) {   
    BinarySearchTree minhaABB=BinarySearchTree();   
    
    minhaABB.print();
    
    minhaABB.insert(6);
    minhaABB.insert(8);
    minhaABB.insert(2);
    minhaABB.insert(4);
    minhaABB.insert(3);
    minhaABB.insert(1);    
    
    minhaABB.print();  
    
    minhaABB.remove(3);
    
    minhaABB.print();   
    return 0;
}

