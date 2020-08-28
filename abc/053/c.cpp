#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<endl;exit(0);}

void solve() {
  ll x; cin >> x;
  ll ans=x/11*2;
  if(x%11==0) drop(ans);
  cout << (x%11>6?ans+2:ans+1) << endl;
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
