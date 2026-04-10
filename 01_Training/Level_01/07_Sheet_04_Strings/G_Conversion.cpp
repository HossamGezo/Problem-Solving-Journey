/**
 * Author: Gezo
 * Problem: G Conversion
 * Source: Assiut University Training - Sheet #4
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;

  cin >> s;

  for (int i = 0; i < s.length(); ++i) {
    if (s[i] == ',')
      s[i] = ' ';
    else if (s[i] < 'a')
      s[i] += 32;
    else
      s[i] -= 32;
  }

  cout << s;

  return 0;
}