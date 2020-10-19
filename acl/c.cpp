#include <bits/stdc++.h>

using namespace std;

template<typename T> void drop(const T &x){cout<<x<<'\n';exit(0);}

struct UnionFind {
  vector<int> d;

  UnionFind(int n) : d(n, -1) {}
  int root(int x) {
    if(d[x] < 0) return x;
    return d[x] = root(d[x]);
  }

  bool unite(int x, int y) {
    x = root(x);
    y = root(y);
    if(x == y) return false;
    if(d[x] > d[y]) swap(x,y);
    d[x] += d[y];
    d[y] = x;
    return true;
  }

  bool same(int x, int y) {
    return root(x) == root(y);
  }

  int size(int x) {
    return -d[root(x)];
  }
};

void milkshake() {
  int n, m;
  cin >> n >> m;
  UnionFind uf(n);
  int ans = n - 1;
  for(int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    a--; b--;
    if(!uf.same(a, b)) {
      uf.unite(a, b);
      ans--;
    }
  }
  cout << ans << '\n';
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt=1;
  //cin >> tt;
  while(tt--) milkshake();

  return 0;
}

