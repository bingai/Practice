# include <iostream>
# include "Operator.h"
using namespace std;

Operator::Operator()
{

}

/*Operator::Operator(int a){
    num = a;
}*/

Operator::Operator(long a){
    num = a;
}

Operator Operator:: operator+(Operator aoo){
    Operator brandNew;
    brandNew.num = num + aoo.num;
    return (brandNew);
}

Operator Operator::operator*(Operator aoo){
    Operator brandNew;
    brandNew.num = num * aoo.num;
    return (brandNew);
}

Operator Operator::operator/(Operator aoo){
    Operator brandNew;
    brandNew.num = num / aoo.num;
    return (brandNew);
}

