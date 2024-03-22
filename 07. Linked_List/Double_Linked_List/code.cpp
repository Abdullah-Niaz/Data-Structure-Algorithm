#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *prev;
    struct Node *next;
};

void display(struct Node *head){
    struct Node *ptr = head;
    while (ptr != NULL)
    {
        cout<<"{" << ptr->data << "}" ;
        if (ptr->next == NULL)
            break;
        else
        {
            ptr = ptr->next;
            cout<<" -> ";
        }
    }
}
    

int main(){
struct Node *head, *first, *second,*third,*fourth,*fifth;
    head = (struct Node * )(malloc(sizeof(struct Node)));
    first = (struct Node * )(malloc(sizeof(struct Node)));
    second = (struct Node * )(malloc(sizeof(struct Node)));
    third = (struct Node * )(malloc(sizeof(struct Node)));
    fourth = (struct Node * )(malloc(sizeof(struct Node)));
    fifth = (struct Node * )(malloc(sizeof(struct Node)));

    head->data = 10;
    head->prev = NULL;
    head->next = first;

    first->data = 20;
    first->prev = head;
    first->next = second;

    second->data = 30;
    second->prev = first;
    second->next = third;

    third->data = 40;
    third->prev = second;
    third->next = fourth;

    fourth->data = 50;
    fourth->prev = third;
    fourth->next = fifth;

    fifth->data = 60;
    fifth->prev = fourth;
    fifth->next = NULL;

    display(head);
    return 0;
}