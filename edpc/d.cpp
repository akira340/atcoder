#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<'\n';exit(0);}

void solve() {
  int n, w;
  cin >> n >> w;
  vector<int> x(n), y(n);
  for(int i=0; i<n; ++i) cin >> x[i] >> y[i];

  vector<vector<long long>> dp(n+1, vector<long long>(w+1));
  for(int i=0; i<n; ++i) {
    for(int j=0; j<=w; ++j) {
      if(j >= x[i]) dp[i+1][j] = max(dp[i][j], dp[i][j-x[i]] + y[i]);
      else dp[i+1][j] = dp[i][j];
    }
  }
  cout << dp[n][w] << '\n';
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T=1;
  //cin >> T;
  while(T--) solve();

  return 0;
}
