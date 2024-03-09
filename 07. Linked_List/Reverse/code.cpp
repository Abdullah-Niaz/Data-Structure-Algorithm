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
    
};

Node *reverse(struct Node *head){
    struct Node *ptr = head;
    int *a = new int[4];
    int i = 0 ;
    while (ptr != NULL)
    {
        a[i] = ptr->data;
        i++;
        ptr = ptr->next;
    }
    ptr = head;

    while (ptr!= NULL)
    {
        ptr->data = a[i];
        i--;
        ptr = ptr->next;
    }
    return head;
}

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

    third->data = 60;
    third->next = fourth;

    fourth->data = 80;
    fourth->next = NULL;

    display(head);
    head = reverse(head);
    display(head);

    return 0;
}