#include <iostream>
#include <stack>
using namespace std;

bool ValidParenthesis(string S) 
{
    stack<char> st;

    for (char ch : S) {
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);  
        } else {
            if (st.empty()) 
            {
                return false; 
            }

            char top = st.top();
            st.pop();
            if (!((top == '(' && ch == ')') ||
                  (top == '{' && ch == '}') ||
                  (top == '[' && ch == ']'))) {
                return false;  
            }
        }
    }

    return st.empty(); 
}
int main() {
    string input;
    cout << "Enter the parenthesis: ";
    cin >> input;

    if (ValidParenthesis(input)) {
        cout << "Parentheses are balanced or valid\n";
    } else {
        cout << "Parentheses are not balanced or not valid\n";
    }

    return 0;
}
