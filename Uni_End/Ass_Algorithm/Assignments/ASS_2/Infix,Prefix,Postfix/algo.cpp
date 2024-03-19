FUNCTION infixToPostfix(infixExpression: string) -> string
    // Initialize an empty stack to store operators
    stack <- empty Stack

    // Initialize an empty string to store the postfix expression
    postfixExpression <- ""

    // Define a function to determine the precedence of operators
    FUNCTION precedence(op: char) -> integer
        IF op is '+' or '-'
            RETURN 1
        ELSE IF op is '*' or '/'
            RETURN 2
        ELSE IF op is '^'
            RETURN 3
        ELSE
            RETURN 0

    // Iterate through each character in the infix expression
    FOR each character c in infixExpression DO
        IF c is an operand THEN
            Append c to postfixExpression
        ELSE IF c is '(' THEN
            Push c onto the stack
        ELSE IF c is ')' THEN
            // Pop operators from the stack until a matching '(' is found
            WHILE stack is not empty AND top of stack is not '(' DO
                postfixExpression += stack.pop()
            END WHILE
            // Remove '(' from stack
            stack.pop()
        ELSE // c is an operator
            WHILE stack is not empty AND precedence(c) <= precedence(top of stack) DO
                // Pop operators with higher or equal precedence from stack
                // and append them to postfixExpression
                postfixExpression += stack.pop()
            END WHILE
            // Push current operator onto stack
            stack.push(c)
        END IF
    END FOR

    // Pop remaining operators from stack to postfixExpression
    WHILE stack is not empty DO
        postfixExpression += stack.pop()
    END WHILE

    RETURN postfixExpression
END FUNCTION
