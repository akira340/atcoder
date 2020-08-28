#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

#define ll long long

int main() {
  string s; cin >> s;
  int count=0;
  for(int i=0; i<3; ++i) {
    if(s[i]!='R') continue;
    int ccount=1;
    for(int j=i+1; j<3; ++j) {
      if(s[j]=='R') {
        ++ccount;
      } else {
        break;
      }
    }
    if(ccount > count) {
      count = ccount;
    }
  }
  cout << count << endl;

  return 0;
}
