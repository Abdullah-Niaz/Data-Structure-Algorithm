#include <iostream>
using namespace std;

int main(){
    char a[] = "How are you";

    int ccount = 0; // consonant
    int wcount = 0; // words
    int vcount = 0; //vowels

    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'o' || a[i] == 'i' || a[i] == 'u'){
            vcount++;
        }
        else if(a[i] == ' '){
            wcount++;
        }
        else{
            ccount++;
        }
    }

    cout<<"Total Vowels: "<<vcount<<endl;
    cout<<"Total Consonant: "<<ccount<<endl;
    cout<<"Total Words: "<<wcount + 1 <<endl;
    
    return 0;
}