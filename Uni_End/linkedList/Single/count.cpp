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

int Count(struct Node *head){
    struct Node *ptr = head;
    int count = 0;
    while (ptr != NULL)
    {
        count++;
        ptr  = ptr->next;
    }
    return count;
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
    int co  = Count(n1);
    cout<<"Count: "<<co;
    return 0;
}