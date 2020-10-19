#include <bits/stdc++.h>
using namespace std;

template<typename T> void drop(const T &x){cout<<x<<'\n';exit(0);}

void solve() {
  int n;
  cin >> n;
  vector<int> a, b;
  for(int i = 0; i < n; ++i) {
    int x, y;
    cin >> x >> y;
    a.push_back(x+y);
    b.push_back(x-y);
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  long long ans = max(a.back()-a[0], b.back()-b[0]);
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
