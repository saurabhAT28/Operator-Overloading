// ------>>>>LOCAL SCOPE<<<<<----------aaaaaaaaaaa
#include <iostream>
using namespace std;

class Test{
    int x;
    public:
        Test(int x){
            this->x=x;
        }
        Test (){
            this->x=0;
        }
        void *operator new(size_t size){
            cout<<"Overload new operator: "<<size<<endl;
            void *p=malloc(size);
            return p;
        }
        void operator delete(void *p){
            cout<<"Overload Delete Operator: "<<endl;
            free(p);
        }
};

int main(){
    Test *t=new Test();
    delete t;
    int *x=new int;
    delete x;

    return 0;
}