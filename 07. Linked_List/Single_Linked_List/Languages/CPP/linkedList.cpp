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
            cout <<"Data-item: "<<ptr->data << endl;
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

    Node * InsertStart(struct Node *ptr, int data){
    struct Node *p = new Node;
    p->data = data;
    p->next = ptr;
    // display(p);
    return p;
    }

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
        
    }

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
    }

    void menu(){
        cout << "1. Display: "<< endl;
        cout << "2. Sum: "<< endl;
        cout << "3. Count: "<< endl;
        cout << "4. Maximum: "<< endl;
        cout << "5. Linear Search: "<< endl;
        cout << "6. Insertion at Start: "<< endl;
        cout << "7. Insertion between(index): "<< endl;
        cout << "8. Insertion at End: "<< endl;
        cout << "9. Exit: "<< endl;
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

    head->menu();
    int n;
    cout << "Enter the Select Option: ";
    cin >> n;
    while (n != 9)
    {
        switch (n)
        {
        case 1:
            head->display(head);
            break;
        case 2:
            cout << "Sum of Linked List: " << head->Sum(head) << endl;
            break;
        case 3:
            cout << "Count of Linked List: " << head->Count(head) << endl;
            break;
        case 4:
            cout << "Max of Linked List: " << head->Max_li(head) << endl;
            break;
        case 5:
            head->linearSearch(head, 20);
            break;
        case 6:
            head = head->InsertStart(head, 4);
            break;
        case 7:
            head = head->Insertbetween(head, 1, 2);
            break;
        case 8:
            head = head->InsertionEnd(head, 50);
            break;
        default:
            cout << "Invalid option. Please enter a valid option." << endl;
            break;
        }
        head->menu(); // Display menu again
        cout << "Enter the Select Option: ";
        cin >> n;
    }

    // Delete allocated memory
    delete head;
    delete first;
    delete second;

    return 0;
}
