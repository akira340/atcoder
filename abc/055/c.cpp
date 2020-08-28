#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<endl;exit(0);}

void solve() {
  ll n, m; cin >> n >> m;
  ll cc=m/2;
  ll ans;
  if(cc<n) {
    ans = cc;
  } else {
    ans=n;
    m-=n*2; m/=4;
    ans+=m;
  }
  cout << ans << endl;

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
