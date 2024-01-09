#include <iostream>
using namespace std;

int fun(int n ){
    if ( n > 0 ){
        cout<<("%d", n)<<endl;
        return (fun(n - 1) + n);
    }
    return 0 ;
};

int main(){
    int val = 10;
    int result = fun(val);
    cout<<"Value of Result is: "<<result;
    return 0;
}