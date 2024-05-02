#include <iostream>
using namespace std;

struct Queue{
    int size;
    int front;
    int rare;
    int *Q;
};


void Enqueue(Queue *q,int x ){
    if(q->rare == q->size - 1){
        cout<<"Queue is Full";
    }
    else{
        q->rare++;
        q->Q[q->rare] = x;
    }
};

void isFull(Queue *q){
    if(q->rare == q->size - 1){
        cout<<"Queue is Full"<<endl;
    }
    else{
        cout<<"Queue is not Full"<<endl;
    }
}

void isEmpty(struct Queue *q){
    if(q->front == q->rare ){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        cout<<"Queue is Not Empty"<<endl;
    }
}
void display(struct Queue *q){
    for (int i = q->front + 1; i < q->rare; i++)
    {
        cout<<q->Q[i] <<endl;;
    }
    
}

int main(){
    Queue *q;
    q = new Queue;

    q->front = -1;
    q->rare = -1;
    q->size = 5;
    q->Q = new int[q->size];

    Enqueue(q,5);
    Enqueue(q,15);
    Enqueue(q,115);
    Enqueue(q,1115);
    Enqueue(q,11115);
    display(q);
    isFull(q);
    isEmpty(q);
    return 0;
}