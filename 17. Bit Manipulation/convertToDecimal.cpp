#include <bits/stdc++.h>
using namespace std;

int Convert2Decimal(string binary) {
    int decimal = 0;
    int base = 1;  // 2^0 initially

    // Start from the rightmost bit and move left
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += base;
        }
        base *= 2;  // Move to the next power of 2
    }

    return decimal;
}

int main() {
    string binary = "1100";
    int decimal = Convert2Decimal(binary);
    cout << "Decimal Conversion: " << decimal << endl;
    return 0;
}
