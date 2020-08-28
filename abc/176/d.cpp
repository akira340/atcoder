#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<endl;exit(0);}

void solve() {
  int h, w; cin >> h >> w;
  int ch, cw, dh, dw;
  cin >> ch >> cw >> dh >> dw;
  ch--; cw--; dh--; dw--;
  vector<vector<char>> s(h, vector<char> (w));
  vector<vector<int>> dist(h, vector<int> (w, 1e9));
  for(int i=0; i<h; ++i) {
    for(int j=0; j<w; ++j) {
      cin >> s[i][j];
    }
  }

  int dy[] = {0,1,0,-1}; 
  int dx[] = {1,0,-1,0};
  deque<pair<int,int>> q;
  q.push_back(make_pair(ch,cw));
  dist[ch][cw] = 0;
  while(!q.empty()) {
    int cy, cx;
    tie(cy, cx) = q.front(); q.pop_front();
    for(int i=0; i<4; ++i) {
      int ny = cy + dy[i], nx = cx + dx[i];
      if(ny < 0 || ny >= h || nx < 0 || nx >= w) continue;
      if(s[ny][nx] == '#') continue;
      if(dist[ny][nx] > dist[cy][cx]) {
        dist[ny][nx] = dist[cy][cx];
        q.push_front(make_pair(ny,nx));
      }
    }
    for(int i=-2; i<=2; ++i) {
      for(int j=-2; j<=2; ++j) {
        int ny = cy + i, nx = cx + j;
        if(ny < 0 || ny >= h || nx < 0 || nx >= w) continue;
        if(s[ny][nx] == '#') continue;
        if(dist[ny][nx] > dist[cy][cx]+1) {
          dist[ny][nx] = dist[cy][cx]+1;
          q.push_back(make_pair(ny,nx));
        }
      }
    }
  }
  cout << (dist[dh][dw] == 1e9 ? -1 : dist[dh][dw]) << '\n';
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T=1;
  //cin >> T;
  while(T--) solve();

  return 0;
}
