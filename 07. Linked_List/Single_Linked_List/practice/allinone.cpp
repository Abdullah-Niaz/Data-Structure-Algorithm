#include <iostream>
using namespace std;

struct linkedList{  
    int data;
    struct linkedList *next;
};
void display(struct linkedList *ptr){
    int count = 0 ;
    int sum = 0 ;
    while (ptr != NULL)
    {
        sum = sum + ptr->data;
        count++;
        cout<<ptr->data<<endl;
        cout<<"Address of Ptr: "<<ptr->next <<endl;
        ptr = ptr->next;
    }
    cout<<"Total Lenght of LinkedList: "<<count<<endl;
    cout<<"Sum of Linked List: "<<sum<<endl;
};

void search(struct linkedList *ptr,int key){
    while (ptr != NULL)
    {
        if(key == ptr->data){
            cout<<"Key Found at Address: "<<ptr;

        }
        ptr = ptr->next;
    }
    
}
int main(){
    struct linkedList *head,*first,*second,*third;
    head = new linkedList;
    first = new linkedList;
    second = new linkedList;
    third = new linkedList;
    head->data = 20;
    head->next = first;
    first->data = 40;
    first->next = second;
    second->data = 60;
    second->next = third;
    third->data = 80;
    third->next = NULL;
 
 
    display(head);
    search(head,60);
    return 0;
}