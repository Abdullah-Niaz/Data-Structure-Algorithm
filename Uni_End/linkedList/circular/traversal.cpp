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
    return 0;
}