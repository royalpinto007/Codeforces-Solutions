#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define read() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
    read();
    int t, n, x;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        int b = 2, ans = 1;
        while (b < n)
        {
            b += x;
            ans++;
        }
        cout << ans << endl;
    }

    return 0;
}