#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

#define ll long long;

pair<pair<string,int>,int> p[100];

int main() {
  int n; cin >> n;
  string s;

  for(int i=0; i<n; ++i) {
    int t;
    cin >> s >> t;
    p[i] = make_pair(make_pair(s,-t),i);
  }
  sort(p,p+n);
  for(int i=0; i<n; i++) {
    cout << p[i].second+1 << endl;
  }

  return 0;
}
