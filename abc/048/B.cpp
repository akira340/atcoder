#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

#define ll long long

int main() {
  ll int a, b, x;
  cin >> a >> b >> x;
  if(a!=0) {
    a = (a-1)/x + 1;
  }
  cout << (b/x+1) - a << endl;

  return 0;
}
