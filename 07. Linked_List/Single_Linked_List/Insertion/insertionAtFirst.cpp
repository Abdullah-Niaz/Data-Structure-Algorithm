#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;

};

void TraverseLinkedList(struct Node *ptr){
    while (ptr != NULL)
    {
        cout<<"Value is: "<<ptr->data <<endl;
        ptr = ptr->next;
    }
};

struct Node * insertAtFirst(struct Node *head,int data){
    struct Node *ptr = new Node;
    ptr->next = head;
    ptr->data = data;
    return ptr;
};

int main(){
    struct Node *head,*second;
    head = new Node;
    second = new Node;

    head->data = 10;
    head->next = second;
    second->data = 12;
    second->next = NULL;

    TraverseLinkedList(head);
    head= insertAtFirst(head,8);
    TraverseLinkedList(head);

    TraverseLinkedList(head);
    head= insertAtFirst(head,6);
    TraverseLinkedList(head);
    
    TraverseLinkedList(head);
    head= insertAtFirst(head,4);
    TraverseLinkedList(head);
    
    TraverseLinkedList(head);
    head= insertAtFirst(head,3);
    TraverseLinkedList(head);
    
    TraverseLinkedList(head);
    head= insertAtFirst(head,2);
    TraverseLinkedList(head);
    
    TraverseLinkedList(head);
    head= insertAtFirst(head,1);
    TraverseLinkedList(head);
    return 0;
}