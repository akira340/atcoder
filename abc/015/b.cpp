#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<'\n';exit(0);}

void solve() {
  int n; cin >> n;
  double ans = 0, count = 0;
  for(int i=0; i<n; ++i) {
    int a; cin >> a;
    if(a != 0) count++;
    ans += a;
  }
  cout << ceil(ans/count) << '\n';
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T=1;
  //cin >> T;
  while(T--) solve();

  return 0;
}
