#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<'\n';exit(0);}

void solve() {
  int n, k, l; cin >> n >> k >> l;
  vector<vector<int>> con1(n, vector<int> (n));
  vector<vector<int>> con2(n, vector<int> (n));
  for(int i=0; i<k; ++i) {
    int x, y; cin >> x >> y;
    con1[x][y] = 1;
  }
  for(int i=0; i<l; ++i) {
    int x, y; cin >> x >> y;
    con2[x][y] = 1;
  }
  for(int i=0; i<n; ++i) {
    for(int j=i+2; j<n; ++j) {
      cout << con1[i][j]+con2[i][j] << " ";
    }
  }
  cout << '\n';
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T=1;
  //cin >> T;
  while(T--) solve();

  return 0;
}
