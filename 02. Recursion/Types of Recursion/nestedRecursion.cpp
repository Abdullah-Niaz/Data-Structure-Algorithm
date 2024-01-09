#include <iostream>
using namespace std;

int fun(int n ){
    if ( n > 100 ){
        return n - 10 ;
    }
    else{
        return fun(fun(n + 11));
    }
};

int main(){
    int val = 95;
    int result = fun(val);
    cout<<"Result of N: "<<result;
    return 0;
}