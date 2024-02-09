#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};

struct Node * insertAtStart(struct Node *head,int data){
    Node *ptr  = new Node;
    
    ptr->data = data;
    ptr->next = head;
    head = ptr;
    return head;
};
struct Node * insertBetween(struct Node *head,int data, int index){
    Node *ptr = new Node;
    Node *p = head;

    int i = 0 ;
    while (i != index -1 )
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
};
struct Node * insertAtEnd(struct Node *head,int data){
    Node *ptr = new Node;
    Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    ptr->data = data;
    p->next = ptr;
    ptr->next = NULL;
    return head;
    
};

void Traversing(struct Node *ptr){
    while (ptr!= NULL)
    {
        cout<<"Value: "<<ptr->data<<endl;
        ptr = ptr->next;
    }
    
};

int main(){
    struct Node *head,*second,*third;
    head = new Node;
    second = new Node;
    third = new Node;

    head->data = 20;
    head->next = second;

    second->data = 30;
    second->next = third;

    third->data = 50;
    third->next = NULL;

    cout<<"\nCase 1: Insertion At Start:/n";
    cout<<"\nBefore: \n";
    Traversing(head);
    head = insertAtStart(head,10);
    cout<<"\nAfter: \n";
    Traversing(head);

    cout<<"\nCase 2: Insertion Between:/n";
    cout<<"\nBefore: \n";
    Traversing(head);
    head = insertBetween(head,40,3);
    cout<<"\nAfter: \n";
    Traversing(head);
 
    cout<<"\nCase 3: Insertion At End:/n";
    cout<<"\nBefore: \n";
    Traversing(head);
    head = insertAtEnd(head,60);
    cout<<"\nAfter: \n";
    Traversing(head);

    return 0;
}