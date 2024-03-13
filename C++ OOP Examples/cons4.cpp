// Constructor of 2 types: Default and Parameterized 

#include<iostream>
using namespace std;

class BankDeposit{
    int principal;
    int years;
    float interestRate;
    float returnValue;
    public:
    BankDeposit(){} // Empty Constructor is required to create objects without passing any arguments if not then it will give error
    BankDeposit(int p, int y, float r); // this is a parameterized constructor , but r is already in float
    BankDeposit(int p, int y, int r); // this is a parameterized constructor , but r is in percentage
    void show();
};

BankDeposit::BankDeposit(int p, int y, float r){ // Here r is already in float
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

BankDeposit::BankDeposit(int p, int y, int r){ // if r is in percentage , then we need to convert it into float , so we need to typecast it
    principal = p;
    years = y;
    interestRate = float(r)/100; // r is integer, so typecasting , if interest rate is 10% , then r=10
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

void BankDeposit::show(){
    cout<<endl<<"Principal amount was "<<principal
        <<", Return value after "<<years
        <<" years is "<<returnValue<<endl;
}


int main(){
    BankDeposit bd1, bd2, bd3; // Creating objects of class BankDeposit
    int p, y;
    float r; // r is interest rate in decimal
    int R; // R is interest rate in percentage

    cout<<"Enter the value of p, y and r"<<endl;
    cin>>p>>y>>r;
    bd1 = BankDeposit(p, y, r); // Object bd1 is created and initialized using parameterized constructor
    bd1.show();

    cout<<"Enter the value of p, y and R"<<endl;
    cin>>p>>y>>R;
    bd2 = BankDeposit(p, y, R); // Object bd2 is created and initialized using parameterized constructor
    bd2.show();
    return 0;

    // here though b3 has no values the program will not give error as we have created an empty constructor which will be called when no values are passed
    // This is dynamic initialization of objects means initial values of an object are assigned at runtime not at compile time 
}