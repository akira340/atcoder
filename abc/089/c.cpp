#include <bits/stdc++.h>
using namespace std;

template<typename T> void drop(const T &x){cout<<x<<'\n';exit(0);}

void solve() {
  int n;
  cin >> n;
  string s;
  vector<long long> a(5);
  while(n--) {
    cin >> s;
    if(s[0] == 'M') a[0]++;
    if(s[0] == 'A') a[1]++;
    if(s[0] == 'R') a[2]++;
    if(s[0] == 'C') a[3]++;
    if(s[0] == 'H') a[4]++;
  }

  long long ans = 0;
  for(int i=0; i<3; ++i) {
    for(int j=i+1; j<4; ++j) {
      for(int k=j+1; k<5; ++k) {
        ans += a[i]*a[j]*a[k];
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
