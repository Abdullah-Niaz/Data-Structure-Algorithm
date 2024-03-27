#include <iostream>
using namespace std;


void insertion(int A[], int size){
    for (int i = 0; i < size; i++)
    {
        for (int j  = i + 1; j < size; j++)
        {
            if(A[i] >= A[j]){
                int temp = A[i];
                A[i]  = A[j];
                A[j] = temp;
            }
        }
        
    }
    
}

// void insertion(int A[], int size){
//     for (int i = 1; i < size; i++)
//     {
//         int key = A[i];
//         int j = i - 1;
//         while (j>= 0 && A[j] > key)
//         {
//             A[j + 1]  = A[j];
//             j--;
//         }
//         A[j + 1] = key;
//     }
    
// }


int main(){
    int A[] = {2,5,3,1,5};
    int n= sizeof(A) / sizeof(A[0]);
    for (int i = 0; i < n  ; i++)
    {
        cout<<A[i]<< " " ;
    }
    cout<<endl;
    insertion(A,n);
    for (int i = 0; i < n  ; i++)
    {
        cout<<A[i]<< " " ;
    }
    

    return 0;
}