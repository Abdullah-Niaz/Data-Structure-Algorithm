#include <iostream>
using namespace std;

int sum(int n ){
    return n*(n + 1 )/2;
};

int main(){
    int val;
    cout<<"Enter the Value to Evaluate: ";
    cin>>val;

    int result = sum(val);
    cout<<"Result: "<<result;
    return 0;
}