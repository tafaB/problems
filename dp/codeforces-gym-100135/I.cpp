#include <iostream>
using namespace std;
int main() {
  int s, n;
  cin>>s>>n;
  int a[n];
  for(int i=0; i<n; i++) cin>>a[i];
  int dp[n+1][s+1];
  for(int i=0; i<=s; i++) dp[0][i]=0;
  for(int i=0; i<=n; i++) dp[i][0]=0;
  for(int i=1; i<=n; i++) {
    for(int j=1; j<=s; j++) {
      if(a[i-1]>j) dp[i][j] = dp[i-1][j];
      else dp[i][j] = max(dp[i-1][j], dp[i-1][j-a[i-1]] + a[i-1]);
    }
  }
  cout<<dp[n][s];
  return 0;
}
