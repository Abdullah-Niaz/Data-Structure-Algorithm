#include <iostream>
using namespace std;
struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};


void display(struct Node *head){
    struct Node *ptr = head;
    while (ptr != NULL)
    {
        cout<<"Data: "<<ptr->data<<endl;
        ptr = ptr->next;
    }
    
};
int main(){
    struct Node *head,*first,*second;
    head = new Node;
    first = new Node;
    second = new Node;
    head->data = 20;
    head->prev = NULL;
    head->next = first;

    first->data = 40;
    first->prev = head;
    first->next = second;

    second->data = 60;
    second->prev = first;
    second->next = NULL;
 
    display(head);
    return 0;
}