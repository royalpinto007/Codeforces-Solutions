#include<iostream>
using namespace std;

int main(){
    int w;
    cin>>w;
    
    if(w==2){
        cout<<"NO";
    }
    
    if(w%2==0  && w!=2){
        cout<<"YES";
    }
    
    else if (w%2!=0){
        cout<<"NO";
    }
}
