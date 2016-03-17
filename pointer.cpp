#include <iostream>

using namespace std;
void passByValue(int x);
void passByReference(int *y);
int main()
{
    int bing[5] = {0,1,2,3,4};
    int *bp0 = &bing[0];
    int *bp1 = &bing[1];
    int *bp2 = &bing[2];
    int *bp3 = &bing[3];
    int *bp4 = &bing[4];

    cout << "bp0 is at " << bp0 << " with value "<<*bp0<<endl;
    cout << "bp1 is at " << bp1 << " with value "<<*bp1<< endl;
    cout << "bp2 is at " << bp2 << " with value "<<*bp2<< endl;
    cout << "bp3 is at " << bp3 << " with value "<<*bp3<< endl;
    cout << "bp4 is at " << bp4 << " with value "<<*bp4<< endl;
    cout << endl;
    
    bp0 += 1;
    cout << "bp0 now is at " << bp0 << endl;
    cout << "bp0 is at " << bp0 << " with value "<<*bp0<<endl;
    cout << "bp1 is at " << bp1 << endl;
    cout << "bp1 is at " << bp1 << " with value "<<*bp1<<endl;




}