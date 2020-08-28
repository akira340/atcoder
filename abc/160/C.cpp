#include <iostream>
#include <cmath>
using namespace std;

#define ll long long

int main() {
  int k, n;
  cin >> k >> n;
  int a[n];
  int ans=0;
  for(int i=0; i<n; ++i) {
    cin >> a[i];
  }
  ans = abs(a[n-1]-a[0]);
  a[0]+=k;
  for(int i=1; i<n; ++i) {
    if(ans > abs(a[i-1]-a[i])) {
      ans = abs(a[i-1]-a[i]);
    }
    a[i]+=k;
  }
  cout << ans << endl;
  
  return 0;
}
