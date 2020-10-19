#include <bits/stdc++.h>
using namespace std;

template<typename T> void drop(const T &x){cout<<x<<'\n';exit(0);}

void solve() {
  int n, w;
  cin >> n >> w;
  const int max_v = 1e5+1;
  const long long INF = 1LL<<60;
  vector<int> x(n), y(n);
  for(int i=0; i<n; ++i) cin >> x[i] >> y[i];

  vector<vector<long long>> dp(n+1, vector<long long>(max_v, INF));
  dp[0][0] = 0;
  for(int i=0; i<n; ++i) {
    for(int j=0; j<max_v; ++j) {
      if(j >= y[i]) dp[i+1][j] = min(dp[i][j], dp[i][j-y[i]] + x[i]);
      else dp[i+1][j] = dp[i][j];
    }
  }
  long long ans = 0;
  for(int i=0; i<max_v; ++i) {
    if(dp[n][i] <= w) ans = i;
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
