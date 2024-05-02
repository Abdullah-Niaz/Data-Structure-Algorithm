#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};

void display(struct Node *head){
    struct Node *ptr = head;
    while (ptr!=NULL)
    {
        cout<<"Data: "<< ptr->data<<endl;
        cout<<"Addres: "<<ptr<<endl;
        ptr = ptr->next;
    }
    
};

struct Node * DeletefromBetween(struct Node *head,int index){
    struct Node *ptr = head;
    int i = 0;
    while (i != index - 1)
    {
        ptr = ptr->next;
    }
    struct Node *temp = ptr->next;
    ptr->next = temp->next;
    free(temp);

    return head;
};




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
    n1 = DeletefromBetween(n1,1);
    display(n1);
    return 0;
}