#include <bits/stdc++.h>

using namespace std;

template<typename T> void drop(const T &x){cout<<x<<'\n';exit(0);}

void milkshake() {
  unsigned long long a, b, c, d;
  cin >> a >> b >> c >> d;
  if(a > c) {
    if(a <= d) drop("Yes");
    else drop("No");
  } else {
    if(b < c) drop("No");
    else drop("Yes");
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

