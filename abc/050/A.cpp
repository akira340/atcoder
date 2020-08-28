#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<endl;exit(0);}

signed main() {
  ll a, b;
  char op;
  cin >> a >> op >> b;
  if(op=='+') drop(a+b);
  cout << a-b << endl; 

  return 0;
}
