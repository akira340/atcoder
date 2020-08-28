#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<'\n';exit(0);}

void solve() {
  int n; cin >> n;
  vector<int> c(n-1), s(n-1), f(n-1);
  for(int i=0; i<n-1; ++i) {
    cin >> c.at(i) >> s.at(i) >> f.at(i);
  }

  for(int i=0; i<n; ++i) {
    int ans = 0;
    for(int j=i; j<n-1; ++j) {
      if(ans < s[j]) {
        ans = s[j];
      } else if(ans % f[j] == 0) {
      } else {
        ans += f[j] - ans % f[j];
      }
      ans += c[j];
    }
    cout << ans << '\n';
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T=1;
  //cin >> T;
  while(T--) solve();

  return 0;
}
