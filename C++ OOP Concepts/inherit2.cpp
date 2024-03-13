// Inheritance in C++ to access the private members of the base class

#include<iostream>
using namespace std;

class Base{
    int data1; // Private member
    public:
        int data2;
        void setData();
        int getData1();
        int getData2();
};
void Base :: setData(){
    data1 = 10;
    data2 = 20;
}
int Base :: getData1(){
    return data1;
}
int Base :: getData2(){
    return data2;
}

class Derived : public Base{
    int data3;
    public:
        void process();
        void display();
};
void Derived :: process(){
    data3 = data2 * getData1(); // Here we are not using data1 directly because it is private member of Base class so we access it via getData1() function as it is public member of Base class
}
void Derived :: display(){
    cout<<"Value of data1 is "<<getData1()<<endl; // Here we are not using data1 directly because it is private member of Base class so we access it via getData1() function as it is public member of Base class
    cout<<"Value of data2 is "<<data2<<endl;
    cout<<"Value of data3 is "<<data3<<endl;
}


int main(){
    Derived der;
    der.setData(); // setData function is public member of Base class so we can access it directly
    der.process(); // process function is public member of Derived class so we can access it directly
    der.display();  // display function is public member of Derived class so we can access it directly
    return 0;
}