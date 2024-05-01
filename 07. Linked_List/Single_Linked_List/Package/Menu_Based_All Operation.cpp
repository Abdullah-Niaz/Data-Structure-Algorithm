#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

bool isEmpty(struct Node *head){
    return head == NULL;
}

void display(struct Node *head){
    if (isEmpty(head))
    {
        cout<<"Linked list is empty!"<<endl;
    }
    else
    {
        struct Node *ptr = head;
        while(ptr != NULL){
            cout<<"Data: "<<ptr->data <<endl;
            ptr = ptr->next;    
        }
    }
}

int max_no(struct Node *head)
{
    if (isEmpty(head))
    {
        cout<<"Linked list is empty!"<<endl;
        return -1; // Return a default value indicating failure
    }

    int max = INT16_MIN;
    struct Node *ptr = head;
    while (ptr != NULL)
    {
        if (ptr->data > max)
        {
            max = ptr->data;
        }
        ptr = ptr->next;
    }
    return max;
}

struct Node *insert_at_start(struct Node *head, int data)
{
    struct Node *ptr = new Node;
    ptr->data = data;
    ptr->next = head;
    head = ptr;
    return head;
}

struct Node *insert_at_middle(struct Node *head, int data, int index){
    struct Node *ptr = new Node;  // Create a new node
    struct Node *p = head;         // Pointer to traverse the list
    int i = 0;

    // Traverse the list to the node at index - 1
    while (i != index - 1 && p != NULL) {
        p = p->next;
        i++;
    }

    // Check if the index is out of range
    if (p == NULL || i != index - 1) {
        cout << "Index out of range!" << endl;
        return head;
    }

    // Assign data and pointers for the new node
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;

    return head;
}


struct Node *insert_at_end(struct Node *head, int data){
    struct Node *ptr = new Node;
    ptr->data = data;
    ptr->next = NULL;
    if (head == NULL) {
        head = ptr;
        return head;
    }

    struct Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = ptr;
    return head;
}

int main(){
    struct Node *node = NULL;
    char choice;
    int data, index, option;

    do {
        cout<<"1. Add a node"<<endl;
        cout<<"2. Display Linked List"<<endl;
        cout<<"3. Display maximum number"<<endl;
        cout<<"4. Quit"<<endl;
        cout<<"Enter your choice: ";
        cin>> option;

        switch (option) {
            case 1:
                int num;
                cout << "1. Add at the beginning" << endl;
                cout << "2. Add at an index" << endl;
                cout << "3. Add at the end" << endl;
                cout << "Enter your choice: ";
                cin >> num;

                switch (num) {
                    case 1:
                        cout << "Enter data: ";
                        cin >> data;
                        node = insert_at_start(node, data);
                        break;
                    case 2:
                        cout << "Enter index: ";
                        cin >> index;
                        cout << "Enter data: ";
                        cin >> data;
                        node = insert_at_middle(node, data, index);
                        break;
                    case 3:
                        cout << "Enter data: ";
                        cin >> data;
                        node = insert_at_end(node, data);
                        break;
                    default:
                        cout << "Invalid choice!" << endl;
                        break;
                }
                break;
            case 2:
                display(node);
                break;
            case 3:
                cout << "Maximum number: " << max_no(node) << endl;
                break;
            case 4:
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid choice!" << endl;
                break;
        }

        cout << "Do you want to continue? (Y/N): ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');

    return 0;
}
