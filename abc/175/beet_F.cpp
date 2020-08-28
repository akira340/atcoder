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

const Int INF = 1e18;

Int dp[2][55][22];
signed main(){
  cin.tie(0);
  ios::sync_with_stdio(0);

  Int n;
  cin>>n;
  vector<string> ss(n);
  vector<Int> cs(n);
  for(Int i=0;i<n;i++) cin>>ss[i]>>cs[i];

  for(Int i=0;i<55;i++)
    for(Int j=0;j<22;j++)
      dp[0][i][j]=dp[1][i][j]=INF;

  Int ans=INF;
  using T = tuple<Int, Int, Int, Int>;

  priority_queue<T, vector<T>, greater<T>> pq;
  auto push=[&](Int LR,Int x,Int d,Int dist){
    // cout<<LR<<' '<<x<<' '<<d<<':'<<dist<<endl;
    if(dp[LR][x][d]<=dist) return;
    dp[LR][x][d]=dist;
    pq.emplace(dp[LR][x][d],LR,x,d);
  };

  auto palin=[&](string s){
    string t(s.rbegin(),s.rend());
    return s==t;
  };

  for(Int i=0;i<n;i++){
    if(palin(ss[i])){
      chmin(ans,cs[i]);
      continue;
    }

    Int len=ss[i].size();
    push(0,i,len,cs[i]);
    push(1,i,len,cs[i]);

    // center on a character
    for(Int c=0;c<len;c++){
      Int flg=1;
      Int L=c;
      Int R=len-(c+1);
      for(Int j=1;j<=min(L,R);j++)
        flg&=(ss[i][c-j]==ss[i][c+j]);
      if(flg) push(L<R,i,abs(L-R),cs[i]);
    }

    // center between characters
    for(Int c=1;c<len;c++){
      Int flg=1;
      Int L=c;
      Int R=len-c;
      for(Int j=1;j<=min(L,R);j++)
        flg&=(ss[i][c-j]==ss[i][c+j-1]);
      if(flg) push(L<R,i,abs(L-R),cs[i]);
    }
  }
  // exit(0);
  // cout<<"UKU"<<endl;

  while(!pq.empty()){
    auto [dist, LR, x, d] = pq.top();pq.pop();
    if(dp[LR][x][d]<dist) continue;

    for(Int i=0;i<n;i++){
      Int len=ss[i].size();
      if(LR==0){
        Int L=d;
        Int R=len;

        Int flg=1;
        for(Int j=0;j<min(L,R);j++)
          flg&=(ss[i][j]==ss[x][L-(j+1)]);

        if(flg){
          if(L==R) chmin(ans,dist+cs[i]);
          else push(L<R,(L<R?i:x),abs(L-R),dist+cs[i]);
        }
      }
      if(LR==1){
        Int L=len;
        Int R=d;

        Int flg=1;
        for(Int j=0;j<min(L,R);j++)
          flg&=(ss[i][L-(j+1)]==ss[x][ss[x].size()-R+j]);

        if(flg){
          if(L==R) chmin(ans,dist+cs[i]);
          else push(L<R,(L<R?x:i),abs(L-R),dist+cs[i]);
        }
      }
    }
  }

  if(ans==INF) ans=-1;
  cout<<ans<<newl;
  return 0;
}

