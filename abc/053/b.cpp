#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<endl;exit(0);}

void solve() {
  string s; cin >> s;
  int x, y;
  for(int i=0; i<s.size(); ++i) {
    if(s[i]=='A') {
      x=i; break;
    }
  }
  for(int i=s.size(); i>=0; --i) {
    if(s[i]=='Z') {
      y=i+1; break;
    }
  }

  cout << y-x << endl;

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
