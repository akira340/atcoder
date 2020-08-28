#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<endl;exit(0);}

void solve() {
  int n; cin >> n;
  ll ans=1;
  int mod = 1e9 + 7;
  for(int i=1; i<=n; ++i) {
    ans*=i;
    ans%=mod;
  }
  cout << ans << '\n';

  return;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T=1;
  //cin >> T;
  while(T--) solve();

  return 0;
}
