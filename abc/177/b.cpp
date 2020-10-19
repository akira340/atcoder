#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<'\n';exit(0);}

void solve() {
  string s, t; cin >> s >> t;

  int ans = 0;
  for(int i=0; i<s.size()-t.size()+1; ++i) {
    int count = 0;
    for(int j=0; j<t.size(); ++j) {
      if(s[i+j] == t[j]) count++;
    }
    ans = max(ans, count);
  }
  cout << t.size()-ans << '\n';
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T=1;
  //cin >> T;
  while(T--) solve();

  return 0;
}
