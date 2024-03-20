#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4};
    int *ptr = arr;
    cout<<"Base Addres: "<<arr<<endl;

    for (int i = 0; i < 3; i++)
    {
        cout<<"Value: "<<arr[i] <<" with Addres: "<<ptr <<endl;
        ptr +=1;
    }
    
}