#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

#define ll long long

int main() {
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
  for(int i=0; i<n-2; ++i) {
    int a=l[i];
    for(int j=i+1; j<n-1; ++j) {
      int b=l[j];
      if(a==b) continue;
      for(int k=j+1; k<n; ++k) {
        int c=l[k];
        if(a==c || b==c) continue;
        if(a+b>c && b+c>a && c+a>b) {
          ++count;
        }
      }
    }
  }
  cout << count << endl;

  return 0;
}
