#include <bits/stdc++.h>
using namespace std;

template<typename T> void drop(const T &x){cout<<x<<'\n';exit(0);}

const long long mod = 998244353;

void milkshake() {
  int n, k;
  cin >> n >> k;
  vector<int> l(k), r(k);
  for(int i = 0; i < k; i++) {
    cin >> l[i] >> r[i];
  }
  vector<int> dp(n+1);
  vector<int> dps(n+1);
  dp[1] = dps[1] = 1;
  for(int i = 2; i <= n; i++) {
    for(int j = 0; j < k; j++) {
      int li = i - r[j];
      li = max(li, 1);
      int ri = i - l[j];
      if(ri < 1) continue;
      dp[i] = ((__int64_t)dp[i] + dps[ri] - dps[li-1]) % mod;
    }
    dps[i] = (dps[i-1] + dp[i]) % mod;
  }
  cout << (dp[n] + mod) % mod << '\n';
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T=1;
  //cin >> T;
  while(T--) milkshake();

  return 0;
}
