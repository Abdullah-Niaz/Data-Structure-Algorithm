#include <iostream>

using namespace std;

int findMaximum(int N1, int N2, int N3, int N4) {
    int maxNumber;

    if (N1 >= N2) {
        if (N1 >= N3) {
            if (N1 >= N4) {
                maxNumber = N1;
            } else {
                maxNumber = N4;
            }
        } else {
            if (N3 >= N4) {
                maxNumber = N3;
            } else {
                maxNumber = N4;
            }
        }
    } else {
        if (N2 >= N3) {
            if (N2 >= N4) {
                maxNumber = N2;
            } else {
                maxNumber = N4;
            }
        } else {
            if (N3 >= N4) {
                maxNumber = N3;
            } else {
                maxNumber = N4;
            }
        }
    }

    return maxNumber;
}

int main() {
    int N1, N2, N3, N4;

    // Prompting user for input
    cout << "Enter four numbers N1, N2, N3, N4: ";
    cin >> N1 >> N2 >> N3 >> N4;

    // Calling the function to find the maximum number
    int maxNumber = findMaximum(N1, N2, N3, N4);

    // Printing the maximum number
    cout << "Maximum number is: " << maxNumber << endl;

    return 0;
}
