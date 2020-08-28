#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

#define ll long long

int main() {
  int n, k; cin >> n >> k;
  int ans=k;

  for(int i=1; i<n; ++i) {
    ans*=k-1;
  }
  cout << ans << endl;

  return 0;
}
