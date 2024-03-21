#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void TraverseLinkedList(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Value is: " << ptr->data << endl;
        ptr = ptr->next;
    }
};


struct Node * insertBetween(struct Node *head,int data, int index){
    struct Node *ptr = new Node;
    struct Node *p = head;
    int i = 0;
    while (i != index-1)
    {
        p = p->next;
        cout<<"index: :"<<i<< " and other is : "<< index - 1 <<endl;
        i++;
    }
    
    ptr->data = data;
    ptr->next  = p->next;
    p->next = ptr;
    return head;
};

int main()
{
    struct Node *head, *second,*third,*fourth;
    head = new Node;
    second = new Node;
    third = new Node;
    fourth = new Node;

    head->data = 10;
    head->next = second;
    second->data = 12;
    second->next = third;
    third->data = 14;
    third->next  = fourth;
    fourth->data = 16;
    fourth->next = NULL;

    TraverseLinkedList(head);
    head = insertBetween(head,40,4);
    TraverseLinkedList(head);

    return 0;
}