#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<'\n';exit(0);}

void solve() {
  int n=9, m=9;
  for(int i=0; i<n; ++i) {
    for(int j=0; j<m; ++j) {
      if(j!=i) {
        cout << 1 << " ";
      } else {
        cout << 0 << " ";
      }
    }
    cout << '\n';
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
