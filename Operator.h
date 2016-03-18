#ifndef OPERATOR_H
#define OPERATOR_H

class Operator{
public:
   // int num;
    long num;
    Operator();
    //Operator(int);
    Operator(long);
    Operator operator+(Operator);
    Operator operator*(Operator);
    Operator operator/(Operator);

};

#endif