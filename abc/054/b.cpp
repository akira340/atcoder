#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<endl;exit(0);}

void solve() {
  int n,m; cin >> n >> m;
  vector<string> a(n),b(m);
  for(int i=0; i<n; ++i) cin >> a.at(i);
  for(int i=0; i<m; ++i) cin >> b.at(i);

  for(int i=0; i<n-m+1; ++i) {
    for(int j=0; j<n-m+1; ++j) {
      if(a[i][j]==b[0][0]) {
        int ok=1;
        for(int k=0; k<m; ++k) {
          for(int l=0; l<m; ++l) {
            if(a[i+k][j+l]!=b[k][l]) {
              ok=0; break;
            }
          }
          if(!ok) break;
        }
        if(ok) drop("Yes");
      }
    }
  }
  cout << "No" << endl;

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
