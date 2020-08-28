#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<'\n';exit(0);}

void solve() {
  string a; cin >> a;
  if(a == "a") drop("vowel");
  if(a == "e") drop("vowel");
  if(a == "i") drop("vowel");
  if(a == "o") drop("vowel");
  if(a == "u") drop("vowel");
  cout << "consonant" << '\n';
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T=1;
  //cin >> T;
  while(T--) solve();

  return 0;
}
