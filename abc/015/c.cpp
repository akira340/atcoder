#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<'\n';exit(0);}

void solve() {
  int n, k; cin >> n >> k;
  vector<vector<int>> t(n, vector<int>(k));
  for(int i=0; i<n; ++i) for(int j=0; j<k; ++j) cin >> t[i][j];

  int ans;
  for(int i=0; i<n; ++i) {
    for(int j=0; j<k; ++j) {
      ans = ;
    }
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T=1;
  //cin >> T;
  while(T--) solve();

  return 0;
}
