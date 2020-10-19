#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<'\n';exit(0);}

void solve() {
  int n; cin >> n;
  vector<int> a(n);
  for(int i=0; i<n; ++i) cin >> a.at(i);

  long long INF = 1LL<<60;
  vector<long long> dp(n,INF);
  dp.at(0) = 0;
  dp.at(1) = abs(a.at(0)-a.at(1));
  for(int i=0; i<n-2; ++i) {
    int x = dp.at(i) + abs(a.at(i)-a.at(i+2));
    int y = dp.at(i+1) + abs(a.at(i+1)-a.at(i+2));
    dp.at(i+2) = min(x,y);
  }
  cout << dp.at(n-1) << '\n';
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T=1;
  //cin >> T;
  while(T--) solve();

  return 0;
}
