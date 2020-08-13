#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  int n; cin >> n;
  int ans=n;
  ans = n*(n+1)/2;

  cout << ans << endl;

  return 0;
}
