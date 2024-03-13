// Introduction to classes in C++

#include<iostream>
using namespace std;

class employee{
    private:
        int a, b, c;
    public:
        int d, e;
        void setData(int a1, int b1, int c1); // Declaring  set data function now we will define it outside the class (optional)
        void getData(){ // getData function is defined with which we print the values of a, b and c
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }
};  

void employee :: setData(int a1, int b1, int c1){ // Defining the set data function outside the class   
    a = a1; // Assigning the value of a1 to a 
    b = b1; // Assigning the value of b1 to b
    c = c1; // Assigning the value of c1 to c 
}

int main(){
    employee harry;
    // harry.a = 134; -->This will throw error as a is private
    harry.d = 34; // This is allowed as d is public
    harry.e = 89;
    harry.setData(1,2,4); // We are calling the setData function to set the values of a, b and c
    harry.getData(); // We are calling the getData function to print the values of a, b and c
    return 0;
}