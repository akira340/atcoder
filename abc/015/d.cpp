#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<'\n';exit(0);}

void solve() {
  int w, n, kk; cin >> w >> n >> kk;
  vector<int> x(n), y(n);
  for(int i=0; i<n; ++i) cin >> x[i] >> y[i];

  vector<vector<vector<int>>> dp(n+1, vector<vector<int>>(kk+1, vector<int>(w+1)));
  for(int i=0; i<n; ++i) {
    for(int j=1; j<=kk; ++j) {
      for(int k=0; k<=w; ++k) {
        if(k >= x[i]) dp[i+1][j][k] = max(dp[i][j][k], dp[i][j-1][k-x[i]]+y[i]);
        else dp[i+1][j][k] = dp[i][j][k];
      }
    }
  }
  cout << dp[n][kk][w] << '\n';
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T=1;
  //cin >> T;
  while(T--) solve();

  return 0;
}
