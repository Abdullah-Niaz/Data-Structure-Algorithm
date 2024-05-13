#include <iostream>
using namespace std;


void ShellSort(int A[], int n){
    int gap, i, j;
    for(gap = n / 2 ; gap > 0 ; gap /= 2){
        for (i = gap; i < n; i++)
        {
            int temp = A[i];
            j = i - gap;

            while (j >= 0 && A[j] > temp)
            {
                A[j + gap] = A[j];
                j = j - gap;
            }
            A[j + gap ] = temp;
        }
        
    }
}


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
    ShellSort(A,n);
    cout<<"\nSorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<" ";
    }
    
    return 0;
}