#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};


void display(struct Node *head){
    struct Node *ptr = head;
    while (ptr != NULL)
    {
        cout<<"Data: "<<ptr->data<<endl;
        ptr = ptr->next;
    }
}
struct Node * InsertionStart(struct Node *head, int data){
    struct Node *ptr = new Node;
    ptr->next = head;  
    ptr->data = data;
    head = ptr;
    return head;
};

struct Node * InsertBetween(struct Node *head, int data, int index){
    struct Node *ptr = new Node;
    struct Node *p = head;
    int i = 0;
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


struct Node * InsertEnd(struct Node *head, int data){
    struct Node *ptr = new Node;
    struct Node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }

    ptr->data = data;
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

int main(){
    struct Node *n1,*n2,*n3;
    n1 = (struct Node *)(malloc(sizeof(struct Node )));
    n2 = (struct Node *)(malloc(sizeof(struct Node )));
    n3 = (struct Node *)(malloc(sizeof(struct Node )));

    n1->data = 20;
    n1->next = n2;
    n2->data = 30;
    n2->next = n3;
    n3->data = 40;
    n3->next = NULL;

    display(n1);

    // n1 = InsertionStart(n1,5);
    cout<<"\n=======================\n";
    // n1  = InsertBetween(n1,25,1);
    n1 = InsertEnd(n1,50);
    display(n1);

    return 0;
}