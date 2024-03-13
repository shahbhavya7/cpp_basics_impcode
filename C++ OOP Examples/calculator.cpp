// Calculator class implementation
#include<iostream>
#include<cmath>
using namespace std;

class SimpleCalculator{
        int a,b;

    public:
        void getNumbersSimple(){
            cout<<"Enter the value of a"<<endl;
            cin>>a;
            cout<<"Enter the value of b"<<endl;
            cin>>b;
        }
        void SimpleOperations(){
            cout<<"The sum of the inputs is " <<a+b<<endl;
            cout<<"The Difference of the inputs is " <<a-b<<endl;
            cout<<"The Product of the inputs is " <<a*b<<endl;
            cout<<"The Quotient of the inputs is " <<a/b<<endl;
        }
};

class ScientificCalculator{
        int a,b;
    public:
        void getNumbersScientific(){
            cout<<"Enter the value of a"<<endl;
            cin>>a;
            cout<<"Enter the value of b"<<endl;
            cin>>b;
        }
        void ScientificOperations(){
            cout<<"The cosine of the a input is " <<cos(a)<<endl;
            cout<<"The Sine of the b input is " <<sin (b)<<endl;
            cout<<"The Square of the a input is " <<pow (a,2)<<endl;
            cout<<"The Square Root of b input is " <<sqrt (b)<<endl;
        }
};

class HybridCalculator : public SimpleCalculator , public ScientificCalculator{

};


int main(){
    HybridCalculator calc;
    calc.getNumbersSimple(); 
    calc.SimpleOperations();
    calc.getNumbersScientific();
    calc.ScientificOperations();
    return 0;
}
