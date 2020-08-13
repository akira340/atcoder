#include <iostream>
using namespace std;

#define ll long long

int main() {
  ll int X;
  cin >> X;
  ll int ans = 0;

  while(X >= 500) {
    X-=500;
    ans+=1000;
  }
  while(X >= 5) {
    X-=5;
    ans+=5;
  }
  cout << ans << endl;
  
  return 0;
}
