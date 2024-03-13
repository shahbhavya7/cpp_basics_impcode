// Friend function and friend class

#include<iostream>
using namespace std;

class complex; // Forward declaration , it is used to tell the compiler that we are going to declare a class named complex later in the code
class calculator{ // This is the class calculator , this entire class is a friend of the class complex
    public:
    int sumReal(complex, complex); // we are only declaring the function sumReal here and we are defining it outside the class as objects o1 and o2 are not created yet

};

class complex{
    int a, b;
   // friend int calculator::sumReal(complex, complex); // This is the declaration of the friend function allowing it to access the private members of the class
    friend class calculator; // This is the declaration of the entire friend class allowing it to access the private members of the class
    public:
    void setNumber(int n1, int n2){
        a = n1;
        b = n2;
    }
    void printNumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

int calculator::sumReal(complex o1, complex o2){  // we will only use the real part of the complex number
    return (o1.a + o2.a); // we have access to a and b as the function sumReal is a friend of the class complex
}


int main(){
    complex o1, o2;
    o1.setNumber(1, 4); 
    o1.printNumber();
    o2.setNumber(5, 8);
    o2.printNumber();
    calculator calc; // calc is the object of the class calculator
    int res = calc.sumReal(o1, o2); // o1 and o2 are passed as arguments to the function sumReal and the sum of the real part of o1 and o2 is stored in res
    cout<<"The sum of real part of o1 and o2 is "<<res<<endl;

    return 0;
}