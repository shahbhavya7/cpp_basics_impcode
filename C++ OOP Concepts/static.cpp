// Static Data Members in C++

#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count; // This is a static variable which is common to all objects and is not the part of individual object. It is initialized to 0 by default.
    public:
    void setData(void){
        cout<<"Enter the id"<<endl;
        cin>>id;
        count++; // Increase the count whenever the id is entered which means a new employee is created
    }
    void getData(void){
        cout<<"The id of this employee is "<<id<<" and this is employee number "<<count<<endl;
    }
    static void getCount(void){ // Static function can only access static variables
        // cout<<id; // Throws an error as id is non-static
        cout<<"The value of count is "<<count<<endl;
    }
};

int Employee::count; // Default value is 0
int main(){
    Employee harry, rohan, lovish;
    // harry.id = 1;
    // harry.count = 1; // cannot do this as count is private
    harry.setData();
    harry.getData();
    Employee::getCount();
    rohan.setData();
    rohan.getData();
    Employee::getCount();
    lovish.setData();
    lovish.getData();
    Employee::getCount(); 
    return 0;
}