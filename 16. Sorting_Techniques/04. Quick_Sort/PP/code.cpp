#include <iostream>
using namespace std;

void Swap(int *x , int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

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
        }while(A[j] > pivot);

        if (i < j ){
            Swap(&A[i], &A[j]);
        }
    }while(i < j);
    Swap(&A[l],&A[j]);// placing the  pivot at its correct position
    return j;
}

void QuickSort( int A[] , int l , int h){
    int j;
    if ( l < h ){
        j = partition(A, l, h);
        // It then recursively calls QuickSort for the sub-array to the left of the pivot (from l to j), and for the sub-array to the right of the pivot (from j+1 to h).
        QuickSort(A,l,j);
        QuickSort(A,j+1,h);
    }
}

int main()
{
     int A[] = {15,4,6,10,2,16,1};
    int n   = sizeof(A)/sizeof(A[0]);

    cout<<"Unsorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout<<A[i] << " ";
    }
    QuickSort(A, 0, n);
    cout<<"\nSorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout<<A[i] << " ";
    }

    return 0;
}