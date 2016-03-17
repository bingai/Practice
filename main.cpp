#include <iostream>

using namespace std;

void printArray(int theArray[], int sizeOfArray){
    for (int i = 0; i < sizeOfArray; i++)
        cout << theArray[i]<<endl;
}

void printArray(float theArray[], int sizeOfArray){
    for (int i = 0; i < sizeOfArray; i++)
        cout << theArray[i]<<endl;
}

int main()
{
    {int aa[2][7] = {{0, 1, 2, 3, 4, 5, 6},{0, 1, 2, 3, 4, 5, 6}};
    float bb[9] = {0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8};
    //printArray(aa, 7);
    printArray(bb, 9);
    for (int row = 0; row < 2; row++)
        for (int column = 0; column < 7; column++)
            cout << aa[row][column] << endl;}
        
}
