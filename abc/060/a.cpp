#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<'\n';exit(0);}

void solve() {
  string a, b, c; cin >> a >> b >> c;
  if(a.at(a.size()-1) != b.at(0)) drop("NO");
  if(b.at(b.size()-1) != c.at(0)) drop("NO");
  cout << "YES" << '\n';
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T=1;
  //cin >> T;
  while(T--) solve();

  return 0;
}
