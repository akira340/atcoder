#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<'\n';exit(0);}

void solve() {
  int n, k; cin >> n >> k;
  vector<int> h(n+k);
  for(int i=0; i<n; ++i) cin >> h[i];

  long long INF = 1LL<<60;
  vector<long long> dp(n+k,INF);
  dp[0] = 0;
  for(int i=0; i<n; ++i) {
    for(int j=1; j<=k; ++j) {
      dp.at(i+j) = min(dp.at(i+j), dp.at(i) + abs(h.at(i)-h.at(i+j)));
    }
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
