#include <iostream>
using namespace std;

int sum(int n)
{
    int result = 0 ;
    for (int i = 0; i <= n ; i++)
    {
        result += i;
    }
    return result;
    
};

int main()
{
    int val;
    cout << "Enter the Value to Evaluate: ";
    cin >> val;

    int result = sum(val);
    cout << "Result: " << result;
    return 0;
}