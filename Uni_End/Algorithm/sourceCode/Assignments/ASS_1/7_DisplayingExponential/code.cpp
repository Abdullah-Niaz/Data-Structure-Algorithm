#include <iostream>

using namespace std;

void displayExponentialPower(int N, int P) {
    int result = 1;

    for (int i = 0; i < P; ++i) {
        result *= N;
    }

    cout << N << " raised to the power " << P << " is: " << result << endl;
}

int main() {
    int N, P;

    // Prompting user for input
    cout << "Enter the base number (N): ";
    cin >> N;
    cout << "Enter the power (P): ";
    cin >> P;

    // Calling the procedure to display exponential power
    displayExponentialPower(N, P);

    return 0;
}
