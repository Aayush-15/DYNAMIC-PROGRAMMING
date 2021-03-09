#include<bits/stdc++.h>
using namespace std;
#define F                 first
#define S                 second
#define int               long long 
#define pb                push_back
#define mp                make_pair
const int mod = 1e9+7;
void solve()
{
  int n,target;
  cin>>n>>target;
  int coins[n];
  for(int i=0;i<n;i++)
    cin>>coins[i];
  int dp[target+1];
  memset(dp,0,sizeof(dp));
  dp[0]=1;
  for(int i=1;i<=target;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(i>=coins[j])
      {
        dp[i]+=(dp[i-coins[j]]);
        dp[i]%=mod;
      }
    }
  }
  cout<<dp[target];
}
int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
  //cin>>t;
    while(t--)
    {
      solve();
    }
    cerr<<"Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " seconds.\n";
  return 0;
}
/*
*/