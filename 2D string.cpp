#include<iostream>
#include<string>
using namespace std;

int main() {
    string str = "WELCOMETOZOHOCORPORATION";
    int len = 5;
    char matrix[5][5];
    int k = 0;

    for (int i = 0; i < len; i++)
        for (int j = 0; j < len; j++)
            matrix[i][j] = str[k++];

    string word = "TOO";

    for (int i = 0; i < len; i++) {
        for (int j = 0; j <= len - word.size(); j++) {
            int l;
            for (l = 0; l < word.size(); l++) {
                if (matrix[i][j + l] != word[l]) break;
            }
            if (l == word.size()) {
                cout << "Start index : <" << i << "," << j << ">\n";
                cout << "End index   : <" << i << "," << j + l - 1 << ">\n";
            }
        }
    }

    for (int i = 0; i <= len - word.size(); i++) {
        for (int j = 0; j < len; j++) {
            int l;
            for (l = 0; l < word.size(); l++) {
                if (matrix[i + l][j] != word[l]) break;
            }
            if (l == word.size()) {
                cout << "Start index : <" << i << "," << j << ">\n";
                cout << "End index   : <" << i + l - 1 << "," << j << ">\n";
            }
        }
    }

    return 0;
}



output:
// Output:
// Start index : <1,2>
// End index   : <1,4>
// Start index : <1,2>
// End index   : <3,2>

