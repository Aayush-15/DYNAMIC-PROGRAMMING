#include<bits/stdc++.h>
using namespace std;
#define int long long
#define F   first
#define s   Second
const int mod = 1e9 + 7;
void solve()
{
	int n;
	cin >> n;
	int moves[6];
	for (int i = 0; i < 6; i++)
	{
		moves[i] = i + 1;
	}
	int dp[n + 1];
	memset(dp, 0, sizeof(dp));
	dp[0] = 1;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (i - moves[j] >= 0)
			{
				dp[i] += (dp[i - moves[j]]);
				dp[i] %= mod;
			}
		}
	}
	cout << dp[n];
}
int32_t main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t = 1;
	//cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}