#include <iostream>

using namespace std;

int exponentialPower(int N, int P) {
    int result = 1;

    for (int i = 0; i < P; ++i) {
        result *= N;
    }

    return result;
}

int main() {
    int N, P;

    // Prompting user for input
    cout << "Enter the base number (N): ";
    cin >> N;
    cout << "Enter the power (P): ";
    cin >> P;

    // Calculating exponential power
    int result = exponentialPower(N, P);

    // Printing the result
    cout << N << " raised to the power " << P << " is: " << result << endl;

    return 0;
}
