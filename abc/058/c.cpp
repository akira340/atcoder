#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<endl;exit(0);}

void solve() {
  int n; cin >> n;
  vector<string> s(n);
  vector<int> c(26, 100), count(26);
  for(int i=0; i<n; ++i) {
    cin >> s.at(i);
    vector<int> count(26);
    for(int j=0; j<s.at(i).size(); ++j) {
      count.at(s.at(i).at(j)-'a')++;
    }
    for(int j=0; j<26; ++j) {
      if(c.at(j) > count.at(j)) {
        c.at(j) = count.at(j);
      }
    }
  }
  for(int i=0; i<26; ++i) {
    char ans = i+'a';
    if(c.at(i)) {
      for(int j=0; j<c.at(i); ++j) {
        cout << ans;
      }
    }
  }
  cout << '\n';

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
