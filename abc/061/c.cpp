#include <bits/stdc++.h>
using namespace std;

#define ll int64_t

template<typename T> void drop(const T &x){cout<<x<<'\n';exit(0);}

void solve() {
  ll n, k;
  cin >> n >> k;
  int a, b;
  vector<pair<int,int>> ans(n);
  for(int i=0; i<n; ++i) {
    cin >> a >> b;
    ans.at(i).first = a;
    ans.at(i).second = b;
  }
  sort(ans.begin(), ans.end());
  for(int i=0; i<n; ++i) {
    k -= ans.at(i).second;
    if(k <= 0) drop(ans.at(i).first);
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T=1;
  //cin >> T;
  while(T--) solve();

  return 0;
}
