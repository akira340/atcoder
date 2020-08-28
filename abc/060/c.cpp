#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<'\n';exit(0);}

void solve() {
  int n, T; cin >> n >> T;

  int t, ans=0, x=0;
  for(int i=0; i<n; ++i) {
    cin >> t;
    ans += t+T;
    ans -= max(t,x);
    x = t+T;
  }
  cout << ans << '\n';
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T=1;
  //cin >> T;
  while(T--) solve();

  return 0;
}
