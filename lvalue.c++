#include <iostream>

using namespace std;
int square(const int& i){return i*i;}

int main(){
    int i;
    int& r = i;
    cout <<"i = "<< i << endl;
    cout <<" r = " << r << endl;
    cout <<" &r = " << &r << endl;
    cout << "square(40) = " << square(40)<<endl;

}