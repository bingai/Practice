#include <algorithm> // copy, count, equal, fill
#include <cassert>   // assert
#include <cstddef>   // ptrdiff_t, size_t
#include <iostream>  // cout, endl
#include <string>    // string
#include <vector>    // vector


using namespace std;
void f(int p[3]){
    cout <<"--------f(p)-------" <<endl;
    cout << "++p = " << ++p <<endl;
    cout << "++p[0]= "<< ++p[0] << endl;
    cout << "++*p= "<< ++*p << endl;
    cout << "p[]= "<< p[0] <<" "<< p[1] <<" "<< p[2] <<" "<< p[3]<< endl;
    cout << "sizeof(p)="<<sizeof(p) <<endl;
    cout <<"--------f(p) end-------" <<endl;

}

void g (int* p) {
        cout <<"--------g(p)-------" <<endl;
cout << "++p = " << ++p <<endl ;
    cout << "++p[0] "<< ++p[0] << endl;
    cout << "++*p= "<< ++*p << endl;
        cout << "p[]= "<< p[0] <<" "<< p[1] <<" "<< p[2] << endl;

    cout << "sizeof(p)="<<sizeof(p) <<endl;
    cout <<"--------g(p) end-------" <<endl;
}


int main(){
    int a[] = {2,3,4};
    cout << "Original sizeof(a)="<<sizeof(a) <<endl <<endl;

    f(a);
    cout << endl;
    cout << "f(a): sizeof(a)="<<sizeof(a) <<endl <<endl;

    g(a);
    cout << endl;
    cout << "g(a): sizeof(a)="<<sizeof(a) <<endl <<endl;

    cout << "a[0]=" << a[0] <<endl;
    cout << "a[1]=" << a[1] <<endl;
    cout << "a[2]=" << a[2] <<endl;
    cout << "a[3]=" << a[3] <<endl;
    cout << "a[4]=" << a[4] <<endl;


 cout << "----------------" <<endl;

    {
    const size_t     s = 10;
    const int        v =  2;
    int* const a = new int[s];
    assert(sizeof(a) == 8);
    fill(a, a + s, v);
    int* const b = a;
    cout <<"a[1]= "<<a[1]<<endl;
    cout <<"&a[1]= "<<&a[1]<<endl;
    assert(&a[1] == &b[1]);
    int* const x = new int[s];
    copy(a, a + s, x);
    cout << "x[1] = " << x[1]<<endl;
    assert( a[1] ==  x[1]);
    assert(&a[1] != &x[1]);
    delete [] a;
    delete [] x;
    }

    {
    const size_t      s = 10;
    const int         v =  2;
          vector<int> x(s, v);
    assert(x.size() == s);
    assert(x[0]     == v);
    cout <<"x= "<< x[10] <<endl;

    vector<int> y(x);
    assert( x ==  y);
    assert(&x != &y);
    vector<int> z(2 * s, v);
    x = z;
    cout <<"z= "<< z[10] <<endl;
    assert( x ==  z);
    assert(&x != &z);
    }

    vector<int> myVector;
    myVector;


}