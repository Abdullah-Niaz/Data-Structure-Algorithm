#include <iostream>
using namespace std;

int main(){
    char a[] = "How are you now iam       adding more to it";

    int wcount = 0;

    for (int i = 0; a[i] != '\0' ; i++)
    {
        if(a[i] == ' ' && a[i-1] != ' '){
            wcount++;
        }
    }
    
    cout<<"Total Words are : "<<wcount + 1;
    return 0;
}