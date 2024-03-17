// Function to convert infix expression to postfix
string infixToPostfix(const string& infix) {
    Stack stack;
    create(&stack, infix.length()); 
    string postfix = ""; 
    for (char c : infix) {
        if (isalnum(c)) {  
            postfix += c;
              // abc*+de
        } else if (c == '(') {
            push(&stack, c); // push that bracket inside the stack
        } else if (c == ')') { 
            while (!isEmpty(&stack) && peek(&stack) != '(') { // it will check the previous opening braacket and print the operators inside the opening and closing bracket 
                postfix += pop(&stack);
            }
            pop(&stack);
        } else { 
            while (!isEmpty(&stack) && precedence(c) <= precedence(peek(&stack))) {
                postfix += pop(&stack); 
            }
            push(&stack, c);
        }
    }
    while (!isEmpty(&stack)) {
        postfix += pop(&stack);
    }
    return postfix; 
}