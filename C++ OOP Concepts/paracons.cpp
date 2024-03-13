// Parameterized Constructor

#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
        Complex(int ,int); // Constructor declaration 
        void printNumber(void){
            cout << "Your number is " << a << " + " << b << "i" << endl;
        }
};

Complex::Complex(int x,int y){ // This is a parameterized constructor as it takes 2 parameters
    a = x;
    b = y;
}


int main(){
    Complex a(4, 6); // Implicit call as we are passing parameters
    Complex b = Complex(5, 7); // Explicit call as we are passing parameters
    a.printNumber();
    b.printNumber();
    return 0;
}