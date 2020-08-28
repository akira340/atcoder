#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<endl;exit(0);}

void solve() {
  int a,b; cin >> a >> b;
  if(a==1) a=14;
  if(b==1) b=14;
  if(a==b) drop("Draw");
  cout << (a>b?"Alice":"Bob") << endl;

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
