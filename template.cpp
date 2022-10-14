#include <iostream>
using namespace std;

template<class T>
class Saurabh{
    public:
        T data;
        Saurabh(T a){
            data=a;
        }
        void display();
};
template<class T>
void Saurabh<T> :: display(){
    cout<<data<<endl;
}

void func(int a){
    cout<<"FUNCTION     "<<a<<endl;
}

template<class T>
void func(T a){
    cout<<"TEMPLATE OVERLOADING     "<<a<<endl;
}

int main(){
    func(4);    // Exact match takes the highest priority
    func(5.555);
    return 0;
}