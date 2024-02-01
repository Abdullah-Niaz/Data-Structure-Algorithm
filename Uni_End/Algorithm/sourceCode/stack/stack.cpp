#include <iostream>
using namespace std;

class Stack
{
private:
    static int max_size;
    int *stk;
    int top = -1;

public:
    Stack(int Stack_Size)
    {
        max_size = Stack_Size;
        stk = new int[max_size];
    }

    ~Stack()
    {
        delete[] stk;
    }

    void push(int n){
        if(top == max_size - 1){
            cout<<"Stack is overflow";
        }
        else{
            top++;
            stk[top] = n ;
        }
    }







    void pop()
    {
        if (top == -1)
        {
            cout << "\nStack is Empty"<<endl;
        }
        else
        {
            cout << stk[top] << endl;
            top--;
        }
    }

    void display()
    {
        if (top != -1)
        {
            for (int i = top; i >= 0; i--)
            {
                if (top == i)
                {
                    cout << "\n"
                         << stk[i] << "      Top=" << top << endl;
                }
                else
                {
                    cout << stk[i] << endl;
                }
            }
        }
        else
        {
            cout << "\nNO Value in Stack\n";
        }
    }
};

// Initialize the static member outside the class
int Stack::max_size = 0;

int main()
{
    int max_stack_size;
    cout << "Enter the Max Size of Stack: ";
    cin >> max_stack_size;
    Stack stack(max_stack_size);
    int choice;

    while (choice != 4)
    {
        cout << "\n1 : Push" << endl;
        cout << "2 : Pop" << endl;
        cout << "3 : Display" << endl;
        cout << "4 : Exit" << endl;
        cout << "Enter Choice...";

        cin >> choice;

        switch (choice)
        {
        case 1:
            int item;
            cout << "\nEnter value to PUSH = ";
            cin >> item;
            stack.push(item);
            break;

        case 2:
            stack.pop();
            break;

        case 3:
            stack.display();
            break;
        }
    }

    return 0;
}
