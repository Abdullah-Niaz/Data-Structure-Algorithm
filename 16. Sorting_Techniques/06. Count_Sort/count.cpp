#include <iostream>
using namespace std;

int findMax(int A[], int n)
{
    int max = INT32_MIN;
    // INT32_MIN = -2147483648
    // [1,2,3,12,4,5,10]
    for (int i = 0; i < n; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
            // max = 12
        }
    }
    return max; // max = 12
}

void CountSort(int A[], int n)
{
    int max, i;
    max = findMax(A, n);
    int *C = new int[max + 1]; // array of size  max + 1

    for (i = 0; i < max + 1; i++)
    {
        C[i] = 0; // initializing all the elements with zero
    }

    for (i = 0; i < n; i++)
    {
        C[A[i]]++; // counting elements in Array C
    }

    i = 0;
    int j = 0;
    while (j < max + 1)
    {
        if (C[j] > 0)
        {
            A[i++] = j; // place index of j  as a element in A and move i++ in A to palce next element
            C[j]--;     // decrement that count value like if that is 3 then will be 2
        }
        else
        {
            j++;
        }
    }
}

int main()
{
    int A[] = {1, 3, 45, 2, 4, 6, 6, 7, 2, 8, 12, 44};
    int n = sizeof(A) / sizeof(A[0]); 

    cout << "\nUnsorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    CountSort(A, n);
    cout << "\nSorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}