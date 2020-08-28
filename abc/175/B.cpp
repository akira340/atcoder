#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

#define ll long long

signed main() {
  int n; cin >> n;
  if(n<3) {
    cout << 0 << endl;
    return 0;
  }
  vector<int> l(n);
  for(int i=0; i<n; ++i) {
    cin >> l.at(i);
  }
  int count=0;
  for(int i=0; i<n; ++i) { 
    for(int j=i+1; j<n; ++j) {
      for(int k=j+1; k<n; ++k) {
        int a=l[i], b=[j], c=l[k];
        if(a==b || b==c || c==a) continue;
        if(a+b>c && b+c>a && c+a>b) ++count;
      }
    }
  }
  cout << count << endl;

  return 0;
}
