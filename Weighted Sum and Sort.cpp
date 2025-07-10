#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

bool isPerfectSquare(int n) {
    int s = sqrt(n);
    return s * s == n;
}

int getWeight(int num) {
    int weight = 0;
    if (isPerfectSquare(num)) weight += 5;
    if (num % 4 == 0 && num % 6 == 0) weight += 4;
    if (num % 2 == 0) weight += 3;
    return weight;
}

int main() {
    vector<int> nums = {10, 36, 54, 89, 12};
    vector<pair<int, int>> result;

    for (int num : nums)
        result.push_back({num, getWeight(num)});

    sort(result.begin(), result.end(), [](pair<int, int> a, pair<int, int> b) {
        return a.second < b.second;
    });

    for (auto p : result)
        cout << "<" << p.first << "," << p.second << ">" << endl;

    return 0;
}


\\output
\\<89,0>
\\<10,3>
\\<54,3>
\\<12,7>
\\<36,12>
