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

Node * deletebetween(struct Node *head, int index){
    struct Node *ptr = head;
    while (index - 1)
    {
        ptr = ptr->next;
    }
    struct Node *q = ptr->next;
    ptr->next = q->next;
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

    head = deletebetween(head,1);
    
    cout<<"After Deletion Node: "<<endl;
    display(head);

    return 0;
}