#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<'\n';exit(0);}

void solve() {
  int n; cin >> n;
  ll a;
  vector<ll> sum(2), cnt(2);
  for(int i=0; i<n; ++i) {
    cin >> a;
    for(int j : {0,1}) {
      sum[j] += a;
      int d = 1 - (i+j) % 2 * 2;
      if(sum[j]*d <= 0) {
        cnt[j] += abs(d-sum[j]);
        sum[j] = d;
      }
    }
  }
  cout << min(cnt[0],cnt[1]) << '\n';
  
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
