#include "Sally.h"
#include <iostream>
using namespace std;
int main(){
    Sally bing;
    bing.printCrap();

    cout << "I am bing!" << endl;
    cout << endl;

    Sally *ai = &bing;
    cout << "I am ai!" << endl;

    ai->printCrap();
    cout << "I am add!" << endl;
}