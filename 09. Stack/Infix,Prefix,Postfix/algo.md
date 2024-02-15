# Infix to Postfix Conversion Algorithm

This document outlines the algorithm for converting an infix expression to a postfix expression using a stack-based approach.

## Algorithm Description

### Input
- `infixExpression`: A string representing an infix expression.

### Output
- `postfixExpression`: A string representing the equivalent postfix expression.

### Steps

1. **Create an empty stack to store operators**
   - Initialize an empty stack to store operators encountered during the conversion process.

2. **Initialize an empty string to store the postfix expression**
   - Initialize an empty string named `postfixExpression` to store the resulting postfix expression.

3. **Define a function to determine the precedence of operators**
   - Define a function named `precedence(op)` that returns the precedence of an operator `op`.
     - The precedence values are assigned based on the order of operations (e.g., `+` and `-` have lower precedence than `*` and `/`).

4. **Iterate through each character in the infix expression**
   - For each character `c` in the `infixExpression`, perform the following steps:
     - If `c` is an operand, append it to the `postfixExpression`.
     - If `c` is a left parenthesis `'('`, push it onto the stack.
     - If `c` is a right parenthesis `')'`, pop operators from the stack and append them to `postfixExpression` until a matching left parenthesis `'('` is encountered. Then, pop the left parenthesis from the stack.
     - If `c` is an operator, while the stack is not empty and the precedence of `c` is less than or equal to the precedence of the top element of the stack, pop an operator from the stack and append it to `postfixExpression`. Then, push `c` onto the stack.

5. **Pop remaining operators from the stack**
   - After processing all characters in the infix expression, pop any remaining operators from the stack and append them to `postfixExpression`.

6. **Return the postfix expression**
   - Return the `postfixExpression` as the result of the conversion.

## Usage

```python
infix_expression = "a + b * c - d / e"
postfix_expression = InfixToPostfix(infix_expression)
print("Postfix Expression:", postfix_expression)
