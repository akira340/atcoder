#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<endl;exit(0);}

void solve() {
  string s; cin >> s;
  int ans=0;
  for(int i=0; i<s.size(); ++i) {
    ans+=(int)s.at(i)-48;
  }
  ans%=9;
  if(ans) drop("No");
  cout << "Yes" << endl;

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
