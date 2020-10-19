#include <bits/stdc++.h>
using namespace std;

template<typename T> void drop(const T &x){cout<<x<<'\n';exit(0);}

void milkshake() {
  int n;
  cin >> n;
  int ans = 0;
  for(int i = 1; i < n; i++) {
    ans += (n-1) / i;
  }
  cout << ans << '\n';
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T=1;
  //cin >> T;
  while(T--) milkshake();

  return 0;
}
