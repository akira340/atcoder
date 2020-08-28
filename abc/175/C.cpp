#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<endl;exit(0);}

signed main() {
  ll x,k,d;
  cin >> x >> k >> d;
  x=abs(x);
  if(((__int128_t)k)*((__int128_t)d)<=(__int128_t)x) drop(x-k*d);

  ll a = x/d;
  x-=a*d;
  k-=a;
  k%=2;
  if(k) x=abs(x-d);
  drop(x);

  return 0;
}
