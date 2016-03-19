# include <iostream>
# include <fstream>
using namespace std;

int main() {
    ifstream bingFile("player.txt");
    int id;
    string name;
    double money;

    while(bingFile >> id >> name >> money){
        cout << id << "," << name << "," << money << endl;
    }

}