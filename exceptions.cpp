# include <iostream>
using namespace std;

int main() {
    try{
        int num1;
        cout << "Please input the first number: " << endl;
        cin >> num1;

        int num2;
        cout << "Please input the second number: " << endl;
        cin >> num2;

        if (num2 == 0){
            throw 100;
        }
        cout << num1/num2 << endl;


    }catch(...){
        cout << "Error happened!" << endl;
    }
        }