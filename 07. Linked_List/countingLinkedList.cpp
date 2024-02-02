#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};
void Display(struct Node *ptr)
{
    int count = 0 ;
    while (ptr != NULL)
    {
        cout << "Address is: " << ptr->next << endl;
        cout << "Value is : " << ptr->data << endl;
        ptr = ptr->next;
        count++;
    }
    cout<<"Tottal Length of Node: "<<count;
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

    Display(head);
    return 0;
}