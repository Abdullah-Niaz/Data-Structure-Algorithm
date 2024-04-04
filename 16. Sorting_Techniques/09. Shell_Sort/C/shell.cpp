#include <iostream>
using namespace std;

void shellSort(int A[], int n) {
    int gap, i, j;
    for (gap = n / 2; gap > 0; gap /= 2) {
        for (i = gap; i < n; i++) {
            int temp = A[i];
            j = i - gap;
            while (j >= 0 && A[j] > temp) {
                A[j + gap] = A[j];
                j -= gap;
            }
            A[j + gap] = temp;
        }
    }
}

int main() {
    int data[] = {23, 7, 9, 5, 2, 29, 15, 19, 31};
    int n = sizeof(data) / sizeof(data[0]);
    
    cout << "\nUnsorted array: ";
    for (int i = 0; i < n; ++i) {
        cout << data[i] << " ";
    }
    
    shellSort(data, n);
    
    cout << "\nSorted array: ";
    for (int i = 0; i < n; ++i) {
        cout << data[i] << " ";
    }
    
    return 0;
}
