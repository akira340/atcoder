#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

#define ll long long

int main() {
  int h, w; cin >> h >> w;
  char c[h][w];
  for(int i=0; i<h; ++i) {
    for(int j=0; j<w; ++j) {
      cin >> c[i][j];
    }
  }

  return 0;
}
