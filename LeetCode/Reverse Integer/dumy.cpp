#include <iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cout<<"Enter a,b,c,d: "
    if( a  > b || a > c || a > d){
        cout<<"A is Greater : "<<a <<endl;
    }
    else if(b > c || b > d){
        cout<<"B is Greater: "<<b<<endl;
    }
    else if(c > d ){
        cout<<"C is Greater: "<<c<<endl;
    }
    else{
        cout<<"D is Greater: "<<d;
    }
    return 0;
}