#include <iostream>
using namespace std;

int main(){
    char a[] = "WELLCOME";
    int count = 0;
    for(int i = 0; a[i] != '\0';++i){
        count++;
    }
    cout<<"Length of String is: "<<count;
    return 0;
}