#include<iostream>
using namespace std;


int main(){
    
    string s;
    cin>>s;
    bool seen[256] = {};
    
    for(char c : s)
        if(seen[c]) return cout<<"First duplicate : "<<c,0;
        else seen[c] = true;
           cout<<"No duplicate  ";
           
           return 0;
}

//output:
//sriram
//First duplicate : r
//cat
//No duplicate
