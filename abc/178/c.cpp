#include <bits/stdc++.h>
using namespace std;

template<typename T> void drop(const T &x){cout<<x<<'\n';exit(0);}

const long long MOD = 1e9+7;

int64_t powmod(int a, int n) {
  int64_t ans = 1;
  for(int i = 0; i < n; ++i) ans = (ans*a)%MOD;
  return ans;
}

void solve() {
  int n;
  cin >> n;
  int64_t ans = powmod(10,n) - powmod(9,n) - powmod(9,n) + powmod(8,n);
  ans %= MOD;
  cout << (ans+MOD)%MOD  << '\n';
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T=1;
  //cin >> T;
  while(T--) solve();

  return 0;
}
