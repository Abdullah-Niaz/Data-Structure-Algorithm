#include <iostream>
using namespace std;

int main(){
    // int *p;

    // in C we use this way of creating dynamic memory in heap
    // p = (int *)malloc(5*sizeof(int)); 


    // in C++ we use this one 
    int *p = new int[5];cout<<"Enter the Elements of Array: ";
    for (int i = 0; i < 5; i++){cin>>p[i];}
    for (int i = 0; i < 5; i++){cout<<&p[i];cout<<p[i];}
    
    
    return 0;
}   