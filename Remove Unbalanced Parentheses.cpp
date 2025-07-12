#include<iostream>
#include<stack>
#include<string>
using namespace std;

string removeUnbalanced(string s) {
    stack<int> st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(')
            st.push(i);
        else if (s[i] == ')') {
            if (!st.empty())
                st.pop();
            else
                s[i] = '*';
        }
    }

    while (!st.empty()) {
        s[st.top()] = '*';
        st.pop();
    }

    string result = "";
    for (char c : s) {
        if (c != '*')
            result += c;
    }
    return result;
}

int main() {
    string expr1 = "((abc)((de))";
    string expr2 = "(((ab)";

    cout << removeUnbalanced(expr1) << endl; // ((abc)(de))
    cout << removeUnbalanced(expr2) << endl; // (ab)
    return 0;
}



// Output:
// ((abc)(de))
// (ab)

