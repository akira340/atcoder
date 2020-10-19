#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<'\n';exit(0);}

void solve() {
  int n; cin >> n;
  vector<vector<int>> a(n, vector<int> (3));
  for(int i=0; i<n; ++i) for(int j=0; j<3; ++j) cin >> a[i][j];

  vector<vector<int>> dp(n+1, vector<int> (3));
  for(int i=0; i<n; ++i) {
    for(int j=0; j<3; ++j) {
      for(int k=0; k<3; ++k) {
        if(j == k) continue;
        dp.at(i+1).at(k) = max(dp.at(i+1).at(k), dp.at(i).at(j)+a.at(i).at(k));
      }
    }
  }
  int ans = 0;
  for(int i=0; i<3; ++i) ans = max(ans, dp.at(n).at(i));
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
