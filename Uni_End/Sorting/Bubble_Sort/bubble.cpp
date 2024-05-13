#include <iostream>
using namespace std;

void SwapA(int *x,  int *y ){
    int temp = *x;
    *x = *y;
    *y = temp;
};

void Bubble_Sort(int A[],int size_of_A){
    for (int i = 0; i < size_of_A - 1 ; i++)
    {
        cout<<"Total i are "<<i << endl;
        for (int j = 0; j < size_of_A - 1 - i ; j++)
        {
            if(A[j] > A[ j + 1 ]){
                SwapA(&A[j], &A[ j + 1]);
            }
        }
        
    }
}

int main(){
    int A[] = {8,5,7,3,2,1};
    int size_ofA = sizeof(A) / sizeof(A[1]);
    cout<<"Before Sorting: \n\n";
    for (int i = 0; i < size_ofA; i++)
    {
        cout<<A[i] << " | ";
    }
    cout<<"\n";
    Bubble_Sort(A,size_ofA);
    cout<<"\nAfter Sorting:\n";
    for (int i = 0; i < size_ofA; i++)
    {
        cout<<A[i] << " | " ;
    }
    cout<<"\n\n\n";
    return 0;
}