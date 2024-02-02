#include <iostream>
using namespace std;

int max(int a[],int size){
    int max_of = 0;
    for (int i = 0; i < size; i++)
    {
        if(a[i] > max_of){
            max_of = a[i];
        }
    }
    return max_of;
};

int main(){
    int a[]  = {1,2,3,4,5,6,7,8,10,50};
    int m = max(a,8);
    cout<<m;
    return 0;
}