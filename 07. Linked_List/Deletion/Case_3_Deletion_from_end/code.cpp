#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};

void display(struct Node *ptr){
    while (ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
};

Node *deleteend(struct Node *head){
    struct Node *ptr = head;
    struct Node *q = head->next;
    while (q->next != NULL)
    {
        ptr = ptr->next;
        q = q->next;
    }
    ptr->next = NULL;
    free(q);
    return head;
}

int main(){
 struct Node *head,*first,*second;
    head = new Node;
    first = new Node;
    second = new Node;

    head->data = 5;
    head->next = first;

    first->data = 10;
    first->next = second;

    second->data = 15;
    second->next = NULL;

    cout<<"Before Deletion Node: "<<endl;
    display(head);

    head = deleteend(head);
    
    cout<<"After Deletion Node: "<<endl;
    display(head);

    return 0;
}