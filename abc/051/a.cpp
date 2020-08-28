#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<endl;exit(0);}

void solve() {
  string s; cin >> s;
  string space = " ";

  s.replace(5,1,space);
  s.replace(13,1,space);
  cout << s << endl;

  return;
}

signed main() {
  int T=1;
  //cin >> T;
  while(T--) solve();

  return 0;
}
