#include <iostream>
using namespace std;

int fun(int n)
{
    if (n > 0)
    {
       return fun(n - 1) + n;
    }
    return 0;
};
int main()
{
    int x = 5;
    int result = fun(x);
    cout<<"VAlue of Result is : "<<result;
    return 0;
}