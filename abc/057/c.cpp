#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<endl;exit(0);}

void solve() {
  uint64_t n; cin >> n;

  uint64_t a, i=1;
  while(i*i <= n) {
    if(n%i==0) a=i;
    ++i;
  }
  uint64_t b = n/a, ans=0;
  while(b) {
    b/=10; ++ans;
  }
  cout << ans << '\n';

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
