#include<iostream>
#include<string>
using namespace std;

void lookAndSay(int n) {
    string term = "1";

    for (int i = 1; i <= n; i++) {
        cout << term << endl;

        string next = "";
        int count = 1;
        for (int j = 1; j < term.size(); j++) {
            if (term[j] == term[j - 1]) {
                count++;
            } else {
                next += to_string(count) + term[j - 1];
                count = 1;
            }
        }
        next += to_string(count) + term.back();
        term = next;
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    lookAndSay(n);
    return 0;
}




// Sample input:
// Enter n: 6
//
// Output:
// 1
// 11
// 21
// 1211
// 111221
// 312211
