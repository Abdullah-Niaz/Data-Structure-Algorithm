#include <iostream>
using namespace std;

void insertionSort(int A[], int sizeA){
    for (size_t i = 1; i < sizeA; i++)
    {
        int key = A[i];
        int j = i - 1;
        while (j >= 0 && A[j] > key)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
        
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
    insertionSort(A, n);
    cout<<"\nSorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout<<A[i] << " ";
    }
    
    return 0;
}