// Friend function in C++

#include<iostream>
using namespace std;

class Complex{
    int a, b; // a is the real part and b is the imaginary part
    public:
    void setNumber(int n1, int n2){  // arguements are n1 and n2 , n1 is the real part and n2 is the imaginary part 
        a = n1;
        b = n2;
        // Here a and b are used in two different function one is setNumber and other is printNumber
    }
    friend Complex sumComplex(Complex o1, Complex o2); // This is the declaration of the friend function allowing it to access the private members of the class
    void printNumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl; // This will print the real and imaginary part of the complex number
    }   
};

Complex sumComplex(Complex o1, Complex o2){ // o1 and o2 are the complex numbers whose real and imaginary part will be added and stored in o3
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b)); // Here, o1.a + o2.a is the real part and o1.b + o2.b is the imaginary part setnumber is called to set the real and imaginary part of the complex number
    // o3 transfers the sum of o1 and o2 to setNumber , n1 = o1.a + o2.a, n2 = o1.b + o2.b
    // we pass the sum of real and imaginary part of o1 and o2 to setNumber function because we are not allowed to access private members of class directly in main function
    // we have do this inside function because we are not allowed to access private members of class directly in main function
    return o3;
}


int main(){
    Complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNumber();
    c2.setNumber(5, 8);
    c2.printNumber();
    sum = sumComplex(c1, c2); // c1 and c2 are passed as arguments o1 and o2 to the function sumComplex
    sum.printNumber();

    return 0;
}