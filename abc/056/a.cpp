#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<endl;exit(0);}

void solve() {
  char a,b; cin >> a >> b;

  cout << (a==b?'H':'D') << endl;

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
