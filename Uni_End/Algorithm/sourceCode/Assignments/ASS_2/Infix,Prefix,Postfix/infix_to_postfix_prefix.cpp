#include <iostream>
#include <string>

using namespace std;

// Stack structure to hold characters
struct Stack {
    int size;  // Size of the stack, it depends upon the expression of user
    int top;   // Top pointer of the stack
    char *s;   // Character array to store stack elements
};
// Function to create a stack with the specified size
void create(struct Stack *st, int size) {
    st->size = size;  // Set the size of the stack (which passed as length from infixtopostfix function)
    st->s = new char[size];  // Dynamically allocate memory for the stack
    st->top = -1;  // Initialize top pointer to -1 indicating empty stack
}

// Function to push a character onto the stack
void push(struct Stack *st, char x) {
    if (st->top == st->size - 1) {
        cout << "Stack Full" << endl;  // Stack is full
    } else {
        st->top++;  // Increment top pointer (over the array to top the next element)
        st->s[st->top] = x;  // Push the character onto the stack
    }
}

// Function to pop a character from the stack
char pop(struct Stack *st) {
    if (st->top == -1) {
        cout << "Stack Empty" << endl;  // Stack is empty
        return -1;  // Indicate failure in term of no element in stack
    } else {
        char x = st->s[st->top];  // Retrieve the character from the top of the stack
        st->top--;  // Decrement top pointer
        return x;  // Return the popped character
    }
}

// Function to return the top element of the stack without removing it
char peek(struct Stack *st) {
    if (st->top == -1) {
        return -1;  // Stack is empty, return -1
    } else {
        return st->s[st->top];  // Return the top element of the stack
    }
}

// Function to check if the stack is empty
bool isEmpty(struct Stack *st) {
    return st->top == -1;  // Return true if top pointer is -1, indicating empty stack
};

// Function to determine precedence of operators
int precedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    if (op == '^') // Exponentiation operator (^) has higher precedence
        return 3;
    return 0;  // Default precedence
};

// Function to reverse a string
string reverseString(const string& str) {
    string reversedStr = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        reversedStr += str[i];
    }
    return reversedStr;
}

// Function to convert infix expression to postfix
string infixToPostfix(const string& infix) {
    Stack stack;
    create(&stack, infix.length());  // Create a stack with size equal to length of infix expression

    string postfix = "";  // Initialize postfix expression string

    for (char c : infix) {
        if (isalnum(c)) {  // If character is operand, add it to postfix string
            postfix += c;
        } else if (c == '(') {  // If character is opening parenthesis, push it onto stack
            push(&stack, c);
        } else if (c == ')') {  // If character is closing parenthesis, pop operators from stack until matching '(' is found
            while (!isEmpty(&stack) && peek(&stack) != '(') {
                postfix += pop(&stack);
            }
            pop(&stack);  // Remove '(' from stack
        } else {  // If character is operator
            while (!isEmpty(&stack) && precedence(c) <= precedence(peek(&stack))) {
                postfix += pop(&stack);  // Pop operators with higher or equal precedence from stack and add them to postfix string
            }
            push(&stack, c);  // Push current operator onto stack
        }
    }

    // Pop remaining operators from stack to postfix
    while (!isEmpty(&stack)) {
        postfix += pop(&stack);
    }

    return postfix;  // Return the postfix expression
}

// Function to convert infix expression to prefix
string infixToPrefix(const string& infix) {
    string reversedInfix = reverseString(infix);  // Reverse the infix expression
    string modifiedInfix = "";  // Initialize modified infix expression string

    // Modify the operators
    for (char c : reversedInfix) {
        if (c == '(') {
            modifiedInfix += ')';
        } else if (c == ')') {
            modifiedInfix += '(';
        } else {
            modifiedInfix += c;
        }
    }

    Stack stack;
    create(&stack, modifiedInfix.length());  // Create a stack with size equal to length of modified infix expression

    string postfix = "";  // Initialize postfix expression string

    // Convert modified infix expression to postfix
    for (char c : modifiedInfix) {
        if (isalnum(c)) {  // If character is operand, add it to postfix string
            postfix += c;
        } else if (c == '(') {  // If character is opening parenthesis, push it onto stack
            push(&stack, c);
        } else if (c == ')') {  // If character is closing parenthesis, pop operators from stack until matching '(' is found
            while (!isEmpty(&stack) && peek(&stack) != '(') {
                postfix += pop(&stack);
            }
            pop(&stack);  // Remove '(' from stack
        } else {  // If character is operator
            while (!isEmpty(&stack) && precedence(c) <= precedence(peek(&stack))) {
                postfix += pop(&stack);  // Pop operators with higher or equal precedence from stack and add them to postfix string
            }
            push(&stack, c);  // Push current operator onto stack
        }
    }

    // Pop remaining operators from stack to postfix
    while (!isEmpty(&stack)) {
        postfix += pop(&stack);
    }

    // Reverse the postfix expression to obtain the prefix expression
    string prefix = reverseString(postfix);

    return prefix;  // Return the prefix expression
}

int main() {
    string infix_expression = "k+l-m*n+(o^p)*w/u/v*t+q";  // Example infix expression

    // Convert infix to postfix
    string postfix_expression = infixToPostfix(infix_expression);

    // Convert infix to prefix
    string prefix_expression = infixToPrefix(infix_expression);

    cout << "Infix Expression: " << infix_expression << endl;
    cout << "Postfix Expression: " << postfix_expression << endl;
    cout << "Prefix Expression: " << prefix_expression << endl;

    return 0;
}
