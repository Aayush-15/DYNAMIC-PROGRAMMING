#include<bits/stdc++.h>
using namespace std;
#define F                 first
#define S                 second
#define pb                push_back
#define mp                make_pair
const int mod = 1e9+7;
void solve()
{
  int n,target;
  cin>>n>>target;
  int coins[n+1];
  for(int i=0;i<n;i++)
    cin>>coins[i];
  int dp[n][target+1];//0 based indexing 
  memset(dp,0,sizeof(dp));
  for(int i=0;i<n;i++)
  {
    dp[i][0]=1;
  }
  for(int i=0;i<n;i++)
  {
    for(int j=1;j<=target;j++)
    {
      int op1=0,op2=0;
      if(i>0)
      {
        op1=dp[i-1][j];
      }
      if(j>=coins[i])
      {
        op2=dp[i][j-coins[i]];
      }
      dp[i][j]=(op1+op2);
      dp[i][j]%=mod;
    }
  }
  cout<<dp[n-1][target];
 
}
int main()
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