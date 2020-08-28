#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<endl;exit(0);}

void solve() {
  int x; cin >> x;

  int b;
  for(int i=1; i<1e9; ++i) {
    b=i*(i+1)/2;
    if(x<=b) {
      drop(i);
    }
  }

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
