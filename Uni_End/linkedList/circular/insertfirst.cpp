#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};

void traversal(struct Node *head){
    struct Node *ptr = head;
    do{
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }while (ptr!=head);
}


struct Node * InsertFirst(struct Node *head, int data){
    struct Node *ptr = new Node;
    struct Node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->data = data;
    ptr->next = head;
    head = ptr;
    return head;
};
int main(){
    struct Node *head,*first,*second,*third;
    head = (struct Node *)(malloc(sizeof(struct Node )));
    first = (struct Node *)(malloc(sizeof(struct Node )));
    second = (struct Node *)(malloc(sizeof(struct Node )));
    third = (struct Node *)(malloc(sizeof(struct Node )));

    head->data = 20;
    head->next  = first;
    first->data = 40;
    first->next = second;
    second->data = 50;
    second->next = third;
    third->data= 60;
    third->next = head;

    traversal(head);
    head = InsertFirst(head,5);
    traversal(head);
    return 0;
}