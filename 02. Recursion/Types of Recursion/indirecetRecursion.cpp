#include <iostream>
using namespace std;


// prototypes
int A(int n );
int B(int n);


int main(){
    int val = 20;
    int result = A(val);
    cout<<"\nResult is: "<<result;
    return 0;
}


// Defination of functions #6, #7
int A(int n)
{
    if (n > 0)
    {
        printf("\n A %d: ", n);
        B(n - 1);
    }
};
int B(int n)
{
    if (n > 1)
    {
        printf("\n B %d: ", n);
        A(n / 2);
    }
};