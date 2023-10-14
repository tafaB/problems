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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> b = a;
    sort(all(b));
    int l = 0, r = n - 1;
    int index=0;
    vector<int> ans(k+1, 0);
    while (l<=r) {
        if(a[l]>=b[index] && a[r]>=b[index]) ans[b[index]]=r-l+1, index++;
        else if(a[l]<b[index]) l++;
        else if(a[r]<b[index]) r--;
        if(index>=n)break;
    }
    for (int i = 1; i <= k; i++) {
        cout << 2*ans[i] << " ";
    }
    cout << endl;
}
