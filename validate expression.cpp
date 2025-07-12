#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool isValid(string exp) {
    stack<char> s;
    for (char c : exp) {
        if (c == '(')
            s.push(c);
        else if (c == ')') {
            if (s.empty())
                return false;
            s.pop();
        }
    }
    return s.empty();
}

int main() {
    string exp1 = "(a+b)(a*b)";
    string exp2 = "(ab)(ab+)";
    string exp3 = "((a+b)";

    cout << exp1 << " - " << (isValid(exp1) ? "Valid" : "Invalid") << endl;
    cout << exp2 << " - " << (isValid(exp2) ? "Valid" : "Invalid") << endl;
    cout << exp3 << " - " << (isValid(exp3) ? "Valid" : "Invalid") << endl;

    return 0;
}



// Output:
// (a+b)(a*b) - Valid
// (ab)(ab+) - Valid
// ((a+b) - Invalid
