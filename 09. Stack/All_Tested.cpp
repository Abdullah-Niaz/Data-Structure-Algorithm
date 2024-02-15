#include <iostream>
using namespace std;
using namespace std;


struct stack{
    int size;
    int top;
    int *s;
};

void create(struct stack *st){
    cout<<"Enter the Size of Stack: ";
    cin>>st->size;
    st->s = new int[st->size]; // IN C++
    st->top = -1;
    // st->s = (int * )(malloc(st->size*sizeof(int))); // IN C allocating memory dynamically
};

void push(struct stack *st, int x){
    if(st->top == st->size - 1){
        cout<<"Stack is full";
    }
    else{
        st->top++;
        st->s[st->top] = x;
    }
};


void display(struct stack st){
    if(st.top == -1 ){
        cout<<"Stack is Empty";
    }
    else{
        int i = 0 ;
        for (i = st.top; i >= 0; i--)
        {
            cout<<st.s[i]<<endl;;
        }
    }
};

int pop(struct stack *st){
    int x = -1;
    if(st->top == -1){
        cout<<"Stack is Empty";
    }
    else{
        x = st->s[st->top];
        st->top--;
    }
    return x;
};

int peak(struct stack *st,int position){
    int x = 1;
    if(st->top - position + 1 < 0 ){
        cout<<"Invalid Position";
    }
    else{
        x = st->s[st->top - position + 1 ];
    }
    return x;
}

int isEmpty(struct stack st){
    if(st.top == - 1){
        return 1;
    }
    return 0;
};

int isFull(struct stack st){
    if(st.top == st.size -1){
        return 1;
    }
    return 0;
};

int stactTop(struct stack st){
    if(st.top  == -1){
        return -1;
    }
    else{
        return st.s[st.top];
    }
};

int main(){
    
    // structure object 
    struct stack st;

    // creating a stack of particulare size dynamically
    create(&st);

    //Pushing all the elements in stack
    push(&st,10);
    push(&st,50);
    push(&st,60);
    push(&st,70);
    push(&st,80);

    // Displaying all the elements from stack 
    display(st);

    // Poping up the value form stack 
    int returned_pop = pop(&st);
    cout<<"Poped Value is : "<<returned_pop<<endl;

    // looking for value at a particular index 
    int is_returned_index = peak(&st,4);
    cout<<"Position of the Searched Element is : "<< is_returned_index<<endl;

    cout<<"=============="<<endl;
    
    //stack is empty or not
    int is_empty = isEmpty(st);
    cout<<"Stack is Empty: "<<is_empty<<endl;

    // Stack is full or not
    int is_full = isFull(st);
    cout<<"Stack is Full: "<<isFull<<endl;

    //Stack Top   
    int top_loc = stactTop(st);
    cout<<"Stack Top: "<<top_loc<<endl;
 
    return 0;
}