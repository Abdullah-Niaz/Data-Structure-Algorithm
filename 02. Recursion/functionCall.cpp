#include <iostream>
using namespace std;

void fun(int n ){
    if(n > 0 ){
        printf("\n Values are: %d ", n);
        fun(n - 1);
        printf("\n This part will be called after the tracing of recursive fun");
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