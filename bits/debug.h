#include <iostream>
#include <map>
#include <queue>
#include <stack>
using namespace std;
#define print_array(x,n) cout<<"["<<#x<<"] = [[";for(int i=0;i<n;i++)cout<<x[i]<<(i!=n-1?",":"");cout<<"]]\n";
void __print(int x) { cout << x; }
void __print(long x) { cout << x; }
void __print(long long x) { cout << x; }
void __print(unsigned x) { cout << x; }
void __print(unsigned long x) { cout << x; }
void __print(unsigned long long x) { cout << x; }
void __print(float x) { cout << x; }
void __print(double x) { cout << x; }
void __print(long double x) { cout << x; }
void __print(char x) { cout << '\'' << x << '\''; }
void __print(const char *x) { cout << '\"' << x << '\"'; }
void __print(const string &x) { cout << '\"' << x << '\"'; }
void __print(bool x) { cout << (x ? "true" : "false"); }
template <typename T, typename V> void __print(const pair<T, V> &x) {
  cout << '(';
  __print(x.first);
  cout << ',';
  __print(x.second);
  cout << ')';
}
template <typename T> void __print(const stack<T> &s) {
  stack<T> temp = s;
  cout << '[';
  while (!temp.empty()) {
    cout << temp.top();
    temp.pop();
    if (!temp.empty())
      cout << ',';
  }
  cout << ']';
}
template <typename T> void __print(const queue<T> &q) {
  queue<T> temp = q;
  cout << '[';
  while (!temp.empty()) {
    cout << temp.front();
    temp.pop();
    if (!temp.empty())
      cout << ',';
  }
  cout << ']';
}
template <typename T> void __print(const priority_queue<T> &pq) {
  priority_queue<T> temp = pq;
  cout << '[';
  while (!temp.empty()) {
    cout << temp.top();
    temp.pop();
    if (!temp.empty())
      cout << ',';
  }
  cout << ']';
}
template <typename T> void __print(const priority_queue<T, vector<T>, greater<T>> &pq) {
  priority_queue<T, vector<T>, greater<T>> temp = pq;
  cout << '[';
  while (!temp.empty()) {
    cout << temp.top();
    temp.pop();
    if (!temp.empty())
      cout << ',';
  }
  cout << ']';
}
template <typename T> void __print(const priority_queue<pair<T, T>> &pq) {
  priority_queue<pair<T, T>> temp = pq;
  cout << '[';
  while (!temp.empty()) {
    cout << '(' << temp.top().first << ',' << temp.top().second << ')';
    temp.pop();
    if (!temp.empty())
      cout << ',';
  }
  cout << ']';
}
template <typename T> void __print(const priority_queue<pair<T, T>, vector<pair<T, T>>, greater<pair<T, T>>> &pq) {
  priority_queue<pair<T, T>, vector<pair<T, T>>, greater<pair<T, T>>> temp = pq;
  cout << '[';
  while (!temp.empty()) {
    cout << '(' << temp.top().first << ',' << temp.top().second << ')';
    temp.pop();
    if (!temp.empty())
      cout << ',';
  }
  cout << ']';
}
template <typename T> void __print(const priority_queue<T, vector<T>, function<bool(T, T)>> &pq) {
  priority_queue<T, vector<T>, function<bool(T, T)>> temp = pq;
  cout << '[';
  while (!temp.empty()) {
    cout << temp.top();
    temp.pop();
    if (!temp.empty())
      cout << ',';
  }
  cout << ']';
}
template <typename T> void __print(const priority_queue<pair<T, T>, vector<pair<T, T>>, function<bool(pair<T, T>, pair<T, T>)>> &pq) {
  priority_queue<pair<T, T>, vector<pair<T, T>>, function<bool(pair<T, T>, pair<T, T>)>> temp = pq;
  cout << '[';
  while (!temp.empty()) {
    cout << '(' << temp.top().first << ',' << temp.top().second << ')';
    temp.pop();
    if (!temp.empty())
      cout << ',';
  }
  cout << ']';
}
template <typename T> void __print(const T &x) {
  int f = 0;
  cout << '[';
  for (auto it = x.begin(); it != x.end(); ++it) {
    if (f++)
      cout << ',';
    __print(*it);
  }
  cout << ']';
}
void _print() { cout << "]\n"; }
template <typename T, typename... V> void _print(T t, V... v) {
  __print(t);
  if (sizeof...(v))
    cout << ", ";
  _print(v...);
}
#define print(x...)                                                            \
  cout << "[" << #x << "] = [";                                                \
  _print(x)

typedef long long int ll;
string binary_string(ll num){
    string str;
    while(num){
        str+=num&1?'1':'0';
        num>>=1;
    }return str;
}
#define MOD_DEBUG 1000000007
ll pw_with_mod(ll a, ll p) {
    ll x = a, res = 1;
    while (p) {
        if (p & 1) res = (res*x)%MOD_DEBUG;
        x = (x*x)%MOD_DEBUG;
        p >>= 1;
    }return res;
}
