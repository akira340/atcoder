#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<'\n';exit(0);}

void solve() {
  int n; cin >> n;
  string s; cin >> s;

  int ans = 0;
  for(int i=0; i<n; ++i) {
    if(s[i] == 'A') {
      if(s[i+1] == 'B') {
        if(s[i+2] == 'C') {
          ans++;
        }
      }
    }
  }
  cout << ans << '\n';
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T=1;
  //cin >> T;
  while(T--) solve();

  return 0;
}
