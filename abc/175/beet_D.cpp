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
signed main(){
  cin.tie(0);
  ios::sync_with_stdio(0);

  Int n,k;
  cin>>n>>k;

  auto ps=read(n);
  auto cs=read(n);

  for(Int &p:ps) p--;

  const Int INF = 1e18;
  if(k<=n*2){
    Int ans=-INF;
    for(Int i=0;i<n;i++){
      Int cur=i;
      Int res=0;
      for(Int j=0;j<k;j++){
        cur=ps[cur];
        res+=cs[cur];
        chmax(ans,res);
      }
    }
    cout<<ans<<newl;
    return 0;
  }

  Int ans=-INF;
  {
    for(Int i=0;i<n;i++){
      Int cur=i;
      Int res=0;
      for(Int j=0;j<(n*2);j++){
        cur=ps[cur];
        res+=cs[cur];
        chmax(ans,res);
      }
    }
  }

  for(Int i=0;i<n;i++){
    Int stp=k;
    Int res=0;
    Int cur=i;

    vector<Int> used(n,-1);
    Int len=0;
    for(Int j=0;;j++){
      // cout<<cur<<endl;
      if(~used[cur]){
        len=j-used[cur];
        break;
      }
      used[cur]=j;
      cur=ps[cur];
      res+=cs[cur];
      chmax(ans,res);
    }
    // cout<<":"<<len<<endl;

    res=0;
    cur=i;

    assert(stp>=used[cur]);
    stp-=used[cur];
    for(Int j=0;j<used[cur];j++){
      cur=ps[cur];
      res+=cs[cur];
      chmax(ans,res);
    }
    Int pre=cur;

    Int sum=0;
    for(Int j=0;j<len;j++){
      cur=ps[cur];
      sum+=cs[cur];
    }
    assert(cur==pre);

    // cout<<stp<<':'<<len<<endl;
    Int mv=(stp/len-1);
    res+=mv*sum;
    stp-=mv*len;

    for(Int i=0;i<stp;i++){
      cur=ps[cur];
      res+=cs[cur];
      chmax(ans,res);
    }
  }
  cout<<ans<<newl;
  return 0;
}

