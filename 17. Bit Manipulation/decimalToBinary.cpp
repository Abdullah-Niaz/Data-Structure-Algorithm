#include <bits/stdc++.h>
using namespace std;

string Convert2Binary(int n){
    string res = "";
    while(n > 0){
        if (n%2==1){
            res += '1';
        }
        else{
            res += '0';
        }
        n = n / 2;
    }

    reverse(res.begin(),res.end());
    return res;
};

int main(){
    string res = Convert2Binary(12);
    std::cout << "binary Conversion: "<< res << std::endl;
    return 0;
}