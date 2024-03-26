#include <iostream>
using namespace std;

void Swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
};

void bubbleSort(int A[], int n){
    int iteration = 0;
    int pass = 0;
    int swap = 0;
    int flag;
    for (int i = 0; i <n; i++)
    {
        iteration++;
        flag = 0;
        for (int j = 0; j < n -1 - i; j++)
        {
            pass++;
            if(A[j] > A[j + 1]){
                // Swap elements
                Swap(&A[j],&A[j + 1]);
                flag = 1;
                swap++;
            }
        }
        if(flag == 0 ){
            break;
        }
        
    }
    cout<<"\nTotal Number of Iteration: "<< iteration << endl;
    cout<<"Total Number of Passes: "<<pass << endl;
    cout<<"Total Number of Swapping: "<<swap << endl;
    
};

int main(){
    int A[] = {6,8,2,9,5,13,3,19,31,7};
    int n = sizeof(A) / sizeof(A[0]);
    cout<<"Orignal Array: ";
    for (int i = 0; i < n; i++)
    {
        cout<<A[i] <<" ";
    }
    bubbleSort(A,n);
    cout<<"\nSorted Array: ";
    for (int i = 0; i < n ; i++)
    {
        cout<<A[i] << " ";
    }
    
    return 0;
}