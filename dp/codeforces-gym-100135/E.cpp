#include <iostream>
using namespace std;
void solve() {
  int h;
  cin >> h;
  int n = h*(h+1)/2;
  int a[n];
  int dp[n];
  for (int i = 0; i < n; i++){
    cin >> a[i];
    dp[i] = -200;
  }
  dp[0] = a[0];
  for(int i=1; i<h; i++) {
    for(int j=0; j<i; j++) {
      int curr_index = i*(i-1)/2+j;
      int down_index_left = i*(i+1)/2+j;
      int down_index_right = down_index_left+1;
      dp[down_index_left] = max(dp[down_index_left], dp[curr_index]+a[down_index_left]);
      dp[down_index_right] = max(dp[down_index_right], dp[curr_index]+a[down_index_right]);
    }
  }
  int ans = -200;
  for(int i=n-h; i<n; i++) {
    ans = max(ans, dp[i]);
  }
  cout<<ans<<endl;
}
int main() {
  int t = 1;
  while (t--) solve();
  return 0;
}
