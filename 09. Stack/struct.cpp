#include <iostream>
using namespace std;

struct stack
{
    int size; // size of array
    int top;  // top position in array
    int *s;   // dynamically allocated array
};


void createStack(struct stack *st){

    cout << "Enter the Array Size: ";
    cin >> st->size;
    st->s = new int[st->size];
    st->top = -1;
}


void displayStack(struct stack st){
    for (int i = st.top; i >= 0; i--)
    {
        cout<<st.s[i]<<endl;
    }
}


void push(struct stack *st, int x)
{
    if (st->top == st->size - 1)
    {
        cout << "Stack is Overflow";
    }
    else
    {
        st->top++;
        st->s[st->top] = x;
    }
};

int pop(stack *st){
    int x = -1;
    if(st->top == -1){
        cout<<"Stack is Empty"<<endl;
    }
    else{
        x = st->s[st->top] ;
        st->top--;
    }
    return x;
}




void displaySize(stack *st) {
    cout << "Size of Stack is " << st->size<<endl; 
};
void stackFull(stack *st)
{
    if (st->top = st->size - 1)
    {
        cout << "Stack is Full"<<endl;
    }
    else{
        cout<<"Stack is Empty"<<endl;
    }
};
void stackEmpty(stack *st)
{
    if (st->top == -1)
    {
        cout << "Stack is Empty"<<endl;
    }
};



int main()
{
    struct stack st;
    createStack(&st);
    // push(&st,10);
    // push(&st,20);
    // push(&st,30);
    // push(&st,40);
    // push(&st,50);
    displayStack(st);
    int r = pop(&st);
    cout<<"Poped Values is: "<<r<<endl;
    displaySize(&st);
    // stackFull(&st);
    stackEmpty(&st);
    
    return 0;
}