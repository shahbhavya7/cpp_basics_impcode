// Copy constructor 

#include<iostream>
using namespace std;

class Number{
    int a;
    public:
    Number(){ // When no value is passed, then a is assigned 0
        a = 0;
    }
    Number(int num){ // When a value is passed, then a is assigned that value
        a = num;
    }
    // When no copy constructor is found, compiler supplies its own copy constructor
    Number(Number &obj){ // Copy constructor
        cout<<"Copy constructor called!!!"<<endl;
        a = obj.a; // Copying the value of a from object obj to object a
     }
    void display(){
        cout<<"The number for this object is "<<a<<endl;
    }
};

// Copy constructor is a constructor which initializes an object using another object of the same class it is used to copy the values of data members of one object to another object

int main(){

    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    Number z1(z); // Copy constructor invoked as number z is passed to z1 which is condition for copy constructor 
    z1.display();

    z2 = z; // Copy constructor not called as z2 is already created and initialized above
    z2.display();

    Number z3 = z; // Copy constructor invoked as number z3 is created in the same line and z is passed to z3 which is condition for copy constructor
    return 0;
}