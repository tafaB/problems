#include "bits/stdc++.h"
#include <cstdio>
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
typedef pair<ll, ll> pi;
typedef map<ll, ll> mi;
typedef vi::iterator vi_it;
typedef mi::iterator mi_it;
template <typename T> using min_heap = priority_queue<T, vector<T>, greater<T>>;
template <typename T> using max_heap = priority_queue<T>;
template <typename T>
using custom_heap = priority_queue<T, vector<T>, function<bool(T, T)>>;
void solve();
int main() {
#ifndef ONLINE_JUDGE
  freopen("file.in", "r", stdin);
#endif
  ll t = 1;
  cin >> t;
  while (t--)
    solve();
  return 0;
}

void solve() {
  int n;
  cin >> n;
  int a[n];
  vi v;
  for (int i = 0; i < n; i++){
    cin >> a[i];
    v.push_back(a[i]);
  }
  print_array(a,n);
  print(v);
}
