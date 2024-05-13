#include <iostream>
using namespace std;

void SwapA(int *x, int *y ){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void BubbleSort(int A[] , int n ){
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if( A[j] > A[j + 1 ] ){
                SwapA(&A[j] , &A[j + 1]);
            }
        }
        
    }
    
}


void Insertion(int A[], int n ){
    for (int i = 1; i < n; i++)
    {
        int key = A[i];
        int j = i - 1;
        while (j >= 0 && A[j] > key)
        {
            A[j + 1 ] = A[j];
            j--;
        }
        A[j + 1 ] = key;
    }
    
}


void Selection(int A[], int n){
    int i,j,k;
    for (i = 0; i < n; i++)
    {
        for ( j = k = i; j < n; j++)
        {
            if(A[j] < A[k]){
                k = j ;
            }
        }
        SwapA(&A[i], &A[k]);
    }
    
}



void Shell(int A[] , int n ){
    int gap, i , j;
    for(gap = n / 2 ; gap > 0 ; gap = gap / 2 ){
        for(i = gap ; i < n ; ++i){
            int key = A[i];
            j = i - gap;
            while (j >= 0 && A[j] > key)
            {
                A[j + gap ] = A[j];
                j = j - gap;
            }
            A[j + gap] = key;
        }
            
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
    Selection(A, n);
    cout<<"\nSorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout<<A[i] << " ";
    }
    
    return 0;
}


