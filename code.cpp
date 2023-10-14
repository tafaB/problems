#include "bits/stdc++.h"
#include <vector>
#ifndef ONLINE_JUDGE
#include "bits/debug.h"
#endif
#define SWAP(x, y, T)                                                          \
    do {                                                                         \
        T z = x;                                                                   \
        x = y;                                                                     \
        y = z;                                                                     \
    } while (0)
#define bin_to_int(BIN_STR) stoi(BIN_STR, 0, 2);
#define all(x) x.begin(), x.end()
#define endl '\n'
using namespace std;
typedef long long int ll;
typedef vector<ll> vi;
typedef priority_queue<ll> max_heap;
typedef priority_queue<ll, vector<ll>, greater<ll>> min_heap;
typedef pair<ll, ll> pi;
typedef map<ll, ll> mi;
typedef vi::iterator vi_it;
typedef mi::iterator mi_it;
const ll MOD = 1e9 + 7;
void solve();
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("file.in", "r", stdin);
#endif
    ll t = 1, i = 1;
    cin >> t;
    while (t--) {
        solve(), i++;
    }
    return 0;
}
void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n);
    vector<pair<int, int>> edges;
    int index = 0;
    map<int, int> number_index;
    vector<int> v;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        edges.push_back({x,y});
        if(number_index[x]==0) v.push_back(x), number_index[x]++;
        if(number_index[y]==0) v.push_back(y), number_index[y]++;
    }
    for(int i=0; i<v.size(); i++) number_index[v[i]]=i;
    for(int i=0; i<m; i++){
        g[number_index[edges[i].first]].push_back(number_index[edges[i].second]);
        g[number_index[edges[i].second]].push_back(number_index[edges[i].first]);
    }
    int leafs = 0;
    for(int i=0; i<g.size(); i++)
        if(g[i].size()==1) leafs++;
    cout<<m-leafs<<" "<<leafs/(m-leafs)<<endl;
}
