#include <iostream>
using namespace std;

void Swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
};

void selection(int A[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int j, k;
        for (int j = k = i; j < n; j++)
        {
            if (A[j] < A[k])
            {
                k = j;
            }
        }
        Swap(&A[i], &A[k]);
    }
};
int main()
{
    int A[] = {2, 3, 6, 4, 1, 5};
    int n = sizeof(A) / sizeof(A[0]);
    cout << "Unsorted: ";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    selection(A, n);
    cout << "Sorted: ";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}