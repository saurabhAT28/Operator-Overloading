// Overloading of bool operator
// < , > , ==
#include <iostream>
using namespace std;

class Number{
    int n;
    public:
    void read(){
        cout<<"Enter the number: ";
        cin>>n;
    }
    int operator <(Number x){
        if(n<x.n)
            return 1;
        else
            return 0;
    }
    int operator >(Number x){
        if(n>x.n)
            return 1;
        else
            return 0;
    }
    int operator ==(Number x){
        if(n==x.n)
            return 1;
        else
            return 0;
    }
};

int main(){
    Number n1,n2;
    n1.read();
    n2.read();
    if(n1<n2)
        cout<<"n1 is lesser than n2."<<endl;
    else 
        if(n1>n2)
            cout<<"n1 is greater than n2."<<endl;
        else  
            cout<<"Equal"<<endl;
    return 0;
}