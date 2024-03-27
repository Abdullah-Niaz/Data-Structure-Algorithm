#include <iostream>
using namespace std;

void Swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y  = temp;
};

void bubbleSort(int A[], int size){
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if(A[j] > A[j + 1 ])   {
                Swap(&A[j], &A[j+1]);
            }
        }
    }
};

int main(){
    int A[] = {6,5,4,3,2,1};
    int size = sizeof(A) / sizeof(A[0]);
    cout<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    bubbleSort(A,size);
    for (int i = 0; i < size; i++)
    {
        cout<<A[i]<<" ";
    }
    
    return 0;
}