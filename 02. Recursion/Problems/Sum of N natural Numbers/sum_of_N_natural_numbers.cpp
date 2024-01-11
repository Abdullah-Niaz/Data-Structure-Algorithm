#include <iostream>
using namespace std;

int sum(int n){
    if(  n == 0 ){
    return 0;
    }
    else{
        return sum( n - 1)  + n;
    }
};

int main(){

    int val;
    cout<<"Enter the Value to Evaluate Sum: ";
    cin>>val;

    int result = (val*(val + 1 )/2);
    cout<<"Value of Result is with formula: "<<result;

    result = sum(val);

    cout<<"Value of Result is: "<<result;
    return 0;
}