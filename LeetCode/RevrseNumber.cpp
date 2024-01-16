#include <iostream>
using namespace std;

int reverseString(){
    int n = 356;
    int ans = 0;
    while (n != 0)
    {
        int digit = n % 10;
        if ((ans > INT64_MAX) || (ans < INT64_MIN / 10))
        {
            return 0;
        }
        else
        {
            ans = (ans * 10) + digit;
            n = n / 10;
        }
    }
        return ans; 
}


int main(){
   int res = reverseString();
   cout<<res;
    return 0;
}