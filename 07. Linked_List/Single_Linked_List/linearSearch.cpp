#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void Display(struct Node *ptr){
    while (ptr != NULL)
    {
        cout<<ptr->data<<" with Addres: "<< ptr->next<<endl;
    ptr = ptr->next;
    }
};

Node * linearSearch(struct Node *ptr, int key)
{
    while (ptr != NULL)
    {
        if (key == ptr->data)
        {
            key = ptr->data;
            cout<<"key"<<ptr->data;
            return ptr;
        }
        ptr = ptr->next;
    }
    return NULL;
}

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

    Display(head);
    struct Node *temp = linearSearch(head,40);
    cout<<"Key found at: "<<temp;

    return 0;
}