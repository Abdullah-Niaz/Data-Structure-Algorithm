#include <iostream>
#include <algorithm>
#include <chrono>
#include <time.h>
using namespace std;
using namespace std::chrono;

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
};

void BubbleSort(int A[], int size){
    int flag; // to check whether swaping is done or not
    auto start = high_resolution_clock::now();
    for (int i = 0; i < size - 1; i++)
    { 
        flag = 0;
        for (int j = 0; j < size - 1 - i; j++)
        {
            if(A[j] > A[j + 1]){
                swap(&A[j], &A[j+1]);
                flag = 1;
            }
        }   
        if (flag == 0)
        {

            break;
            cout<<"Swaping is not Done!" , i;
        }
        else{
            cout<<"Swaping is done!: "<<i <<endl;
        }
        
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
   cout << "Time taken by Bubble Sort Algo: "
         << duration.count() << " microseconds" << endl;
}

int main(){
    int A[] = {3,4,2,10,7, 6, 15};
    int size  = sizeof(A) / sizeof(A[0]);
    BubbleSort(A,size);
    for (int i = 0; i < size; i++)
    {
        cout<<A[i] <<" ";
    }
    
    return 0;
}