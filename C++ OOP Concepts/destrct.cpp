// Destructor in C++

#include<iostream>
using namespace std;

int count = 0;

class num{
    public:
    num(){
        count++;
        cout<<"This is the time when constructor is called for object number "<<count<<endl;
    }
    ~num(){
        cout<<"This is the time when my destructor is called for object number "<<count<<endl;
        count--;
    }
};
    // Destructor is a member function which destructs or deletes an object , it is called when the scope/block of an object ends 
    // it frees the memory that was allocated to the object 
int main(){

    cout<<"We are inside our main function"<<endl; // Constructor is called for n1 as we enter the main function
    cout<<"Creating first object n1"<<endl;
    num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl; // Constructor is called for n2 and n3 as we enter the block
        num n2, n3;
        cout<<"Exiting this block"<<endl; // Destructor is called for n2 and n3 as we exit the block
    }
    cout<<"Back to main"<<endl;
    // Destructor is called for n1 as we exit the main function
    return 0;
}