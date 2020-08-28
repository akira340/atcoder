#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<endl;exit(0);}

void solve() {
  int n; cin >> n;
  vector<int> a(n);
  for(int i=0; i<n; ++i) cin >> a.at(i);

  ll ans=0;
  int max=*max_element(a.begin(),a.end());
  int ok=0;
  for(int i=1; i<n; ++i) {
    int x=a.at(i-1), y=a.at(i);
    if(x==max || ok) {
      ans+=(max-x); ok=1;
    } else {
      if(x>=y) {
        ans+=(x-y);
        a.at(i)=x;
      }
    }
  }
  if(a.at(n-1) < max) ans+=(max-a.at(n-1));
  cout << ans << endl;

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
