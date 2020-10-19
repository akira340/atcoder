#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<'\n';exit(0);}

void solve() {
  int n, m; cin >> n >> m;
  vector<vector<int>> graph(n, vector<int> (n));
  vector<vector<int>> points(n, vector<int> (n, -1e9));
  int a, b, c;
  for(int i=0; i<n; ++i) {
    for(int j=0; j<n; ++j) {
      cin >> a >> b >> c;
      a--; b--; c--;
      graph[a][b] = c;
    }
  }

  stack<int> s;
  s.push(0);
  points[0][0];
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T=1;
  //cin >> T;
  while(T--) solve();

  return 0;
}
