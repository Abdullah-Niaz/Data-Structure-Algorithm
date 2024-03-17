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
            push(&stack, c);
            
        } else if (c == ')') { 
            while (!isEmpty(&stack) && peek(&stack) != '(') {
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