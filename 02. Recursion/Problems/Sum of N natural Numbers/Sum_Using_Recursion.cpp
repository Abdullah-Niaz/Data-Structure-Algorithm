#include <iostream>
using namespace std;

int sum(int n)
{
    if(n == 0 ){
        return 0;
    }
    else{
        return sum( n - 1 ) + n;
    }
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