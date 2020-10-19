#include <bits/stdc++.h>
using namespace std;

template<typename T> void drop(const T &x){cout<<x<<'\n';exit(0);}

const long long mod = 1e9+7;

void solve() {
  int n;
  cin >> n;
  vector<int> dp(n+1);
  dp[0] = 1;
  for(int i = 1; i < n+1; ++i) {
    if(i >= 3) dp[i] = dp[i-1] + dp[i-3];
    dp[i] %= mod;
  }
  cout << dp[n] << '\n';
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T=1;
  //cin >> T;
  while(T--) solve();

  return 0;
}
