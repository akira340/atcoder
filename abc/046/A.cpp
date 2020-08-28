#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>

using namespace std;

#define ll long long;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  set<int> s;
  s.insert(a);
  s.insert(b);
  s.insert(c);

  cout << s.size() << endl;

  return 0;
}
