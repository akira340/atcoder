#include <bits/stdc++.h>

using namespace std;

template<typename T> void drop(const T &x){cout<<x<<'\n';exit(0);}

void milkshake() {
  int n, d;
  cin >> n >> d;
  int ans = 0;
  for(int i = 0; i < n; i++) {
    double x, y;
    cin >> x >> y;
    if(sqrt(pow(x, 2) + pow(y, 2)) <= d) ans++;
  }
  cout << ans << '\n';
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt=1;
  //cin >> tt;
  while(tt--) milkshake();

  return 0;
}

