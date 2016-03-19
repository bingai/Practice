#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream bing;
    bing.open("test.txt");
    bing << "Bing is always the best! " << endl;
    bing << "Bing is always the best! " << endl;

    bing.open("test.txt");
}