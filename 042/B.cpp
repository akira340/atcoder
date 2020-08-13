#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  int n, l; cin >> n >> l;
  vector<string> s(n);
  for(int i=0; i<n; ++i) {
    cin >> s.at(i);
  }
  sort(s.begin(),s.end());
  for(int i=0; i<n; ++i) {
    cout << s[i];
  }
  cout << endl;

  return 0;
}
