#include <iostream>
using namespace std;
void solve() {
  int n;
  cin>>n;
  int a[n+1];
  for(int i=1; i<=n; i++) cin>>a[i];
  int dp[n+1];
  dp[0] = 0;
  dp[1] = a[1];
  for(int i=2; i<=n; i++) dp[i] = max(dp[i-1],dp[i-2]) + a[i];
  cout<<dp[n]<<endl;
}
int main() {
  freopen("ladder.in", "r", stdin);
  freopen("ladder.out", "w", stdout);
  int t=1;
  while (t--) solve();
  return 0;
}
