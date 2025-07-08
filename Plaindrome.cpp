#include<iostream>
using namespace std;
int main(){
    string str;
    
    cout<<"Enter the string : ";
    cin>> str;
    
    int start = 0, end = str.length() - 1;
    bool ispalindrome = true;
    while(start < end ){
        if(str[start] != str[end])
           ispalindrome = false;
           break;
           
           start++;
           end++;
    }
    
    if(ispalindrome){
        cout<<"PALINDROME";
    
    }else{
        cout<<"NO";
    }
    return 0;
}



output
//Enter a string = str0
//NO
