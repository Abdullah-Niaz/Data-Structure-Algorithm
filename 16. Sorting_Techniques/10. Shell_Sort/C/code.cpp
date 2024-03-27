#include <iostream>
#include <cmath>
using namespace std;
void shellSort(int data[], int n) {
    // int gap = (n / 2);  // with floor
    int gap = ceil(n / 2); // with ceil
    while (gap > 0) {
        bool no_exchange;
        do {
            no_exchange = true;
            for (int i = 0; i < n - gap; ++i) {
                if (data[i] > data[i + gap]) {
                    // Swap elements
                    int temp = data[i];
                    data[i] = data[i + gap];
                    data[i + gap] = temp;
                    no_exchange = false;
                }
            }
        } while (!no_exchange);
        gap /= 2;
    }
}

int main() {
    // int data[] = {12, 34, 54, 2, 3}; 
    int data[] = {23,7,9,5,2,29,15,19,31}; 
    int n = sizeof(data) / sizeof(data[0]);
    
    shellSort(data, n); 
    
    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) {
        cout << data[i] << " ";
    };
    
    return 0;
}
