#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

#define ll long long

int main() {
  int w, h, n;
  cin >> w >> h >> n;
  vector<int> x(n), y(n), a(n);
  int rect[w][h]={0};
  for(int i=0; i<n; ++i) {
    cin >> x[i] >> y[i] >> a[i];
  }
  for(int i=0; i<n; ++i) {
    if(a[i]==1) {
      for(int j=0; j<x[i]; ++j) {
        for(int k=0; k<h; ++k) {
          rect[j][k]=1;
        }
      }
    } else if(a[i]==2) {
      for(int j=x[i]; j<w; ++j) {
        for(int k=0; k<h; ++k) {
          rect[j][k]=1;
        }
      }
    } else if(a[i]==3) {
      for(int j=0; j<w; ++j) {
        for(int k=0; k<y[i]; ++k) {
          rect[j][k]=1;
        }
      }
    } else {
      for(int j=0; j<w; ++j) {
        for(int k=y[i]; k<h; ++k) {
          rect[j][k]=1;
        }
      }
    }
  }
  int ans=0;
  for(int i=0; i<w; ++i) {
    for(int j=0; j<h; ++j) {
      if(rect[i][j]==0) {
        ++ans;
      }
    }
  }
  cout << ans << endl;

  return 0;
}
