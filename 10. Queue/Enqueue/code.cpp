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


int main(){
    struct Queue *q;
    q = (struct Queue * )(malloc(sizeof(struct Queue)));
    cout<<"Enter the Size of Queue: ";
    cin>>q->size;
    // q->Q = (int *)malloc(sizeof(q->size * sizeof(int)));
    q->Q = new int[q->size];
    cout<<"Memory Allocated Successfuly on run time of size: "<<q->size;
    q->front = -1;
    q->rare = -1;


    enqueue( q , 5);
    return 0;
}