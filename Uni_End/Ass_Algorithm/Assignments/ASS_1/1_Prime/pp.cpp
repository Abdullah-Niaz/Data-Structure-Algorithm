#include <iostream>
using namespace std;

int main(){
    int a  = 13;
    int count = 0;
    for (int i = 1; i <= a; i++)
    {
        if(a % i  == 0 ){
            count++;
            cout<<"At :" <<i<<endl;
        }
    }
    if(count == 2){
        cout<<"Prime no";
    }
    else{
        cout<<"Not Prime";
    }
    
    return 0;
}