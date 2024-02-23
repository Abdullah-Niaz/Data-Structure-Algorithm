#include <iostream>
using namespace std;

int reverseInteger()
{
    int n = 65332;
    int result = 0;

    while (n != 0)
    {
        int digit = n % 10;
        // -27 -.... + 27
        // in os of 64 bit
        // in os of 64 bit
        if ((result > INT64_MAX / 10) || (result < INT64_MIN / 10))
        {
            return 0;
        }
        else
        {
            result = (result * 10) + digit;
            n = n / 10;
        }
    }
    return result;
}

int main()
{
    int r = reverseInteger();
    cout << r;
    return 0;
}