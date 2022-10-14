// Overloading of insertion and exertion operator
#include <iostream>
using namespace std;

class Student
{
    int id;
    char name[25];

public:
    friend void operator>>(istream &input, Student &s)
    {
        cout << "Enter the student id and name" << endl;
        input >> s.id;
        input >> s.name;
    }
    friend void operator<<(ostream &output, Student &s)
    {
        output << "Id: " << s.id << " Name: " << s.name;
    }
};

int main()
{
    Student s;
    cin >> s;
    cout << s;
    return 0;
}







// ostream &operator <<(ostream &output, Person &p)
// {
//     output<<"first_name="<<p.get_first_name()<<","<<"last_name="<<p.get_last_name();
//     return output;
// }