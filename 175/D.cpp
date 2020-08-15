#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

#define ll long long

int main() {
  int n; ll int k; cin >> n >> k;
  vector<int> p(n), c(n);
  for(int i=0; i<n; ++i) {
    cin >> p.at(i);
  }
  for(int i=0; i<n; ++i) {
    cin >> c.at(i);
  }
  int score=0;
  for(int i=0; i<n; ++i) {
    int x=i;
    for(int j=0; j<k; ++j) {
      score+=c.at(x);
    }
  }

  return 0;
}
