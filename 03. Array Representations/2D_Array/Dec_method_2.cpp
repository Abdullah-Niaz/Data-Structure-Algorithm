#include <iostream>
using namespace std;

int main(){
    int *A[3];
    A[0] = new int[4];
    A[1] = new int[4];
    A[2] = new int[4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << A[i][j] << endl;
        }
    }
    return 0;
}