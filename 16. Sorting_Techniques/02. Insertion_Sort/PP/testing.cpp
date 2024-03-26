#include <iostream>
using namespace std;

void insertion(int A[], int size){
    for (int i = 0; i < size; i++)
    {
        int key = A[i];
        int j = i - 1;
        while ((j >= 0 ) && (A[j] > key))
        {
            A[j + 1 ] = A[j];
            j--;
        }
        A[j + 1] = key;
        
    }
    
};

int main(){
    int size = 1000;
    int A[size];
    for (int i = 0; i < size; i++)
    {
        A[i] = rand() % 1000 + 1;
    }

    insertion(A,size);
    for (int i = 0; i < size  ; i++)
    {
        cout<<A[i]<< " " ;
    }
    
    
    return 0;
}