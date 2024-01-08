#include <iostream>
using namespace std;

int main(){
    // Refrence is another name of variable 
    // Used as an aliasing

    int a = 20;
    int &r = a;
    cout<<"A: "<<a<<endl;
    cout<<"R: "<<r<<endl;

    ++r;
    cout<<"A: "<<a<<endl;
    cout<<"R: "<<r<<endl;
    
    return 0;
}   