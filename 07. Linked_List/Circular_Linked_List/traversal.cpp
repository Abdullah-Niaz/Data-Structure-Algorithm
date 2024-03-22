#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};

void traversal(struct Node *head){
    struct Node *ptr = head;
    do{
        cout<<"Data: "<<ptr->data<<endl;
        ptr = ptr->next;
    }while(ptr!= head);
};

int main(){
    struct Node *head, *first, *second,*third,*fourth,*fifth;
    head = (struct Node * )(malloc(sizeof(struct Node)));
    first = (struct Node * )(malloc(sizeof(struct Node)));
    second = (struct Node * )(malloc(sizeof(struct Node)));
    third = (struct Node * )(malloc(sizeof(struct Node)));
    fourth = (struct Node * )(malloc(sizeof(struct Node)));
    fifth = (struct Node * )(malloc(sizeof(struct Node)));

    head->data = 10;
    head->next = first;

    first->data = 20;
    first->next = second;

    second->data = 30;
    second->next = third;

    third->data = 40;
    third->next = fourth;

    fourth->data = 50;
    fourth->next = fifth;

    fifth->data = 60;
    fifth->next = head;

    traversal(head);
    return 0;
}