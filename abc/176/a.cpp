#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<endl;exit(0);}

void solve() {
  int n,x,t; cin >> n >> x >> t;
  int a=n/x;
  n%=x;
  if(n) a++;

  cout << (n == 0 ? a*t : (a+1)*t) << endl;

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
