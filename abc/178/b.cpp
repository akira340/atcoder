#include <bits/stdc++.h>
using namespace std;

template<typename T> void drop(const T &x){cout<<x<<'\n';exit(0);}

void solve() {
  long long a, b, c, d;
  cin >> a >> b >> c >> d;
  long long ans = a*c;
  ans = max(ans, a*d);
  ans = max(ans, b*c);
  ans = max(ans, b*d);
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
