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

  Int x,k,d;
  cin>>x>>k>>d;
  x=abs(x);
  if(((__int128_t)k)*((__int128_t)d)<=(__int128_t)x) drop(x-k*d);

  Int mv=x/d;
  x-=mv*d;
  k-=mv;
  k%=2;
  if(k) x=abs(x-d);
  cout<<x<<newl;
  return 0;
}

