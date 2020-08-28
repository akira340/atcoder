#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<endl;exit(0);}
  

int graph[8][8];

int dfs(int v, int n, vector<int> visited) {
  int all_visited=1;
  for(int i=0; i<n; ++i) {
    if(!visited[i]) all_visited=0;
  }
  if(all_visited) return 1;

  int ret=0;
  for(int i=0; i<n; ++i) {
    if(!graph[v][i]) continue;
    if(visited[i]) continue;

    visited[i]=1;
    ret+=dfs(i,n,visited);
    visited[i]=0;
  }

  return ret;
}

void solve() {
  int n,m; cin >> n >> m;
  for(int i=0; i<m; ++i) {
    int a,b; cin >> a >> b;
    graph[a-1][b-1]=graph[b-1][a-1]=1;
  }
  int visited[n];
  for(int i=0; i<n; ++i) visited[i]=0;
  visited[0]=1;
  cout << dfs(0,n,visited) << '\n';
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T=1;
  //cin >> T;
  while(T--) solve();

  return 0;
}
