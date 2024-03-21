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
        ptr  = ptr->next;
    }
    
}
Node *removeduplicates(struct Node *head){
    struct Node *p = head;
    struct Node *q = head->next;
    while (q != NULL)
    {
        if(p->data != q->data){
            p = q;
            q = q->next;
        }
        else{
            p->next = q->next;
            free(q);
            q = p->next;
        }
    }
    return head;
};

int main(){
    struct Node *head, *second, *third, *fourth;
    head = (struct Node *)(malloc(sizeof(struct Node)));
    second = (struct Node *)(malloc(sizeof(struct Node)));
    third = (struct Node *)(malloc(sizeof(struct Node)));
    fourth = (struct Node *)(malloc(sizeof(struct Node)));

    head->data = 20;
    head->next = second;

    second->data = 40;
    second->next = third;

    third->data = 40;
    third->next = fourth;

    fourth->data = 80;
    fourth->next = NULL;

    cout<<"Before: \n";
    display(head);
    head = removeduplicates(head);
    cout<<"\nAfter: \n";
    display(head);

    return 0;
}