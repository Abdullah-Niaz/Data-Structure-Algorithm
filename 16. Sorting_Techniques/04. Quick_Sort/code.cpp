#include <iostream>
using namespace std;

int partition(int A[], int l, int h){
    // l = 0 , h = n - 1
    int pivot = A[l]; // selecting first element, to place it on it's actual positionl
    int i = l; // starting position
    int j = h;  // ending position

    do{
        do{
            i++;
        } while(A[i] <= pivot);

        do{
            j--;
        }while(A[j] < pivot);

        if (i < j ){
            Swap(&A[i], &A[j]);
        }
    }while(i < j);
    Swap(&A[l])  , &A[j] ;// placing the  pivot at its correct position
    return j;
}

void QuickSort( int A[] , int l , int h ){
    int j;
    if ( l < h ){
        j = partition(A, l, j);
        QuickSort(A,l,j);
        QuickSort(A,j+1,h);
    }
}

int main(){
    int A[] = {11,13,7,12,16,8,24,5,19,3};
    int n  sizeof(A)/sizeof(A[0]);

    cout<<"Unsorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout<<A[i];
    }
    QuickSort(A, 0, n-1);
    cout<<"Sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout<<A[i];
    }
    
    return 0;
}