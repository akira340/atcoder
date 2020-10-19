#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<'\n';exit(0);}

void solve() {
  ll mod = 1e9+7;
  int n; cin >> n;
  vector<ll> a(n);
  vector<ll> s(n+1);
  for(int i=0; i<n; ++i) {
    cin >> a.at(i);
    s.at(i+1) = s.at(i) + a.at(i);
  }
  
  ll ans = 0;
  for(int i=0; i<n; ++i) {
    ans += ((__int128_t)(a.at(i))*(__int128_t)(s.at(n)-s.at(i+1)))%mod;
  }
  cout << (ans+mod)%mod << '\n';
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T=1;
  //cin >> T;
  while(T--) solve();

  return 0;
}
