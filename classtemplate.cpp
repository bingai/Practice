# include <iostream>
using namespace std;

template <class T>
class Bing{
    T first, second;
public:
    Bing(T a, T b){
        first = a;
        second =b;
    }
    T bigger();
};

template <class T>
T Bing<T>::bigger(){
    return (first > second ? first : second);
};

int main(){
    Bing<double> bo(24.34,10);
    cout << bo.bigger() <<endl;
}