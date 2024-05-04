#include <cstring>
#include <iostream>
using namespace std;
void solve() {
  int n,m;
  cin>>n>>m;
  int dp[n][m];
  memset(dp,0,sizeof(dp));
  dp[0][0] = 1;
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++) {
      if(i+1<n && j+2<m) dp[i+1][j+2]+=dp[i][j];
      if(i+2<n && j+1<m) dp[i+2][j+1]+=dp[i][j];
    }
  }
  cout<<dp[n-1][m-1];
}
int main() {
  freopen("knight.in", "r", stdin);
  freopen("knight.out", "w", stdout);
  int t = 1;
  while (t--)
    solve();
  return 0;
}
