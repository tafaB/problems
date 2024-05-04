#include <iostream>
#include <vector>
using namespace std;
int dp[300001];
vector<int> a;
void solve() {
  int m;
  cin >> m;
  cout<<dp[m]<<endl;
}
int main() {
  //table creation
  int y=1, i=2;
  a.push_back(1);
  while(true){
    y+=i*(i+1)/2;
    i++;
    a.push_back(y);
    if(y>300000) break;
  }
  dp[0] = 0;
  dp[1]=1;
  for(int i=2; i<=300000; i++){
    dp[i]=INT_MAX;
    for(int j=0; j<(int)a.size()&& i>=a[j]; j++) dp[i] = min(dp[i], 1 +dp[i-a[j]]);
  }
  //table creation
  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}
