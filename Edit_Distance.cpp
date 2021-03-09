#include<bits/stdc++.h>
using namespace std;
#define F       first
#define S       second
#define pb      push_back
#define INF     1e18
const int mod = 1e9 + 7;
void solve()
{
	string A, B;
	cin >> A >> B;
	int n = A.length();
	int m = B.length();
	int dp[n + 1][m + 1];
	dp[0][0] = 0;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= m; j++)
		{
			if (i == 0)
			{
				dp[i][j] = j;
				continue;
			}
			else if (j == 0)
			{
				dp[i][j] = i;
				continue;
			}
			if (A[i - 1] == B[j - 1])
			{
				dp[i][j] = dp[i - 1][j - 1];
				continue;
			}
			dp[i][j] = 1 + min({dp[i - 1][j - 1], dp[i - 1][j], dp[i][j - 1]});
			//replace         insert         remove
		}
	}
	cout << dp[n][m];
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t = 1;
	//cin >> t;
	while (t--)
	{
		solve();
	}
	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " seconds\n";
	return 0;
}