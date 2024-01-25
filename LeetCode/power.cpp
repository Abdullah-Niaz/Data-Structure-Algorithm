#include <iostream>
using namespace std;
template <class T>

// double pow(int a , int b ){
//     double ans = 1;
//     for(int i = 0 ; i < b ; ++i){
//         ans *= a;
//     }
//     return ans;
// };
T pow(T a , T b ){
    T ans = 1;
    for(int i = 0 ; i < b ; ++i){
        ans *= a;
    }
    return ans;
};

int main(){
    cout<<"Value of 2 to 6: "<<pow(2,6)<<endl;
    cout<<"Value of 3 to 6: "<<pow(3,6)<<endl;
    cout<<"Value of 4 to 6: "<<pow(4.3,6.0)<<endl;
    cout<<"Value of 5 to 6: "<<pow(5.6,6.0)<<endl;
    return 0;
}