#include<iostream>
using namespace std;

int main(){
    int n,a=0,b=1,c;
    
    cout<<"Enter the fibbnoseries: ";
    cin>>n;
    
    
    cout<<"Fibbnoseries: ";
    for(int i = 0; i <= n;i++){
        cout<<a<<" ";
        
        c=a+b;
        a=b;
        b=c;
    }
    
    return 0;
}

// Output:

//Enter the fibbnoseries: 1
//Fibbnoseries: 0 1 
