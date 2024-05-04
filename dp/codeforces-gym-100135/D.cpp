#include <iostream>
using namespace std;
void solve() {
  int n=8;
  int a[n][n];
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> a[i][j];
  int dp[n][n];
  for(int i=0; i<n; i++) for(int j=0; j<n; j++) dp[i][j] = 1e4+1;
  dp[n-1][0] = a[n-1][0];
  for(int i=n-1; i>=0; i--) {
    for(int j=0; j<n; j++) {
      if(i-1>=0) dp[i-1][j] = min(dp[i-1][j], dp[i][j] + a[i-1][j]);
      if(j+1<n) dp[i][j+1] = min(dp[i][j+1], dp[i][j] + a[i][j+1]);
      if(i-1>=0 && j+1<n) dp[i-1][j+1] = min(dp[i-1][j+1], dp[i][j] + a[i-1][j+1]);
    }
  }
  cout << dp[0][n-1];
}
int main() {
  freopen("king2.in", "r", stdin);
  freopen("king2.out", "w", stdout);
  int t = 1;
  while (t--) solve();
  return 0;
}
