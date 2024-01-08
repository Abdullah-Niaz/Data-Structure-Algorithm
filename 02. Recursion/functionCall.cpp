#include <iostream>
using namespace std;

void fun(int n ){
    if(n > 0 ){
        // Desending 
        printf("\n Values are: %d ", n);
        fun(n - 1);
        // Accending
        printf("\n Values are: %d ", n);
    }
    else{
        printf("\\Function Call Completed");
    }
};
int main(){
    int x = 5;
    fun(x);
    return 0;
}