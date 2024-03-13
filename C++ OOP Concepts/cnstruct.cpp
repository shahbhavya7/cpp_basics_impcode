// Introduction to Constructors in C++

#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
        Complex(void); // Constructor declaration 
        void printNumber(void){
            cout << "Your number is " << a << " + " << b << "i" << endl;
        }
};

Complex::Complex(void){ // This is a default constructor as it takes no parameters
    a = 0;
    b = 0;
}

int main(){
    Complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    return 0;
}