#include <iostream>
using namespace std;
int main() {
  int n;
  cin>>n;
  if(n==0) {
    cout<<1;
    return 0;
  }
  int dp[3][n+1];
  dp[0][1] = 1, dp[1][1] = 1, dp[2][1] = 1;
  for(int i=2; i<=n; i++) {
    dp[0][i] = dp[0][i-1] + dp[2][i-1];
    dp[1][i] = dp[0][i-1] + dp[1][i-1] + dp[2][i-1];
    dp[2][i] = dp[0][i-1] + dp[1][i-1] + dp[2][i-1];
  }
  cout<<dp[0][n] + dp[1][n] + dp[2][n];
  return 0;
}
