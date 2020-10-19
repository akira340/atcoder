#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<'\n';exit(0);}

int factorial(int n) {
  if(n > 1) {
    return n*factorial(n-1);
  } else {
    return 1;
  }
}

void solve() {
  int n; cin >> n;
  vector<int> p(n), q(n);
  for(int i=0; i<n; ++i) cin >> p.at(i) >> q.at(i);

  int f = factorial(n);
  int m = n;
  int a = 0, b = 0;
  for(int i=0; i<n-1; ++i) {
    f /= m--;
    cout << f << '\n';
    for(int j=0; j<n; ++j) {
      if(p.at(i) == j+1) a += f*j;
      if(q.at(i) == j+1) b += f*j;
    }
      cout << "a " << a << '\n';
  }
  cout << a << '\n';
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T=1;
  //cin >> T;
  while(T--) solve();

  return 0;
}
