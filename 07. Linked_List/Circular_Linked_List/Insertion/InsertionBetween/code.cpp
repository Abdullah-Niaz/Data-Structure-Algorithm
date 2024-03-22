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

struct Node * insertBetween(struct Node *head,int data, int index){
    struct Node *ptr = head;
    struct Node *p = new Node;
    int i = 0;
    while (i != index-1)
    {
        ptr = ptr->next;
        i++;
    }
    
    p->data = data;
    p->next  = ptr->next;
    ptr->next = p;
    return head;

};

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
    head = insertBetween(head,10,1);
    cout<<"\n======================\n";
    display(head);

    return 0;
}