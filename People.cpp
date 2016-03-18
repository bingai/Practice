#include <iostream>
#include "Birthday.h"
#include "People.h"

using namespace std;

People::People(string x, Birthday bo)
:name(x), dateOfBirthday(bo)
{
    cout << "I am the People Constructor!" << endl;

}

void People::peopleInfo(){
    cout << name << " was born on ";
    dateOfBirthday.printDate();
}

People::~People(){
    cout << "I am the People DESTRUCTOR!" << endl;
}
