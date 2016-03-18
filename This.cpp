#include <iostream>
#include "This.h"

using namespace std;

This::This(int num)
:h(num)
{

}
void This::printCrap(){
    cout << "h = " << h << endl;
    cout << "this->h = " << this->h << endl;
    cout << "(*this).h =" << (*this).h << endl;
}