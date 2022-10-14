//[](ARRAY SUBSCRIPT OPERATOR) OVERLOADING------->>>>>

// POINTS----->>>>>
// 1.ASO can be used to check out of bound cases.
// 2.ASOncan not be friend function and others too(->,(),=).

#include <iostream>
using namespace std;

class Point{
    int arr[2];      //x->0,y->1
    public:
        Point(int x=0,int y=0){
            arr[0]=x;
            arr[1]=y;
        }
        void showData(){
            cout<<"x: "<<arr[0]<<" "<<"y: "<<arr[1]<<endl;
        }
        int & operator [] (int pos){
            if (pos==0)
                return arr[0];
            else if (pos==1)
                return arr[1];
            else
            {
                cout<<"Out of limit"<<endl;
                exit(0);
            }
            
        }
};

int main(){
    Point p1(3,4),p2,p3,p4;
    p1.showData();
    p2.showData();

    p3[0]=7;      //This lines show error without overloading
    p3[1]=8;      //This lines show error without overloading
    p3.showData();

    // Out of limit
    p4[1]=89;
    p4[2]=78;
    p3.showData();    //Doesnt work because code exit in above line

    return 0;
}