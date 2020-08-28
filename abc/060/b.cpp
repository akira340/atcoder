#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<'\n';exit(0);}

void solve() {
  int a, b, c; cin >> a >> b >> c;

  for(int i=1; i<=b; ++i) {
    if((a+a*i)%b == c) drop("YES");
  }
  cout << "NO" << '\n';
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T=1;
  //cin >> T;
  while(T--) solve();

  return 0;
}
