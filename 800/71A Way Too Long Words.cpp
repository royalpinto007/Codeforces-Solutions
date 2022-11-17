#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    string s;
  
    while(t--){
        cin>>s;

        int x = s.size();
        if (x > 10)
        {
            cout << s[0] << x - 2 << s[x - 1] << endl;
        }
        else{
            cout<< s << endl;
        }
    }
}
