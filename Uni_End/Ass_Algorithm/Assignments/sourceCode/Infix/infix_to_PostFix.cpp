#include <iostream>
#include <stack>
#include <string>
#include <unordered_map>

using namespace std;

// Function to check if a character is an operator
bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

// Function to get the precedence of an operator
int getPrecedence(char op) {
    if (op == '^')
        return 3;
    else if (op == '*' || op == '/')
        return 2;
    else if (op == '+' || op == '-')
        return 1;
    else
        return -1; // Default precedence
}

// Function to convert infix expression to postfix expression
string infixToPostfix(const string& infix) {
    stack<char> s;
    string postfix = "";

    for (char c : infix) {
        if (isalnum(c)) {
            postfix += c;
        } else if (c == '(') {
            s.push(c);
        } else if (c == ')') {
            while (!s.empty() && s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            s.pop(); // Remove '('
        } else { // c is an operator
            while (!s.empty() && getPrecedence(c) <= getPrecedence(s.top())) {
                postfix += s.top();
                s.pop();
            }
            s.push(c);
        }
    }

    // Pop remaining operators from stack to postfix
    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }

    return postfix;
}

int main() {
    string infix_expression = "K + L - M*N + (O^P) * W/U/V * T + Q";
    string postfix_expression = infixToPostfix(infix_expression);

    cout << "Infix Expression: " << infix_expression << endl;
    cout << "Postfix Expression: " << postfix_expression << endl;

    return 0;
}
