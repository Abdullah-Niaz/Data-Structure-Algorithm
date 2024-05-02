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

struct Node * DeletefromEnd(struct Node *head){
    struct Node *ptr = head;
    struct Node *tem = ptr->next;
    while (tem->next != NULL){
        ptr = ptr->next;
        tem = tem->next;
    }
    ptr->next = NULL;
    free(tem);
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
    n1 = DeletefromEnd(n1);
    display(n1);
    return 0;
}