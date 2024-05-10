#include <iostream>
using namespace std;


void Insertion(int A[], int size){
    // int key = A[0]; 
    for (int i = 0; i < size; i++)
    {
        int key = A[i]; 
        cout<<"Key: "<<key<<endl;   
        int j = i - 1;
        while ((j >= 0) && (A[j] > key))
        {
            A[j + 1] = A[j]; 
            cout<<"Key: "<<key<<endl;   
            j--; 
        }
        A[j + 1] = key;
            cout<<"Key: "<<key<<endl;   
    }
}

int main(){
    int A[] = {6,8,12,14,18,20,22,2};
    int n = sizeof(A) / sizeof(A[0]);



    cout<<"\nActual Array: ";
    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<< " ";
    }
    Insertion(A, n);
    cout<<"\nSorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout<<A[i] << " ";
    }
    
    return 0;
}