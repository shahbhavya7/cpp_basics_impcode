// Single Inheritance

#include<iostream>
using namespace std;

class Employee{
    public: 
        int id;
        int salary;
        Employee(int inputId){ // Constructor which take inputId as input
            id = inputId;
            salary = 34; // Default salary
        }
        Employee(){}; // Default constructor required for Programmer class
};

class Programmer : Employee{
    public:
        Programmer(int inputId){
            id = inputId;
        }
        int languageCode = 9;
        void getData(){
            cout<<id<<endl;
        }
};

int main(){
    Employee harry(1), rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    Programmer skillF(10);
    cout<<skillF.languageCode<<endl;
  //  cout<<skillF.id<<endl; // This will throw an error as id is private in base class we haven't inherited it as public
    skillF.getData(); // id is not accessible directly as it is private in base class
    return 0;
}