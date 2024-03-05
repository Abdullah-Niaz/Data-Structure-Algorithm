#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    struct Node *next;

public:
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

    cout << "Displayling Elements of Linked list whole" << endl;
    head->display(head);

    int sum = head->Sum(head);
    cout<<"Sum of Linked List: "<<sum<<endl;

    int count = head->Count(head);
    cout<<"Count of Linked List: "<<count<<endl;

    int max = head->Max_li(head);
    cout<<"Max of Linked List: "<<max<<endl;

    cout << "Linear Search" << endl;
    Node *r = head->linearSearch(head, 20);
    // cout << r;
    return 0;
}