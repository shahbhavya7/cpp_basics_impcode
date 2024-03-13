// Constructor Overloading in C++
// Constructor overloading is a concept of having more than one constructor with different parameters list, in such a way so that each constructor performs a different task.

#include<iostream>
using namespace std;

class Complex{
    int a,b;
public:
    Complex(){ // Constructor-1 with no parameters - Default Constructor
        a = 0;
        b = 0;
    }
    Complex(int x, int y){ // Constructor-2 with 2 parameters - Parameterized Constructor
        a = x;
        b = y;
    }
    Complex(int x){ // Constructor-3 with 1 parameter - Parameterized Constructor
        a = x;
        b = 0;
    }
    void printNumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};


int main(){

    Complex c1(4, 6); // Constructor-2 is called here as we are passing 2 arguments
    c1.printNumber();

    Complex c2(5); // Constructor-3 is called here as we are passing 1 argument
    c2.printNumber();

    Complex c3; // Constructor-1 is called here as we are not passing any arguments
    c3.printNumber();

    // this calling of different constructors is known as constructor overloading , it is done automatically by the compiler as per the number of arguments passed
    return 0;
}