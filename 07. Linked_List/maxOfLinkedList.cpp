#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};


int max(struct Node *p){
    int max_size = 0;
    while (p != NULL)
    {
        if(p->data > max_size){
            max_size = p->data;
        }
        p = p->next;
    }
    return max_size;
    
};

int main()
{
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

    int m = max(head);
    cout<<"maxi: "<<m;
    return 0;
}