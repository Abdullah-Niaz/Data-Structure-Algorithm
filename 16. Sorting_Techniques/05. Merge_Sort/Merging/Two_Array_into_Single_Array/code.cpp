#include <iostream>
using namespace std;

void merging(int A[], int B[], int C[], int m, int n)
{
    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (A[i] < B[j])
        {
            C[k++] = A[i++];
        }
        else
        {
            C[k++] = B[j++];
        }
    }

    while (i < m)
    {
        C[k++] = A[i++];
    }
    while (j < n)
    {
        C[k++] = B[j++];
    }
}
int main()
{
    int A[] = {2, 5, 8, 12};
    int m = sizeof(A) / sizeof(A[0]);
    int B[] = {3, 6, 7, 10};
    int n = sizeof(B) / sizeof(B[0]);
    int C[m + n];

    merging(A, B, C, m, n);

    for (int o = 0; o < (m + n); o++)
    {
        cout << C[o] << " ";
    }

    return 0;
}