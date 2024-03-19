#include <iostream>

using namespace std;

void printOddNumbers(int N) {
    for (int i = 1; i <= N; ++i) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int N;
    
    // Prompting user for input
    cout << "Enter a number N: ";
    cin >> N;
    
    // Printing odd numbers up to N
    cout << "Odd numbers up to " << N << " are: ";
    printOddNumbers(N);

    return 0;
}
