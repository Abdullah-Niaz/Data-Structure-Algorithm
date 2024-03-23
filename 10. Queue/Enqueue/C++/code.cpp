#include <iostream>
using namespace std;

class Queue{
    private:
        int size;
        int front;
        int rare;
        int *Q;
    public:
        Queue(){
            front= rare = -1;
            size = 5;
            Q = new int[size];
        }
        Queue(int size){
            front = rare  = -1;
            this->size = size;
            Q = new int[this->size];
        }

        void enqueue(int x);
        int dequeue();
        void display();
};

void Queue::enqueue(int x){
    if(rare == size - 1){
        cout<<"Queue is Full"<<endl;
    }
    else{
        rare++;
        Q[rare] = x;
    }
};

int Queue::dequeue(){
    int x=-1;
    if(front == rare){
        cout<<"Queue is Empty";
    }
    else{
        front++;
        x = Q[front];

        // or  
        // x = q[front + 1];
        // front++;
    }
}

void  Queue::display(){
    for (int i = front+1; i <= rare; i++)
    {
        cout<<"Data: "<<Q[i]<<endl;
    }  
};

int main(){
    Queue  q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    
    q.display();
    return 0;
}