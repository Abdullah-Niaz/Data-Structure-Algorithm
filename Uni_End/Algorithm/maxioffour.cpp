#include <iostream>
using namespace std;

int main(){
    int a = 4, b = 5 , c = 6;

    if(a > b ){
        if(a > c){
            cout<<"A is Greater ";
        }
    }
    else if(b > c){
        cout<<"B is greater";
    }
    else{
        cout<<"C is Greater";
    }
    return 0;
}