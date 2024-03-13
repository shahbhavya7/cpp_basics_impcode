// Friend function with two classes

#include <iostream>
using namespace std;

class Y; // Forward declaration as add() is using Y in its parameter in x class

class X
{
    int data;

public:
    void setValue(int value)
    {
        data = value;
    }
    friend void add(X, Y); // Declaration of the friend function
};

class Y
{
    int num;

public:
    void setValue(int value)
    {
        num = value;
    }
    friend void add(X, Y); // Declaration of the friend function
};

void add(X o1, Y o2)
{
    cout << "Summing data of X and num of Y gives me " << o1.data + o2.num << endl;
}

int main()
{   
    X a1;
    Y b1;
    a1.setValue(3);
    b1.setValue(5);
    add(a1, b1);

    return 0;
}