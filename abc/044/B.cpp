#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

#define ll long long;

int main() {
  string w; cin >> w;
  vector<int> v(26);
  int n = w.size();
  if(n%2 != 0) {
    cout << "No" << endl;
    return 0;
  }
  for(int i=0; i<n; ++i) {
    int c = w.at(i);
    ++v.at(c-'a');
  }

  for(int i=0; i<26; i++) {
    if(v.at(i)%2 != 0) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;

  return 0;
}
