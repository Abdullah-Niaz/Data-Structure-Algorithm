#include <iostream>
using namespace std;

struct Queue{
    int size;
    int front;
    int rear;
    int *Q;
};
void display(struct Queue *q){
    for (int i = q->front + 1 ; i <= q->rear; i++)
    {
        cout<<"Data: "<<q->Q[i]<<endl;
    }    
};

void Enqueue(struct Queue *q, int x){
    if ((q->rear + 1) == q->front)
    {
        cout<<"Queue is Full";
    }
    else{
        q->rear = (q->rear + 1)% q->size;
        q->Q[q->rear] = x;
    }
    
}

int main(){
    struct Queue *q;
    q = (struct Queue *)(malloc(sizeof(struct Queue)));

    q -> size = 5;
    q -> front = -1;
    q -> rear = -1;
    q->Q = new int[q->size];
    Enqueue(q,5);
    Enqueue(q,6);
    Enqueue(q,7);
    
    display(q);
    return 0;

}