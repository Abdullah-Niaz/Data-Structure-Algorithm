#include <iostream>

using namespace std;

int calculateSumOfEvenNumbers(int N) {
    int sum = 0;
    for (int i = 1; i <= N; ++i) {
        if (i % 2 == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int N, sum;
    
    // Prompting user for input
    cout << "Enter a number N: ";
    cin >> N;
    
    // Calculating sum of even numbers up to N
    sum = calculateSumOfEvenNumbers(N);
    
    // Printing the sum
    cout << "Sum of even numbers up to " << N << " is: " << sum << endl;

    return 0;
}
