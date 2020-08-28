#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<endl;exit(0);}

int man(int x1, int x2, int y1, int y2) {
  return abs(x1-x2)+abs(y1-y2);
}

void solve() {
  int n, m;
  cin >> n >> m;
  vector<pair<int,int>> a(n), b(m);
  for(int i=0; i<n; ++i) cin >> a.at(i).first >> a.at(i).second;
  for(int i=0; i<m; ++i) cin >> b.at(i).first >> b.at(i).second;

  for(int i=0; i<n; ++i) {
    int min=1e9, ans=0;
    for(int j=0; j<m; ++j) {
      int d = man(a.at(i).first, b.at(j).first, a.at(i).second, b.at(j).second);
      if(min>d) {
        min=d; ans=j+1;
      }
    }
    cout << ans << endl;
  }

  return;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T=1;
  //cin >> T;
  while(T--) solve();

  return 0;
}
