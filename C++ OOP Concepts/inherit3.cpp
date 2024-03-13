// Multilevel Inheritance

#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int a);
    void get_roll_number(void);
};

void Student ::set_roll_number(int a)
{
    roll_number = a;
}
void Student ::get_roll_number()
{
    cout << "The roll number is " << roll_number << endl;
}

class Exam : public Student // Here we are inheriting student class publically so that the protected members of the student 
//class will act as protected members of the exam class and we can further inherit them in the derived class as protected members ahead.
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float , float);
    void get_marks(void);
};

void Exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void Exam ::get_marks()
{
    cout << "The marks obtained in maths are " << maths << endl;
    cout << "The marks obtained in physics are " << physics << endl;
}

class Result : public Exam // Here we are inheriting roll_number, maths and physics as protected members of the result class from the exam class and student class.
{
    float percentage;
    public:
    void display_result()
    {
        get_roll_number();
        get_marks();
        cout<<"Your result is "<<(maths+physics)/2<<"%"<<endl;
    }
};

int main()
{
    Result Bhavya;
    Bhavya.set_roll_number(420);
    Bhavya.set_marks(94.0, 90.0);
    Bhavya.display_result();
    return 0;
}