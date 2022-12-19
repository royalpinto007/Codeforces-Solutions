#include <bits/stdc++.h>
using namespace std;

int main()

{
    int t, n, a[10000];
    cin >> t;

    while (t--)
    {
        long long int ans = 0, sum1 = 0, sum2 = 0;
        int div = 0;
        cin >> n;
        int k = 0;
        for (int i = 1; i <= n; i++)
        {
            a[k++] = pow(2, i);
        }

        div = n / 2;
        sum1 = a[n - 1];
        for (int i = 0; i <= div - 2; i++)
        {
            sum1 += a[i];
        }
        for (int i = div - 1; i < n - 1; i++)
        {
            sum2 += a[i];
        }

        ans = abs(sum1 - sum2);
        cout << ans << endl;
    }

    return 0;
}