#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr + n);

    int result[n];
    int i = 0, j = n - 1, k = 0;
    while (i <= j) {
        if (k % 2 == 0)
            result[k++] = arr[j--];
        else
            result[k++] = arr[i++];
    }

    for (int x = 0; x < n; x++)
        cout << result[x] << " ";
    return 0;
}


// Output:
// 7 1 6 2 5 3 4
