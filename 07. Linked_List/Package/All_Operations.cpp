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


Node *reverse(struct Node *head){
    struct Node *ptr = head;
    int *a = new int[4];
    int i = 0 ;
    while (ptr != NULL)
    {
        a[i] = ptr->data;
        i++;
        ptr = ptr->next;
    }
    ptr = head;

    while (ptr!= NULL)
    {
        ptr->data = a[i];
        i--;
        ptr = ptr->next;
    }
    return head;
}

bool Sorted(struct Node *head){
    Node *ptr = head;
    int x = -32678;
    while (ptr!=NULL)
    {
        if(ptr->data < x){
            return false;
        }
        else{
            x = ptr->data;
        }
        ptr = ptr->next;
    }
    return true;
}

Node *removeduplicates(struct Node *head){
    struct Node *p = head;
    struct Node *q = head->next;
    while (q != NULL)
    {
        if(p->data != q->data){
            p = q;
            q = q->next;
        }
        else{
            p->next = q->next;
            free(q);
            q = p->next;
        }
    }
    return head;
};


// Deletion Operations

// Deletion from start
struct Node * deletefromstart(struct Node *head){
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
};

// Deletion from between

Node * deletebetween(struct Node *head, int index){
    struct Node *ptr = head;
    while (index - 1)
    {
        ptr = ptr->next;
    }
    struct Node *q = ptr->next;
    ptr->next = q->next;
    free(q);
    return head;
}

// Deletion from end

Node *deleteend(struct Node *head){
    struct Node *ptr = head;
    struct Node *q = head->next;
    while (q->next != NULL)
    {
        ptr = ptr->next;
        q = q->next;
    }
    ptr->next = NULL;
    free(q);
    return head;
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