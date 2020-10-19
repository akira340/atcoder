#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<'\n';exit(0);}

void solve() {
  int n, a; cin >> n >> a;
  vector<int> x(n);
  int ans = 0;
  for(int i=0; i<n; ++i) {
    cin >> x.at(i);
    if(x.at(i) == a) ans++;
  }
  sort(x.begin(), x.end());

}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T=1;
  //cin >> T;
  while(T--) solve();

  return 0;
}
