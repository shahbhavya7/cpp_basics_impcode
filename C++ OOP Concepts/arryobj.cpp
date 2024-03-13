// Array of Objects 
#include<iostream>
using namespace std;

class employee{
    int id;
    int salary;
    public:
    void setid(void){
        cout<<"Enter the id of the employee"<<endl;
        cin>>id;
    }
    void getid(void){
        cout<<"The id of the employee is "<<id<<endl;
    }
};

int main(){
    employee facebook[4]; // Array of objects
    for (int i = 0; i < 4; i++)
    {
        facebook[i].setid();
        facebook[i].getid();
    }
    return 0;
}