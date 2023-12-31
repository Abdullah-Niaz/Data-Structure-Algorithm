#include <iostream>
using namespace std;


struct Rectangle{
    int length;
    int breadth;

};

int main(){
    

    // Method #3 in C++
    // struct Rectangle *p;
    // p = new Rectangle;
    // p->length = 100;
    // p->breadth = 200;
    // cout<<p->length;
    // cout<<p->breadth;



    // Method #2 in C 
    // struct Rectangle *p;
    // p = (Rectangle *)(malloc(sizeof(struct Rectangle)));
    // p->length = 50;
    // p->breadth = 60;
    // cout<<p->length;
    // cout<<p->breadth;


    // Generic Solution
    struct Rectangle r;
    struct Rectangle *p = &r;
    p->length = 50;
    p->breadth = 500;
    cout<<p->length;
    cout<<p->breadth;

    // Method #1
    // struct Rectangle p = {10,20};
    // cout<<p.length;
    // cout<<p.breadth;


    return 0;
}