#include<bits/stdc++.h>
using namespace std;
#define F                 first
#define S                 second
#define pb                push_back
#define mp                make_pair
#define no_of_test(zzz)   int zzz; cin>>zzz; while(zzz--)
#define p(c)              cout<<c<<'\n';
#define ps(c)             cout<<c<<" ";
#define all(x)            (x).begin(),(x).end()
#define f(i,a,b)          for(int i=a;i<b;i++)
#define inf               1e18
const int mod = 1e9+7;
int main()
{
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //As there is a single instance of every item 
    //0-1 Knapsack Problem
    //no_of_test(zzz)
    {
      int n,P;//n->Number of items,P->Capcaity Of Knapsack
      cin>>n>>P;
      int pages[n],price[n];
      for(int i=0;i<n;i++)
      {
        cin>>price[i];
      }
      for(int i=0;i<n;i++)
      {
        cin>>pages[i];
      }
      int dp[n+1][P+1];
      for(int i=0;i<=P;i++)
      {
        dp[0][i]=0;
      }
      for(int i=0;i<=n;i++)
      {
        dp[i][0]=0;
      }
      for(int i=1;i<=n;i++)
      {
        for(int j=0;j<=P;j++)
        {
          if(price[i-1]>j)// price is greater than maximum price at this instant
          {
            dp[i][j]=dp[i-1][j];
          }
          else
          {
            dp[i][j]=max(dp[i-1][j],pages[i-1]+dp[i-1][j-price[i-1]]);
          }
        }
      }
      cout<<dp[n][P];
    }   
    cerr<<"Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " seconds.\n";
  return 0;
}