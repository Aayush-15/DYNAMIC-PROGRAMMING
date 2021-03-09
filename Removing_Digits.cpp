#include<bits/stdc++.h>
using namespace std;
#define F                 first
#define S                 second
#define pb                push_back
#define mp                make_pair
const int mod = 1e9+7;
void solve()
{
  int n;
  cin>>n;
  vector<int>dp(n+1,1e9);
  dp[0]=0;
  for(int i=1;i<=n;i++)
  {
    for(auto x:to_string(i))
    {
      int kk=x-'0';
      dp[i]=min(dp[i],1+dp[i-kk]);
    }
  }
  cout<<dp[n];
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
    //cerr<<"Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " seconds.\n";
  return 0;
}