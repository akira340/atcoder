#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<endl;exit(0);}

void solve() {
  int k,s; cin >> k >> s;
  int ans=0;
  for(int x=0; x<=k; ++x) {
    for(int y=0; y<=k; ++y) {
      int z = s-x-y;
      if(z>=0 && z<=k) ++ans;
    }
  }
  cout << ans << '\n';

  return;
}

signed main() {
  int T=1;
  //cin >> T;
  while(T--) solve();

  return 0;
}
