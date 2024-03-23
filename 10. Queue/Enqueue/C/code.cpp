#include <iostream>
using namespace std;

struct Queue {
    int size;
    int front;
    int rare;
    int *Q;
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
    for (int i = q->front + 1; i <q->rare ; i++)
    {
        cout<<"Data Element at Index: "<<i<<" is: "<<q->Q[i] <<endl;
    }
    
}

int main(){
    struct Queue *q;
    q = (struct Queue * )(malloc(sizeof(struct Queue)));
    cout<<"Enter the Size of Queue: ";
    cin>>q->size;
    // q->Q = (int *)malloc(sizeof(q->size * sizeof(int)));
    q->Q = new int[q->size];
    q->front = -1;
    q->rare = -1;


    enqueue(q,5);
    enqueue(q,15);
    enqueue(q,25);
    enqueue(q,35);
    display(q);
    return 0;
}