//bas divide krke remainder dekhna tha aur end me uss coin ko ya to one ya fir two coin me change krdena h .

#include <bits/stdc++.h>
#define ll            long long
#define pb            push_back
#define ld            long double
#define sz            size()
#define lala          for(ll i=0;i<n;i++)
#define pll           pair<ll,ll>
#define ed            "\n"
#define ct            cout
#define m_p           make_pair
#define vi            vector<ll>
#define vvi           vector<pll>
#define ff            first
#define ss            second
#define mod           1000000007


using namespace std;

void yo()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}


void hello()
{
    ll k,n,m,x,y,cnt=0,res=0,mx=1;
    ll sum=0;
    bool ash=false;
    string s;

    cin>>n;
    //ll a[n];
    ll c1=n/3;
    ll c2=n/3;

    if(n%3 == 1)
    {
        c1++;
    }
    else if(n%3 == 2)
    {
        c2++;
    }

    ct<<c1<< " "<<c2<<ed;

}

int main()
{
    yo();
    long long t=1;
    cin>>t;
    while(t--)hello();

    return 0;
}