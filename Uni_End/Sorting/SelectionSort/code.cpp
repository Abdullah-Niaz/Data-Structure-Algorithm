#include <iostream>
using namespace std;

void Swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void SelectionSort(int A[], int n){
    for(int i = 0 ; i < n - 1 ; ++i ){
        int j,k;
        for (j = k = i ; j < n; j++)
        {
            if(A[j] < A[k]){
                k  = j;
            }
        }
        Swap(&A[i], &A[k]);   
    }
};

int main(){
    int A[] = {8,3,5,8,4,2,7};
    int n = sizeof(A) / sizeof(A[0]);
    cout<<n;
    cout<<"sizeof "<<sizeof(A);
    cout<<"\nUnsorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<" ";
    }
    SelectionSort(A,n);
    cout<<"\nSorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<" ";
    }
    
    return 0;
}