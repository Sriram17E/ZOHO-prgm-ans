#include<iostream>
using namespace std;

int main(){
    int n = 4;

    for(int i = n; i >= 1; i--){
        for(int j = i; j >= 1; j--){
            cout << j;
        }
        cout << endl;
    }

    return 0;
}


// Output:
// 4321   // First line: numbers from 4 to 1
// 321    // Second line: numbers from 3 to 1
// 21     // Third line: numbers from 2 to 1
// 1      // Fourth line: only number 1
