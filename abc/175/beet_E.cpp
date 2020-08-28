#include <bits/stdc++.h>
using namespace std;

using Int = long long;
const char newl = '\n';

template<typename T1,typename T2> inline void chmin(T1 &a,T2 b){if(a>b) a=b;}
template<typename T1,typename T2> inline void chmax(T1 &a,T2 b){if(a<b) a=b;}
template<typename T> void drop(const T &x){cout<<x<<endl;exit(0);}
template<typename T=Int>
vector<T> read(size_t n){
  vector<T> ts(n);
  for(size_t i=0;i<n;i++) cin>>ts[i];
  return ts;
}

//INSERT ABOVE HERE

const Int MAX = 3030;
Int dp[4][MAX][MAX]={};
Int vs[MAX][MAX]={};
signed main(){
  cin.tie(0);
  ios::sync_with_stdio(0);
  Int h,w,n;
  cin>>h>>w>>n;

  for(Int i=0;i<n;i++){
    Int r,c,v;
    cin>>r>>c>>v;
    r--;c--;
    vs[r][c]=v;
  }

  dp[1][0][0]=vs[0][0];

  for(Int i=0;i<h;i++){
    for(Int j=0;j<w;j++){
      for(Int k=0;k<4;k++){
        if(i+1<h){
          chmax(dp[0][i+1][j],dp[k][i][j]);
          chmax(dp[1][i+1][j],dp[k][i][j]+vs[i+1][j]);
        }
        if(j+1<w){
          chmax(dp[k][i][j+1],dp[k][i][j]);
          if(k+1<4) chmax(dp[k+1][i][j+1],dp[k][i][j]+vs[i][j+1]);
        }
      }
    }
  }

  Int ans=0;
  for(Int k=0;k<4;k++) chmax(ans,dp[k][h-1][w-1]);
  cout<<ans<<newl;
  return 0;
}

