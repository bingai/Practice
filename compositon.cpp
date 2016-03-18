#include <iostream>
#include "Birthday.h"
#include "People.h"

using namespace std;
int main(){
    Birthday birthObj(02,06,1985);
    People bingai("bing", birthObj);
    bingai.peopleInfo();    
}