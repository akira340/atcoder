#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<'\n';exit(0);}

void solve() {
  int n, m;
  cin >> n >> m;
  vector<int> count(n);
  int a, b;
  for(int i=0; i<m; ++i) {
    cin >> a >> b;
    count.at(a-1)++; count.at(b-1)++;
  }
  for(int i=0; i<n; ++i) cout << count.at(i) << '\n';    
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T=1;
  //cin >> T;
  while(T--) solve();

  return 0;
}
