#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<'\n';exit(0);}

void solve() {
  string a,b; cin >> a >> b;
  if(a.size()>b.size()) drop("GREATER");
  if(a.size()<b.size()) drop("LESS");
  if(a.size()==b.size()) {
    if(a.at(0) > b.at(0)) {
      drop("GREATER");
    } else if(a.at(0) < b.at(0)) {
      drop("LESS");
    } else {
      drop("EQUAL");
    }
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
