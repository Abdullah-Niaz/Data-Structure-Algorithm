#include <iostream>
using namespace std;

struct Queue{
    int size;
    int front;
    int rare;
    int *Q;
};

int dequeue(struct Queue *q){
    int x = -1;
    if(q->front == q->rare){
        cout<<"Queue is Empty"<<endl;
    }
    else{
    q->front++;
    x = q->Q[q->front];
    }
    return x;
};


void enqueue(Queue *q, int x) {
    if (q->rare == q->size - 1)
    {
        cout<<"Queue is full";
    }
    else{
        q->rare++;
        q->Q[q->rare] = x;
    }
};



void display(struct Queue *q){
    for (int i = q->front + 1; i < q->rare; i++)
    {
        cout<<"Elements at index: "<<i <<" is: "<<q->Q[i]<<endl;
    }
    
}
int main(){
    struct Queue *q;
    q = (struct Queue *)(malloc(sizeof(struct Queue)));
    cout<<"Enter the Size of Array: ";
    cin>> q->size;
    q->Q = new int[q->size];
    q->front = q->rare =-1;
    enqueue(q,5);
    enqueue(q,15);
    enqueue(q,25);
    enqueue(q,35);
    display(q);
    int x = dequeue(q);
    cout<<"Deleted item: "<<x;
    return 0;
}