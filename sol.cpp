#include <bits/stdc++.h>

using namespace std;

template<typename T> void drop(const T &x){cout<<x<<'\n';exit(0);}

int n, m;
vector<pair<int,int>> a;

bool yamasen(int a, int b) {
  for(int i = 0; i < m; i++) {
    for(int j = i + 1; j < m; j++) {
    }
  }
}

void milkshake() {
  cin >> n >> m;
  a.resize(m);
  for(int i = 0; i < m; i++) {
    int hey, yo;
    cin >> hey >> yo;
    a[i].first = --hey;
    a[i].second = --yo;
  }
  sort(a.begin(), a.end());

  int ans = 0;
  for(int bit = 0; bit < (1 << n); bit++) {
    vector<int> b;
    for(int i = 0; i < n; i++) {
      if(bit & (1 << i)) {
        b.emplace_back(i);
      }
    }
    bool ok = true;
    for(int i = 0; i < (int)b.size(); i++) {
      for(int j = i + 1; j < (int)b.size(); j++) {
        if(!binary_search(a.begin(), a.end(), make_pair(b[i], b[j]))) {
          ok = false;
          break;
        }
      }
    }
    if(ok) ans = max(ans, (int)b.size());
  }
  cout << ans << '\n';
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt=1;
  //cin >> tt;
  while(tt--) milkshake();

  return 0;
}

