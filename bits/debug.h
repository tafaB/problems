#include <iostream>
#include <typeinfo>
#include <utility>
#include <vector>
#include <map>
#include <unordered_map>
#include <queue>
#define dbg(v) {cout<<"Line["<<__LINE__<<"] : "<<#v<<"="<<(v)<<'\n';}
#define GET_VARIABLE_NAME(Variable) (#Variable)
#define dbg_array(x, n) {cout<<"Line["<<__LINE__<<"] : "<<#x"[ ";for(long long _=0;_<n;++_)cout<<(x)[_]<<' ';cout<<"]\n";}
using namespace std;
typedef long long int ll;
const ll MOD_DEBUG = 1000000007;
template <typename T> ostream& operator<<(ostream& out, vector<T> v){
    if (v.empty()) { out << "[]"; return out; }
    out<<'[';
    for(ll i = 0; i < v.size() - 1; i++) out<<v[i]<<", ";
    return out<<v.back()<<"]\n";
}
template <typename T> ostream& operator<<(ostream& out, deque<T> deq) {
    if (deq.empty()) { out<< "[]"; return out; }
    out<<'[';
    for(ll i = 0; i < deq.size() - 1; i++) out<<deq[i]<<", ";
    return out<<deq.back()<<"]\n";
}
template <typename T1, typename T2> ostream& operator<<(ostream& out, pair<T1, T2> p) {
    return out<<'('<<p.first<<", "<< p.second<<"]\n";
}
template <typename T_1,typename T_2> ostream& operator<<(ostream& out, vector<pair<T_1,T_2> > v){
    if (v.empty()) { out<<"[]"; return out; }
    out<< '[';
    for (ll i = 0; i < v.size() - 1; i++) out<<v[i].first<<" -> "<<v[i].second<<'\n';
    return out<<v.back().first<<" -> "<<v.back().second<<"]\n";
}
template <typename T_1, typename T_2> ostream& operator<<(ostream& out, unordered_map<T_1,T_2>& m) {
    out << '{';
    for (typename::unordered_map<T_1,T_2>::iterator it = m.begin(); it != m.end(); it++) {
        out<<it->first<<" : "<<it->second;
        if (next(it) != m.end()) out << ", ";
    }return out << "}\n";
}
template <typename T_1, typename T_2> ostream& operator<<(ostream& out, map<T_1,T_2> m){
    out << '{';
    for (typename::map<T_1,T_2>::iterator it = m.begin(); it != m.end(); it++) {
        out<<it->first<<" : "<<it->second;
        if (next(it) != m.end()) out << ", ";   
    }return out << "}\n";
}
template <typename T> void print_max_heap(priority_queue<T> x){
    cout<<"max_heap: ";
    priority_queue<T> y = x;
    while (!y.empty()){
        cout<<y.top()<<" ";
        y.pop();
    }cout<<'\n';
}
template <typename T> void print_min_heap(priority_queue<T, vector<T>, greater<T> > x){
    cout<<"min_heap: ";
    priority_queue<T, vector<T>, greater<T> > y = x;
    while (!y.empty()){
        cout<<y.top()<<" ";
        y.pop();
    }cout<<'\n';
}
ll gcd(ll a, ll b){
    if (b == 0) return a;
    return gcd(b, a % b);
}
string binary_string(ll num){
    string str;
    while(num){
        str+=num&1?'1':'0';
        num>>=1;
    }return str;
}
ll pw_with_mod(ll a, ll p) {
    ll x = a, res = 1;
    while (p) {
        if (p & 1) res = (res*x)%MOD_DEBUG;
        x = (x*x)%MOD_DEBUG;
        p >>= 1;
    }return res;
}
