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
Int check(Int a,Int b,Int c){
  if(a==b or b==c or c==a) return 0;
  if(a>=b+c) return 0;
  if(b>=a+c) return 0;
  if(c>=a+b) return 0;
  return 1;
}

signed main(){
  cin.tie(0);
  ios::sync_with_stdio(0);

  Int n;
  cin>>n;

  auto ls=read(n);

  Int ans=0;
  for(Int i=0;i<n;i++)
    for(Int j=i+1;j<n;j++)
      for(Int k=j+1;k<n;k++)
        if(check(ls[i],ls[j],ls[k])) ans++;
  cout<<ans<<newl;
  return 0;
}
