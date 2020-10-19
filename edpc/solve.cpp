#include <bits/stdc++.h>
using namespace std;

template<typename T> void drop(const T &x){cout<<x<<'\n';exit(0);}

void solve() {
  int n, d;
  cin >> n >> d;
  vector<vector<int>> x(n, vector<int>(d));
  for(int i=0; i<n; ++i) {
    for(int j=0; j<d; ++j) {
      cin >> x[i][j];
    }
  }

  int ans = 0;
  for(int i=0; i<n; ++i) {
    for(int j=i+1; j<n; ++j) {
      int a = 0, b = 0;
      for(int k=0; k<d; ++k) {
        a += pow(x[i][k]-x[j][k], 2);
        b += pow(x[i][k]-x[j][k], 2);
      }
      if((int)sqrt(a) == sqrt(b)) ans++;
    }
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
