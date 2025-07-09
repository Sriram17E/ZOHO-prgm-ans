#include <iostream>
#include <string>
using namespace std;

int main() {
    string word = "PROGRAM";
    int n = word.length();

    for (int i = 0; i < n; i++) {
       
        for (int j = 0; j < n; j++) {
            if (j == i || j == n - 1 - i)
                cout << word[j];
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}











//P     M
 //R   A
 // O R
 //  G
 // O R
 //R   A
//P     M
