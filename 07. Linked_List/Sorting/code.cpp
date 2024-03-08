#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};

void display(struct Node *ptr){
    while (ptr != NULL)
    {
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
};

bool Sorted(struct Node *head){
    Node *ptr = head;
    int x = -32678;
    while (ptr!=NULL)
    {
        if(ptr->data < x){
            return false;
        }
        else{
            x = ptr->data;
        }
        ptr = ptr->next;
    }
    return true;
}


int main(){
    Node *head,*first,*second,*third;
    head = new Node;
    first = new Node;
    second = new Node;
    third = new Node;

    head->data = 10;
    head->next = first;

    first->data = 20;
    first->next = second;

    second->data = 90;
    second->next = third;
    
    third->data = 40;
    third->next = NULL;

    display(head);
    bool result = Sorted(head);
    cout<<"Sorted: "<<result;
    return 0;
}