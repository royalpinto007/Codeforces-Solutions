#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    long long int a, b, ans, c;
    cin >> t;
    while (t--)
    {
        ans = 0;
        c=0;
        cin >> a >> b;
        if (a == b)
        {
            cout << 0 << "\n";
            continue;
        }
        if (a > b)
        {
            c = a - b;
            ans++;
            if (c % 2 != 0)
            {
                ans++;
            }
        }
        else if (a < b)
        {
            c = b - a;
            ans++;
            if (c % 2 != 1)
            {
                ans++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}