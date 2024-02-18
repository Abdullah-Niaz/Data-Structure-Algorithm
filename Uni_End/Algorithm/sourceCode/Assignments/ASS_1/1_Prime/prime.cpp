// C++ implementation
#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int number) {
    if (number < 2)
        return false;
    
    for (int divisor = 2; divisor <= sqrt(number); ++divisor) {
        if (number % divisor == 0)
            return false;
    }
    
    return true;
}

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    if (isPrime(N))
        cout << N << " is a prime number." << endl;
    else
        cout << N << " is not a prime number." << endl;

    return 0;
}
