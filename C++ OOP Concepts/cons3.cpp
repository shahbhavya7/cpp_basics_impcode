// Defining a constructor with default values

#include<iostream>

class simple{
    int data1;
    int data2;
    public:
    simple(int a, int b=9){
        data1 = a;
        data2 = b;
    }
    void printData();
};

void simple::printData(){
    std::cout<<"The value of data1 is "<<data1<<" and the value of data2 is "<<data2<<std::endl;
}


using namespace std;
int main(){
    simple s1(1, 4); // This will call the constructor with 2 arguments
    s1.printData();

    simple s2(3); // This will call the constructor with 1 argument and the default value of 9 will be used for data2
    s2.printData();

    return 0;
}