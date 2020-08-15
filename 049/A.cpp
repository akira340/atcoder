#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

#define ll long long

int main() {
  char c; cin >> c;
  if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u') {
    cout << "vowel" << endl;
  } else {
    cout << "consonant" << endl;
  }

  return 0;
}
