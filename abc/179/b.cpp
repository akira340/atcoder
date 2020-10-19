#include <bits/stdc++.h>
using namespace std;

template<typename T> void drop(const T &x){cout<<x<<'\n';exit(0);}

void milkshake() {
  int n;
  cin >> n;
  int count = 0;
  int ok = 0;
  for(int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    if(a == b) {
      count++;
      if(count == 3) ok = 1;
    }
    else count = 0;
  }
  cout << (ok ? "Yes" : "No") << '\n';
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T=1;
  //cin >> T;
  while(T--) milkshake();

  return 0;
}
