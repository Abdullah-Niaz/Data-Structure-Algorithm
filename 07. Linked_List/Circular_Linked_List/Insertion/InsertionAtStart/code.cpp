#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

void display(struct Node *head){
    struct Node *ptr = head;
    
    do {
        cout<<"Data: "<<ptr->data <<endl;
        ptr = ptr->next;
    }while(ptr != head);
}

struct Node *insertionAtFirst(struct Node *head, int data){
    struct Node *ptr = head->next;
    cout<<"ptr: "<<ptr;
    struct Node *p = new Node; // new node
    p->data = data;
    while (ptr->next != head)
    {
        ptr = ptr->next;
    }
    ptr->next = p;
    p->next = head;
    head = p;
    return head;
    
}

int main(){
    struct Node *head, *first,*second;
    head = new  Node;
    first = new Node;
    second = new Node;

    head->data = 20;
    head->next = first;
    first->data = 30;
    first->next = second;
    second->data = 40;
    second->next = head;

    display(head);
    cout<<"\n======================\n";
    head = insertionAtFirst(head,10);
    cout<<"\n======================\n";
    display(head);

    return 0;
}