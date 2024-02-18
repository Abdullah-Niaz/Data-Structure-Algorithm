#include <iostream>

using namespace std;

int findMinimum(int N1, int N2, int N3) {
    int minNumber;
    
    if (N1 <= N2) {
        if (N1 <= N3) {
            minNumber = N1;
        } else {
            minNumber = N3;
        }
    } else {
        if (N2 <= N3) {
            minNumber = N2;
        } else {
            minNumber = N3;
        }
    }
    
    return minNumber;
}

int main() {
    int N1, N2, N3;

    // Prompting user for input
    cout << "Enter three numbers N1, N2, N3: ";
    cin >> N1 >> N2 >> N3;

    // Finding the minimum number using nested if
    int minNumber = findMinimum(N1, N2, N3);

    // Printing the minimum number
    cout << "Minimum number is: " << minNumber << endl;

    return 0;
}
