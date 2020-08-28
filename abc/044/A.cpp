#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

#define ll long long;

int main() {
  int n,k,x,y;
  cin >> n >> k >> x >> y;
  int ans=0;

  for(int i=0; i<n; ++i) {
    if(i>=k) {
      ans+=y;
    } else {
      ans+=x;
    }
  }

  cout << ans << endl;

  return 0;
}
