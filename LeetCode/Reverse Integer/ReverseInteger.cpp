#include <iostream>
using namespace std;

int reverseInteger()
{
    int n = 356;
    int ans = 0;
    while (n != 0)
    {
        int digit = n % 10;
        ans = (ans * 10) + digit;
        n = n / 10;
    }
    return ans;
};

int main()
{
    int res = reverseInteger();
    cout << res;
    return 0;
}