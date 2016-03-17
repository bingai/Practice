#include "Sally.h"
#include <iostream>
using namespace std;
 
Sally::Sally(){
    cout << "I am the constructor!" << endl;
}

void Sally::printCrap(){
    cout << "############" <<endl;
}

Sally::~Sally(){
    cout << "I am the DESTRUCTOR!" << endl;
}