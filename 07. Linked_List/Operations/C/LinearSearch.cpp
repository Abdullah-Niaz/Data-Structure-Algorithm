#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};

Node * linearSearch(Node *ptr, int key ){
    while (ptr != NULL) 
    {
        if(key ==  ptr->data){
            cout<<"Key: "<<ptr->data;
            cout<<"Location: "<<ptr;
            return ptr;
        }
        //assign next location to itereate over
        ptr = ptr->next;
    }
    return NULL;
}   

int main(){
    Node *head,*first,*second;
    head = new Node;
    first = new Node;
    second = new Node;

    head->data = 10;
    head->next = first;
    first->data = 20;
    first->next = second;
    second->data = 30;
    second->next = NULL;

    Node *r = linearSearch(head,20);
    cout<<r;
return 0;
}