#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void display(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << endl;
        cout << "Location: " << ptr->next << endl;
        ptr = ptr->next;
    }
};

int Sum(struct Node *ptr)
{
    int sum = 0;
    while (ptr != NULL)
    {
        sum = sum + ptr->data;
        ptr = ptr->next;
    }
    return sum;
};

int Count(struct Node *ptr)
{
    int count = 0;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }
    return count;
};

int Max_li(struct Node *ptr)
{
    int max_va = 0;
    while (ptr != NULL)
    {
        if (max_va < ptr->data)
        {
            max_va = ptr->data;
        }
        ptr = ptr->next;
    }
    return max_va;
}

Node *linearSearch(Node *ptr, int key)
{
    while (ptr != NULL)
    {
        if (key == ptr->data)
        {
            cout << "Key: " << ptr->data << endl;
            cout << "Location: " << ptr << endl;
            return ptr;
        }
        // assign next location to itereate over
        ptr = ptr->next;
    }
    return NULL;
}


// Insertion Operations

Node * InsertStart(struct Node *ptr, int data){
    struct Node *p = new Node;
    p->data = data;
    p->next = ptr;
    return p;
};

Node *Insertbetween(struct Node *head, int data, int index){
        struct Node *ptr = new Node;
        struct Node *p = head;
        int i = 0 ;
        while (i != index - 1)
        {
            p = p->next;
            i++;
        }
        ptr->data = data;
        ptr->next = p->next;
        p->next = ptr;
        return head;
        
};
Node *InsertionEnd(struct Node *head,int data){
        struct Node *ptr = new Node;
        struct Node *p = head;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = ptr;
        ptr->next = NULL;
        ptr->data = data;
        return head;
};
int main()
{
    Node *head, *first, *second;
    head = new Node;
    first = new Node;
    second = new Node;

    head->data = 10;
    head->next = first;
    first->data = 20;
    first->next = second;
    second->data = 30;
    second->next = NULL;

    head = InsertStart(head,5);
    head = Insertbetween(head,25,3);
    head = InsertionEnd(head,40);


    cout << "Displayling Elements of Linked list whole" << endl;
    display(head);

    int sum = Sum(head);
    cout<<"Sum of Linked List: "<<sum<<endl;

    int count = Count(head);
    cout<<"Count of Linked List: "<<count<<endl;

    int max = Max_li(head);
    cout<<"Max of Linked List: "<<max<<endl;

    cout << "Linear Search" << endl;
    Node *r = linearSearch(head, 20);


   
    return 0;
}