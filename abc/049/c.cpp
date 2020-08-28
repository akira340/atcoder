#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<'\n';exit(0);}

void solve() {
  string s; cin >> s;
  reverse(s.begin(), s.end());
  string ss = "";
  for(int i=0; i<s.size(); ++i) {
    ss += s.at(i);
    if(ss == "maerd" || ss == "remaerd" || ss == "esare" || ss == "resare") ss = "";
  }
  cout << (ss == "" ? "YES" : "NO") << '\n';
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T=1;
  //cin >> T;
  while(T--) solve();

  return 0;
}
