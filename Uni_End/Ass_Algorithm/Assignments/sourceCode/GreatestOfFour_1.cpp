#include <iostream>
using namespace std;

int main(){
    int a = 51, b = 10, c = 15, d = 20;
    if( a > b){
        if(a > c ){
            if(a > d){
                cout<<"A is Greater: "<<a<<endl;
            }
        }
    }
    else if(b > c){
        if( b > d){
            cout<<"B is Greater: "<<b<<endl; 
        }
    }
    else if(c > d){
        cout<<"C is Greater: "<<c<<endl;
    }
    else{
        cout<<"D is Greater: "<<d<<endl;
    }
    return 0;
}