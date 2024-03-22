#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    bool swapped;
    for (int i = 0; i < n - 1; i++)
    {
        swapped = false;
        // Last i elements are already in place
        for (int j = 0; j < n - i - 1; j++)
        {
            // Swap adjacent elements if they are in the wrong order
            if (arr[j] > arr[j + 1])
            {
                // Perform the swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }

        // If no two elements were swapped in the inner loop, the array is already sorted
        if (!swapped)
        {
            break;
        }
    }
}

int main()
{
    int arr[] = {64, 25, 23,300, 200, 600, 12, 22, 11,2,3,1,15,15};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"Length: "<<n<<endl;
    cout << "Original array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
