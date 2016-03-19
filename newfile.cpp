# include <iostream>
# include <fstream>
//# include <string>
using namespace std;

int main() {
    ofstream bingFile("player.txt");
    cout << "Enter player ID, Name, and Money " << endl;
    cout << "press Ctrl+Z to quit!" << endl;
    int idNumber;
    string name;
    double money;
    while(cin >> idNumber >> name >> money){
        bingFile << idNumber  << " "<< name <<" "<< money << endl;

    }
}