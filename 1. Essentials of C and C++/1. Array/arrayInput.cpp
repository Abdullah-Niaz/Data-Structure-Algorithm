#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Size of An Array: ";
    cin>>n;
    
    int arr[n];
    cout<<"Enter the Array Element of Size "<<n<<" : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<endl<<endl;
    cout<<"Here is the Entered Array Elements: ";
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<arr[i];
    }
    
    return 0;
}   