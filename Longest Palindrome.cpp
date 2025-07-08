#include <iostream>
#include <algorithm>  
using namespace std;

int main() {
    string s, res = "";
    cin >> s;

    for (int i = 0; i < s.size(); i++)
        for (int j = i; j < s.size(); j++) {
            string sub = s.substr(i, j - i + 1), rev = sub;
            reverse(rev.begin(), rev.end());  
            if (sub == rev && sub.size() > res.size()) res = sub;
        }

    cout << "Longest Palindrome: " << res;
}



//Input:
//babad
//Output:
//Longest Palindrome: bab
