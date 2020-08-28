#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<endl;exit(0);}

void solve() {
  int w, a, b; cin >> w >> a >> b;

  if(a<=b) {
    if(a+w>=b) {
      cout << 0 << endl;
    } else {
      cout << b-(a+w) << endl;
    }
  } else {
    if(b+w>=a) {
      cout << 0 << endl;
    } else {
      cout << a-(b+w) << endl;
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
