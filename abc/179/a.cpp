#include <bits/stdc++.h>
using namespace std;

template<typename T> void drop(const T &x){cout<<x<<'\n';exit(0);}

void milkshake() {
  string s;
  cin >> s;
  if(s[s.size()-1] == 's') {
    cout << s << "es" << '\n';
    return;
  }
  cout << s << 's' << '\n';
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T=1;
  //cin >> T;
  while(T--) milkshake();

  return 0;
}
