#include <iostream>
using namespace std;

struct Queue{
    int size;
    int front;
    int rare;
    int *Q;
};

void display(Queue *q){
    for (int i = q->front + 1; i <= q->rare ; i++)
    {
        cout<<"Data: "<<q->Q[i]<<endl;
    }
    
}

void enqueue(Queue *q,int x){
    if(q->rare == q->size - 1){
        cout<<"Queue is Full";
    }
    else{
        q->rare++;
        q->Q[q->rare]  = x;
    }
};

int dequeue(Queue *q){
    int x = -1;
    if(q->front == q->rare){
        cout<<"Queue is Empty ";
    }
    else{
        q->front++;
        x = q->Q[q->front];
    }
    return x;
};

int main(){
    Queue *q;
    q = new Queue;
    q->front = q->rare = -1;
    q->size = 5;
    q->Q = new int[q->size];
    enqueue(q,5);
    enqueue(q,10);
    enqueue(q,20);
    enqueue(q,30);
    enqueue(q,40);

    display(q);


    return 0;
}