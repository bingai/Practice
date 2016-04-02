//###############################
/*
Compiler silently writes 4 functions if they are not explicitly declared:
1. Copy constructor;
2. Copy assignment Operator;
3. Destructor;
4. Default constructor (only if there is no constructor declared)
*/

class dog{};

class dog{
public:
    dog(const dog& rhs) {...};  // Member by member initialization;
    dog& operator = (const dog& rhs) {...}; // Member by member copy;
    dog() {...}; // 
    ~dog() {...}; //
};