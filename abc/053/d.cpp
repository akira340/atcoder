#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<endl;exit(0);}

void solve() {
  int n; cin >> n;
  vector<int> a(n);
  for(int i=0; i<n; ++i) cin >> a.at(i);

  sort(a.begin(),a.end());
  int ans=n;
  int dupes=0;
  for(int i=0; i<n; ++i) {
    int x=a.at(i);
    int count=1;
    for(int j=i+1; j<n; ++j,++i) {
      if(x!=a.at(j)) break;
      ++count;
    }
    if(count>=3) {
      if(count%2==0) {
        ans-=count-2; ++dupes;
      } else {
        ans-=count-1;
      }
    } else if(count==2) {
      ++dupes;
    }
  }
  if(dupes%2!=0) ++dupes;
  
  cout << ans-dupes << endl;

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
