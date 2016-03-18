#include "Sally.h"
#include <iostream>
using namespace std;
 
/*Sally::Sally(int a, int b) : regVar(a), constVar(b){
    cout << "I am the constructor" << endl;
}*/
Sally::Sally(int a, int b) : constVar(b){
    regVar = a;
    cout << "I am the constructor" << endl;
}

void Sally::print(){
    cout << "regVar is " << regVar << endl;
    cout << "constVar is " << constVar << endl;
}

Sally::~Sally(){
    cout << "I am the DESTRUCTOR!" << endl;
}