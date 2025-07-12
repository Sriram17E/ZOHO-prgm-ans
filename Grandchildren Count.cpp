#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main() {
    vector<pair<string, string>> relations = {
        {"luke", "shaw"},
        {"wayne", "rooney"},
        {"rooney", "ronaldo"},
        {"shaw", "rooney"}
    };

    map<string, vector<string>> parentToChildren;

    for (auto rel : relations)
        parentToChildren[rel.second].push_back(rel.first);

    string person = "ronaldo";
    int count = 0;

    for (auto child : parentToChildren[person]) {
        count += parentToChildren[child].size();
    }

    cout << "Number of grandchildren: " << count << endl;
    return 0;
}

inputs:
{"luke", "shaw"},       // shaw → luke  
{"wayne", "rooney"},    // rooney → wayne  
{"rooney", "ronaldo"},  // ronaldo → rooney  
{"shaw", "rooney"}      // ronaldo → shaw  


// Output:
// Number of grandchildren: 2

