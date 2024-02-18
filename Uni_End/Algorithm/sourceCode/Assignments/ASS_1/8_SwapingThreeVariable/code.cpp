#include <iostream>

using namespace std;

void swapThreeNumbers(int& A, int& B, int& C) {
    // Swapping without using a fourth variable
    A = A + B + C;
    B = A - (B + C);
    C = A - (B + C);
    A = A - (B + C);

    // Displaying the updated values
    cout << "After swapping, A = " << A << ", B = " << B << ", and C = " << C << endl;
}

int main() {
    int A, B, C;

    // Prompting user for input
    cout << "Enter three numbers A, B, and C: ";
    cin >> A >> B >> C;

    // Calling the procedure to swap three numbers
    swapThreeNumbers(A, B, C);

    return 0;
}
