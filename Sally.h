#ifndef SALLY_H
#define SALLY_H

class Sally 
{
public:
    Sally(int a, int b);
    ~Sally();
    void print();
protected:
private:
    int regVar;
    const int constVar;
};

#endif