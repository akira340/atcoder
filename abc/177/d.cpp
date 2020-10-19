#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<'\n';exit(0);}

void dfs(vector<vector<int>> &graph, int v) {
}

void solve() {
  int n, m; cin >> n >> m;
  vector<vector<int>> graph(n);
  int a, b;
  for(int i=0; i<m; ++i) {
    cin >> a >> b;
    a--; b--;
    graph.at(a).push_back(b);
    graph.at(b).push_back(a);
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
