#include <iostream>
using namespace std;


void merging(int A[], int l, int mid , int h){
    int i,j,k;
    int B[h+1];
    i = l , j = mid +1 , k = l;
    while (i <= mid && j <= h)
    {
        if(A[i] < A[j]){
            B[k++] = A[i++];
        }
        else{
            B[k++] = A[j++]; // Corrected from B[j++] to A[j++]
        }
    }

    // copying all the remaining elements from array A
    for( ; i<=mid ; i++) 
    {
        B[k++]=A[i];
    }
    // copying all the remaining elements from array B
    for (; j <= h ; j++)
    {
        B[k++] = A[j];
    }

    // Copying all the elements from array B to A back
    for (i = l ; i  <= h ; i++)
    {
        A[i] = B[i];
    }
};


void mergeSort(int A[], int l, int h) {
    if (l < h) {
        int mid = (l + h) / 2;
        mergeSort(A, l, mid); // Sort left half
        mergeSort(A, mid + 1, h); // Sort right half
        merging(A, l, mid, h); // Merge sorted halves
    }
}


int main(){
    int A[]  = {2,5,8,12,3,6,7,10};
    int h = sizeof(A) / sizeof(A[0]);
    int l = 0;

    cout<<"Unsorted Array: ";
    for (int i = 0; i < h; i++)
    {
        cout<<A[i] << " ";
    }

    // Call the merge sort function
    mergeSort(A, l, h-1);

    cout<<"\nSorted Array: ";
    for (int i = 0; i < h; i++)
    {
        cout<<A[i] << " ";
    }
    
    return 0;
}
