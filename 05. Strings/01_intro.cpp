#include <iostream>
using namespace std;

int main(){
    char a[] = {'a','b','b','a','s','\0'};
    cout<<a<<endl;
    cout<<sizeof(a)<<endl;

    string b = "abbas";
    cout<<b<<endl;
    cout<<sizeof(b);


    // char c[10];
    // cout<<endl<<"Enter the Char: ";
    // cin>>c;
    // cout<<c<<endl;


    string c;
    cout<<"Enter String: ";
    // cin>>c;
    getline(cin,c);
    cout<<"String is: "<<c;

    return 0;
}