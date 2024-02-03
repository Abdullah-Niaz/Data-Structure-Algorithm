#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)(malloc(sizeof(struct Node *)));
    struct Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    ptr->data = data;
    p->next = ptr;
    ptr->next = NULL;
    return head;
};

void  Traversing(struct Node *ptr){
    while (ptr != NULL)
    {
        cout<<"Value: "<<ptr->data<<endl;
        ptr = ptr->next;
    }
}

int main()
{
    struct Node *head, *second, *third;
    head = (struct Node *)(malloc(sizeof(struct Node *)));
    second = (struct Node *)(malloc(sizeof(struct Node *)));
    third = (struct Node *)(malloc(sizeof(struct Node *)));

    head->data = 30;
    head->next = second;
    
    second->data = 40;
    second->next = third;

    third->data = 50;
    third->next = NULL;
    
    cout<<"\nBefore: \n";
    Traversing(head);
    head = insertAtEnd(head,60);
    cout<<"\nAfter: \n";
    Traversing(head);
    return 0;
}