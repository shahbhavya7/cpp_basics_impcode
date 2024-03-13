// Ambiguity Resolution
#include<iostream>
using namespace std;

class Base1{
    public:
        void greet(){
            cout<<"How are you?"<<endl;
        }
};

class Base2{
    public:
        void greet(){
            cout<<"Kaise ho?"<<endl;
        }
};

class Derived : public Base1, public Base2{
    int a;
    public:
        void greet(){
            Base2 :: greet();
        }
};

// Ambiguity 2

class B{
    public:
        void say(){
            cout<<"Hello World"<<endl;
        }
};

class D : public B{
    public:
        void say(){
            cout<<"Hello my beautiful world"<<endl;
        }
};

// Here as both base and derived class have same function named say, but when say is called from derived class 
//it will override the say function of base class and will print "Hello my beautiful world" instead of "Hello World"

int main(){
    Derived d;
    d.greet();
    return 0;
}