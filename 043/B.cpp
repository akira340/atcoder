#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  string s; cin >> s;
  string ans="";
  for(int i=0; i<s.size(); ++i) {
    char c = s[i];
    if(c=='B' && ans.size()>0) {
      ans.pop_back();
    } else if(c!='B'){
      ans += c;
    }
  }
  cout << ans << endl;

  return 0;
}
