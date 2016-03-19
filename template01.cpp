# include <iostream>
using namespace std;

template <class First, class Second>
Second smaller(First a, Second b){
    return (a < b ? a : b);
}

int main() {
    int x = 89;
    double y =10.345;
    cout << smaller(x,y) << endl;
}