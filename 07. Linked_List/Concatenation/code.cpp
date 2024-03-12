#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};

void display(struct Node *ptr) {
    while (ptr != NULL) {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
}

void concatenation(struct Node *p, struct Node *q) {
    if (p == NULL || q == NULL) {
        cout << "One or both lists are empty." << endl;
        return;
    }
    
    Node *ptr = p;
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }
    ptr->next = q;
}

int main() {
    struct Node *head = new Node;
    struct Node *second = new Node;
    struct Node *third = new Node;
    struct Node *fourth = new Node;

    struct Node *head1 = new Node;
    struct Node *second1 = new Node;
    struct Node *third1 = new Node;
    struct Node *fourth1 = new Node;

    head->data = 20;
    head->next = second;

    second->data = 40;
    second->next = third;

    third->data = 40;
    third->next = fourth;

    fourth->data = 80;
    fourth->next = NULL;

    head1->data = 100;
    head1->next = second1;

    second1->data = 120;
    second1->next = third1;

    third1->data = 130;
    third1->next = fourth1;

    fourth1->data = 140;
    fourth1->next = NULL;

    // display(head);
    concatenation(head, head1);
    display(head);

    // Freeing memory
    delete head;
    delete head1;
    delete second;
    delete second1;
    delete third;
    delete third1;
    delete fourth;
    delete fourth1;

    return 0;
}
