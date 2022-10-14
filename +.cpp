// Operator overloading of '+' operator
// ADDITION OF COMPLEX NUMBER--------->>>>
#include <iostream>
using namespace std;

class Add
{
    int x, y;

public:
    void setData(int a, int b)
    {
        x = a;
        y = b;
    }
    void showData()
    {
        cout << "We have to perform operation on " << x << "+" << y << "i " << endl;
    }
    Add operator+(Add t)
    {
        Add temp;
        temp.x = x + t.x;
        temp.y = y + t.y;
        return temp;
    }
};

int main()
{
    Add a1, a2, a3;
    a1.setData(5, 3);
    a2.setData(10, 4);
    a1.showData();
    a2.showData();
    a3 = a1 + a2;
    a3.showData();
    return 0;
}