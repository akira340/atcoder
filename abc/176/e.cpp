#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<'\n';exit(0);}

void solve() {
  int h,w,n; cin >> h >> w >> n;

  vector<pair<int,int>> sx(h), sy(w);
  for(int i=0; i<h; ++i) sx[i].second=i;
  for(int i=0; i<w; ++i) sy[i].second=i;
  set<pair<int,int>> a;
  for(int i=0; i<n; ++i) {
    int x, y;
    cin >> x >> y;
    --x; --y;
    ++sx[x].first; ++sy[y].first;
    a.insert(make_pair(x,y));
  }
  sort(sx.rbegin(), sx.rend());
  sort(sy.rbegin(), sy.rend());
  int ret=0;
  for(const auto& i : sx) {
    for(const auto& j : sy) {
      int d = a.count(make_pair(i.second, j.second));
      ret = max(ret, i.first + j.first - d);
      if(d==0) break;
    }
  }
  cout << ret << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T=1;
  //cin >> T;
  while(T--) solve();

  return 0;
}
