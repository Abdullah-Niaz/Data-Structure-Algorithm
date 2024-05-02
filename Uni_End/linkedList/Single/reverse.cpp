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



struct Node *reverse(struct Node *head){
    struct Node *ptr = head;
    int  i = 0;
    int *A = new int[5];
    while (ptr != NULL)
    {
        A[i] = ptr->data;
        ptr = ptr->next;
        i++;
    }
    ptr = head;
    i--;
    while (ptr != NULL)
    {
        ptr->data = A[i];
        i--;
        ptr = ptr->next;
    }
    return head;

}

int main(){
    struct Node *n1,*n2,*n3,*n4,*n5;
    n1 = (struct Node *)(malloc(sizeof(struct Node )));
    n2 = (struct Node *)(malloc(sizeof(struct Node )));
    n3 = (struct Node *)(malloc(sizeof(struct Node )));
    n4 = (struct Node *)(malloc(sizeof(struct Node )));
    n5 = (struct Node *)(malloc(sizeof(struct Node )));

    n1->data = 20;
    n1->next = n2;
    n2->data = 30;
    n2->next = n3;
    n3->data = 40;
    n3->next = n4;
    n4->data = 50;
    n4->next = n5;
    n5->data = 60;
    n5->next = NULL;

    display(n1);
    n1 = reverse(n1);

    cout<<"============";
    display(n1);
    return 0;
}