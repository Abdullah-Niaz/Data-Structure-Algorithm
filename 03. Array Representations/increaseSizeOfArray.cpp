#include <iostream>
using namespace std;

int main(){
    //java 
    // int n = new int[5];
    // int ptrn = new int[10];


    // C++
    int *p;
    //  = new int[5];
    int *ptr; 
    // = new int[10];

    // C
    p = (int *)(malloc(5 * sizeof(int)));
    ptr = (int *)(malloc(10 * sizeof(int)));


    cout<<"Enter the Five Element: ";
    for (int i = 0; i < 5; i++)
    {
        cin>>p[i];
    }

    for (int i = 0; i < 5; i++)
    {
        ptr[i] = p[i];
    }
    
    for (int i = 0; i < 10; i++)
    {
        if(i == 5 ){
            cout<<"Now, you will get dumy values";
            // return 0;
        }
        cout<<p[i]<<endl;
    }
    p = ptr;
    ptr = nullptr;
    
    
    return 0;
}