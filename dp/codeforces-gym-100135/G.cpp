#include <iostream>
#include <vector>
using namespace std;
int dfs(vector<vector<int>> &g, vector<int> &v, int curr) {
  if(v[curr]!=-1) return v[curr];
  if(g[curr].size() == 0) return 0;
  int ans = 0;
  for(int i=0; i<g[curr].size(); i++) ans = max(ans, dfs(g,v,g[curr][i])+1);
  v[curr] = ans;
  return ans;
}
int main() {
  freopen("longpath.in","r",stdin);
  freopen("longpath.out","w",stdout);
  int n,m;
  cin>>n>>m;
  vector<vector<int>> g(n+1);
  for(int i=0; i<m; i++) {
    int b,e;
    cin>>b>>e;
    g[b].push_back(e);
  }
  vector<int> v(n+1,-1);
  int ans = 0;
  for(int i=1; i<=n; i++){
    ans = max(ans, dfs(g,v,i));
  }
  cout<<ans<<endl;
}
