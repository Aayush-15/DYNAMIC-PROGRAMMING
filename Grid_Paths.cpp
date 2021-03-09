#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define F                 first
#define S                 second
#define int               long long
#define pb                push_back
#define mp                make_pair
#define pii               pair<int,int>
#define vec               vector<int>
#define mii               map<int,int>
#define pqb               priority_queue<int>
#define no_of_test(zzz)   int zzz; cin>>zzz; while(zzz--)
#define p(c)              cout<<c<<'\n';
#define f(i,a,b)          for(int i=a;i<b;i++)
const int mod = 1e9 + 7;
void speed()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
int32_t main()
{
	speed();
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	//no_of_test(zzz)
	{
		int n;
		cin >> n;
		int dp[n][n];
		char grid[n][n];
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				char x;
				cin >> x;
				grid[i][j] = x;
				if (x == '.')
					dp[i][j] = 0;
				else
					dp[i][j] = 0;
			}
		}
		if (grid[0][0] != '*')
			dp[0][0] = 1;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (grid[i][j] != '*')
				{
					if (i > 0 && grid[i - 1][j] != '*')
					{
						(dp[i][j] += dp[i - 1][j]) %= mod;
					}
					if (j > 0 && grid[i][j - 1] != '*')
					{
						(dp[i][j] += dp[i][j - 1]) %= mod;
					}
				}
				else
				{
					dp[i][j] = 0;
				}
			}
		}
		cout << dp[n - 1][n - 1] << '\n';
	}
	return 0;
}