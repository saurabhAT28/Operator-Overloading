// UNARY OPERATOR OVERLOADING------------>>>>>
// +   ,   -   ,   ++   ,   --
// POINTS--->>>>
// 1.Operator overloading works with {class/struct}.
// 2.Unary operator overloading needs only one operand

#include <iostream>
using namespace std;

class Point{
    int x;
    int y;
    public:
        Point(){
            x=0;
            y=0;
        }
        Point(int x,int y){
            this->x=x;
            this->y=y;
        }
        Point operator -(){
            return Point(-x,-y);
        }
        void showData(){
            cout<<"x: "<<x<<" "<<"y: "<<y<<endl;
        }
};

int main(){
    Point p1(4,5),p2,p3;
    p1.showData();
    p2.showData();

    p3=-p1;     //This shows error without overloading
    p3.showData();
    return 0;
}