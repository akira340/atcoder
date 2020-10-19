#include <bits/stdc++.h>

using namespace std;

template<typename T> void drop(const T &x){cout<<x<<'\n';exit(0);}

void milkshake() {
  int k;
  cin >> k;
  int tmp = k, n = 0;
  while(tmp) {
    n++;
    tmp /= 10;
  }
  long long seven = 0;
  for(int i = 0; i < n; i++) {
    seven *= 10;
    seven += 7;
  }
  while(1) {
    if(seven % k == 0) drop(n);
    seven *= 10;
    seven += 7;
    n++;
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt=1;
  //cin >> tt;
  while(tt--) milkshake();

  return 0;
}

