#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<'\n';exit(0);}

void solve() {
  int h, w; cin >> h >> w;
  int sy, sx, gy, gx; cin >> sy >> sx >> gy >> gx;
  sy--; sx--; gy--; gx--;
  vector<vector<char>> c(h, vector<char> (w));
  vector<vector<int>> dis(h, vector<int> (w, 1e9));
  for(int i=0; i<h; ++i) {
    for(int j=0; j<w; ++j) {
      cin >> c[i][j];
    }
  }

  int dy[] = {0,1,0,-1};
  int dx[] = {1,0,-1,0};
  queue<pair<int,int>> q;
  q.push(make_pair(sy,sx));
  dis[sy][sx] = 0;
  while(!q.empty()) {
    int py, px;
    tie(py, px) = q.front(); q.pop();
    for(int i=0; i<4; ++i) {
      int ny = py + dy[i], nx = px + dx[i];
      if(ny < 0 || ny >= h || nx < 0 || nx >= w) continue;
      if(c[ny][nx] == '#') continue;
      if(dis[ny][nx] != 1e9) continue;
      dis[ny][nx] = dis[py][px]+1;
      q.push(make_pair(ny,nx));
    }
  }
  cout << dis[gy][gx] << '\n';
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T=1;
  //cin >> T;
  while(T--) solve();

  return 0;
}
