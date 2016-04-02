#include <iostream>
using namespace std;

int main() {
    const int ci = 3;
    int i = 2;
    const int *pc;

    const_cast<int &>(ci) = 6;
    
    pc = &i;
    cout << "*pc = " << *pc << endl;

    pc = &ci;
    cout << "*pc = " << *pc << endl;
    int ss = 40;
    pc = &ss;
        cout << "*pc = " << *pc << endl;

}