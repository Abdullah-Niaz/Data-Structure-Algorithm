#include <iostream>
using namespace std;

int main(){
    int *p = new int[5];
    p[0] = 10;
    p[1] = 20;
    p[2] = 30;
    p[3] = 40;
    p[4] = 50;
    int *ptr = new int[10];
    for (int i = 0; i < 5 ; i++)
    {
        ptr[i] = p[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout<<p[i]<<endl;
    }
    
    p = NULL;
    p = ptr;
    ptr = NULL;
    
    
    return 0;
}