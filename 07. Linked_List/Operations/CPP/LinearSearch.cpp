#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    struct Node *next;

public:
    Node *linearSearch(Node *ptr, int key)
    {
        while (ptr != NULL)
        {
            if (key == ptr->data)
            {
                cout << "Key: " << ptr->data;
                cout << "Location: " << ptr;
                return ptr;
            }
            // assign next location to itereate over
            ptr = ptr->next;
        }
        return NULL;
    }
};

int main()
{
    struct Node *head, *first, *second;
    head = new Node();
    first = new Node();
    second = new Node();

    head->data = 10;
    head->next = first;
    first->data = 20;
    first->next = second;
    second->data = 30;
    second->next = NULL;

    Node *temp = head->linearSearch(head, 20);
    cout<<"\nLocation is: "<<temp;
    return 0;
}