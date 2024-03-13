// Parameterized constructor with friend function with math function

#include<iostream>
#include<cmath>
using namespace std;


class Point{
    int x, y;
    friend class Distance;
    public:
         friend void distance(Point, Point);
        Point(int a, int b){ // Parameterized constructor
            x = a;
            y = b;
        }
        void displayPoint(){
            cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
        }
};

void distance(Point p, Point q){
    int distance = sqrt(pow(q.x - p.x, 2) + pow(q.y - p.y, 2));
    cout<<"The distance between the points is: "<<distance<<endl;
}

int main(){
    Point p(1, 1);
    p.displayPoint();
    Point q(4, 6);
    q.displayPoint();
    distance(p, q);
    return 0;
}