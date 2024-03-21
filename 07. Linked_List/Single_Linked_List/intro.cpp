#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node {
    int data;
    struct Node *next_val;
};

// Traversal of linked list

void TraversalLinkedList(struct Node *ptr){
    while (ptr != NULL)
    {
        cout<<"Location Before: "<<ptr<<endl;
        cout<<"Elements: "<<ptr->data<<endl;
        ptr = ptr->next_val;
        cout<<"Location After: "<<ptr <<endl;
    }
    
}

int main(){
    struct Node *first, *second,*third,*fourth,*fifth,*sixth;

    // in c 
    first=  (struct Node * )(malloc(sizeof(struct Node)));
    second = (struct Node * )(malloc(sizeof(struct Node)));
    third = (struct Node * )(malloc(sizeof(struct Node)));
    fourth = (struct Node * )(malloc(sizeof(struct Node)));
    fifth = (struct Node * )(malloc(sizeof(struct Node)));
    sixth = (struct Node * )(malloc(sizeof(struct Node)));


    // in c++
    // first = new Node;
    // second = new Node;
    // third = new Node;
    // fourth = new Node;
    // fifth = new Node;
    // sixth = new Node;

    // Pointer First
    first->data = 8;
    first->next_val = second;

    // Pointer Second
    second->data = 16;
    second->next_val = third;
    // Pointer Third
    third->data = 24;
    third->next_val = fourth;
    fourth->data = 32;
    fourth->next_val = fifth;
    fifth->data = 40;
    fifth->next_val = sixth;
    sixth->data = 48;
    sixth->next_val = NULL;

    TraversalLinkedList(first);
    return 0 ;
}