#include <iostream>
using namespace std;
void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int dp[n];
  dp[0] = 0;
  int c = 0;
  for (int i = 1; i < n; i++) {
    if (s[i] == 'w') {
      dp[i] = -1;
      continue;
    }
    int x = s[i] == '"';
    dp[i] = -1;
    if (i >= 1 && dp[i-1]!=-1) dp[i] = max(dp[i], dp[i - 1] + x);
    if (i >= 3 && dp[i-3]!=-1) dp[i] = max(dp[i], dp[i - 3] + x);
    if (i >= 5 && dp[i-5]!=-1) dp[i] = max(dp[i], dp[i - 5] + x);
  }
  cout << dp[n - 1];
}
int main() {
  freopen("lepus.in ", "r", stdin);
  freopen("lepus.out", "w", stdout);
  int t = 1;
  while (t--)
    solve();
  return 0;
}
