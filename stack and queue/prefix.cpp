#include <bits/stdc++.h>
using namespace std;

// Function to evaluate the postfix expression
int prnajl(string str) {
    stack<int> s;
    for (char c : str) {
        if (isdigit(c)) {
            // Convert the character to its corresponding integer value
            s.push(c - '0');
        } else {
            // Pop two operands from the stack
            int op2 = s.top();
            s.pop();
            int op1 = s.top();
            s.pop();
            
            // Perform the operation based on the operator
            switch (c) {
                case '+':
                    s.push(op1 + op2);
                    break;
                case '-':
                    s.push(op1 - op2);
                    break;
                case '*':
                    s.push(op1 * op2);
                    break;
                case '/':
                    s.push(op1 / op2);
                    break;
                default:
                    break;
            }
        }
    }
    
    // The result will be at the top of the stack
    return s.top();
}

int main() {
    string str = "512+4*+3-";
    cout << prnajl(str) << endl;
    return 0;
}
