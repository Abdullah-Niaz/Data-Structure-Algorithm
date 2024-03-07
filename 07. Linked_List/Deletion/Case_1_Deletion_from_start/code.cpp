#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

void display(struct Node *ptr){
    while (ptr != NULL)
    {
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
    
}

struct Node * deletefromstart(struct Node *head){
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
};

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

    cout<<"Before Deletion Node: ";
    display(head);

    head = deletefromstart(head);
    
    cout<<"After Deletion Node: ";
    display(head);

    return 0;
}