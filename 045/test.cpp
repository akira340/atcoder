#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

#define ll long long;

int main() {
  vector<string> s(3);
  cin >> s[0] >> s[1] >> s[2];
  cout << s[0][0] << endl;
  s[0].erase(s[0].begin());
  cout << s[0] << endl;
  string str = "a";
  str.erase(str.begin());
  if(str == "") cout << "hi" << endl;


  return 0;
}
