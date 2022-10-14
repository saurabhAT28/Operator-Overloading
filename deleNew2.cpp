// ------>>>>GLOBAL SCOPE<<<<<----------aaaaaaaaaaa
#include <iostream>
using namespace std;

void *operator new(size_t size){
    cout<<"Overload new operator: "<<size<<endl;
    void *p=malloc(size);
    return p;
}
void operator delete(void *p){
    cout<<"Overload Delete Operator: "<<endl;
    free(p);
}


int main(){
    int *x=new int[10];
    delete x;
    // return 0;
}