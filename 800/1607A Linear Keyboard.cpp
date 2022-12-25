#include <bits/stdc++.h>
using namespace std;
#define __FAST__             \
	ios::sync_with_stdio(0); \
	cin.tie(nullptr);
#define vin(a)       \
	for (ll & i : a) \
		cin >> i;
#define vout(a)    \
	for (ll i : a) \
		cout << i << " ";
typedef long long ll;
typedef vector<ll> vll;

void solve()
{
	map<char, int> idx;
	string s, t;
	cin >> t;

	for (int i = 0; i < 26; i++)
	{
		idx[t[i]] = i;
	}
	cin >> s;
	ll ans = 0;
	int n = s.length();
	for (int i = 1; i < n; i++)
	{
		ans += abs(idx[s[i]] - idx[s[i - 1]]);
	}
	cout << ans << endl;
}
int main()
{
	__FAST__
	int t;
	cin >> t;
	while (t--)
		solve();
}