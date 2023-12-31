#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;

    int Area(){
        return length * breadth;
    }
};


int main(){
    Rectangle R{10,30};
    cout<<R.Area()<<endl;
    cout<<R.length<<endl;
    cout<<R.breadth<<endl;
    return 0;
}