#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<'\n';exit(0);}

void solve() {
  int r, c;
  cin >> r >> c;
  int sy, sx, gy, gx;
  cin >> sy >> sx >> gy >> gx;
  sy--; sx--; gy--; gx--;
  vector<vector<char>> maze(r, vector<char>(c));
  vector<vector<int>> dist(r, vector<int>(c,1e9));
  for(int i=0; i<r; ++i) {
    for(int j=0; j<c; ++j) {
      cin >> maze[i][j];
    }
  }

  int dy[] = {0,1,0,-1};
  int dx[] = {1,0,-1,0};
  queue<pair<int,int>> q;
  q.push(make_pair(sy,sx));
  dist[sy][sx] = 0;
  while(!q.empty()) {
    int py, px;
    tie(py,px) = q.front();
    q.pop();
    for(int i=0; i<4; ++i) {
      int ny = py + dy[i], nx = px + dx[i];
      if(ny < 0 || ny >= r || nx < 0 || nx >= c) continue;
      if(maze[ny][nx] == '#') continue;
      if(dist[ny][nx] != 1e9) continue;
      dist[ny][nx] = dist[py][px]+1;
      q.push(make_pair(ny,nx));
    }
  }
  cout << dist[gy][gx] << '\n';
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T=1;
  //cin >> T;
  while(T--) solve();

  return 0;
}
