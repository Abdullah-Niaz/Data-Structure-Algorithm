#include <iostream>
using namespace std;

int main(){
    int b = 20 ;
    int *ptr; // initilization
    ptr = &b; // declaration
    *ptr = 200;
    cout<<*ptr<<endl; // derefrencing
    int a[5] = {1,2,3,4,5};
    cout<<a[2]<<endl;
    cout<<2[a]<<endl;
    cout<<(*a + 2)<<endl;
    return 0;
}