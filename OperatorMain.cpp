# include <iostream>
# include "Operator.h"
using namespace std;

int main() {
    Operator a(3);
    Operator b(17);
    Operator c;
        Operator d;
    Operator e;

    c = a+ b;
    d = a*b;
    e = b/a;
    cout << c.num <<endl;
        cout << d.num <<endl;
    cout << e.num <<endl;

}