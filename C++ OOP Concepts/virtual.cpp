// Virtual Base Class
#include<iostream>
using namespace std;

class Student{
    protected:
        int roll_number;
    public:
        void set_number(int a)
        {
            roll_number = a;
        }
        void print_number(){
            cout<<"Your Roll Number is :"<<roll_number<<endl;
        }

};

// Declaring A as virtual class by B and C

class Test : virtual public Student{
    protected:
        float maths,physics;
    public:
        void set_marks(float m1 , float m2){
            maths = m1;
            physics = m2;
        }
        void print_marks(){
            cout<<"Your Result is Here"<<endl
                <<"Maths :"<<maths<<endl
                <<"Physics :"<<physics<<endl;
        }

};

class Sports : virtual public Student{
    protected:
        float score;
    public:
        void set_score(float sc){
            score = sc;
        }
        void print_score(){
            cout<<"Your PT score is :"<<score<<endl;
        }
};

class Result : public Test , public Sports{ // Result is derived from Test and Sports
    private:
        float total;
    public:
        void display(void){
            total = maths + physics + score;
            print_number();
            print_marks();
            print_score();
            cout<<"Your total score is :"<<total<<endl;
        }
};

int main(){
    Result Bhavya;
    Bhavya.set_number(777);
    Bhavya.set_marks(91.0,97.0);
    Bhavya.set_score(9);
    Bhavya.display();
    return 0;
}