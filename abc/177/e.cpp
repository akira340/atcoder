#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<'\n';exit(0);}

int gcd(int a, int b) {
  return b ? gcd(b,a%b) : a;
}

void solve() {
  int N = 1e6+5;
  int n; cin >> n;
  vector<int> count(N);
  int all = 0;
  for(int i=0; i<n; ++i) {
    int a; cin >> a;
    count.at(a)++;
    all = gcd(all, a);
  }
  bool ok = true;
  for(int i=2; i<N && ok; ++i) {
    int sum = 0;
    for(int j=i; j<N; j+=i) sum += count[j];
    if(sum > 1) ok = false;
  }
  cout << (ok ? "pairwise coprime" : all == 1 ? "setwise coprime" : "not coprime") << '\n';
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T=1;
  //cin >> T;
  while(T--) solve();

  return 0;
}
