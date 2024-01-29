#include <iostream>
using namespace std;

int main(){
    char a[] = "How are you!";
    int vcount = 0;
    int ccount = 0;
    int ocount = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u'){
            vcount++;
        }
        else if((a[i] >=65 && a[i]) <= 90 && (a[i] >= 97 && a[i] <= 122)){
            ccount++;
        }
        else{
            ocount++;
        }
    }
    cout<<"Total Vowels are : "<<vcount<<endl;
    cout<<"Total Consotants are: "<<ccount++<<endl;
    cout<<"Total Others are: "<<ocount++<<endl;
    
    return 0;
}