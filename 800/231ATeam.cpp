#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>> t;
    int a, b, c;
    int sum=0;
  
    while(t--){
        
        cin>>a>>b>>c;
        
        if (a+b+c >= 2){
            sum+= 1;
        }
    }
    cout<<sum<<endl;
    return 0;
}
