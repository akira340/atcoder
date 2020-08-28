#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

#define ll long long;

int main() {
  vector<string> s(3);
  cin >> s[0] >> s[1] >> s[2];
  int i=0;
  while(s[i]!="") {
    char c = s[i][0];
    s[i].erase(s[i].begin());
    if(c=='a') {
      i=0;
    } else if(c=='b') {
      i=1;
    } else {
      i=2;
    }
  }
  string ans;
  if(i==0) {
    ans = 'A';
  } else if(i==1) {
    ans = 'B';
  } else {
    ans = 'C';
  }
  cout << ans << endl;

  return 0;
}
