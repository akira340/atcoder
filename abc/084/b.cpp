#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<'\n';exit(0);}

void solve() {
  int a, b; cin >> a >> b;
  string s; cin >> s;

  for(int i=0; i<s.size(); ++i) {
    if(i == a) {
      if(s.at(i) != '-') drop("No");
    } else {
      if(s.at(i) == '-') drop("No");
    }
  }
  cout << "Yes" << '\n';
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T=1;
  //cin >> T;
  while(T--) solve();

  return 0;
}
