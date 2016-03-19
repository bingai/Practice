# include <iostream>
using namespace std;

int main(){
    try{
        int momsAge = 50;
        int sonsAge =400;
        if (sonsAge >= momsAge){
            throw 100;
        }
    }catch(int x){
        cout << "son cannot be older than mom, ERROR NUMBER IS " << x << endl;
    }
}