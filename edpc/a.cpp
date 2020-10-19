#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<'\n';exit(0);}

const long long INF = 1LL << 60;

void solve() {
  int n; cin >> n;
  vector<int> h(n);
  for(int i=0; i<n; ++i) cin >> h.at(i);

  vector<long long> dp(n,INF);
  dp[0] = 0;
  dp[1] = abs(h.at(1)-h.at(0));
  for(int i=0; i<n-2; ++i) {
    int a = dp.at(i) + abs(h.at(i)-h.at(i+2));
    int b = dp.at(i+1) + abs(h.at(i+1)-h.at(i+2));
    dp.at(i+2) = min(a,b);
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
