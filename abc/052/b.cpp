#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<endl;exit(0);}

void solve() {
  int x=0, max=0;
  int n;
  string s;
  cin >> n >> s;
  int i=0;
  while(i<n) {
    x = (s[i++] == 'I') ? x+1:x-1;
    max = (max<x)?x:max;
  }
  cout << max << endl;

  return;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T=1;
  while(T--) solve();

  return 0;
}
