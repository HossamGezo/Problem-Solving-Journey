/**
 * Author: Gezo
 * Problem: U New Words
 * Source: Assiut University Training - Sheet #4
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/U
 */

#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;

  cin >> s;

  int ce = 0, cg = 0, cy = 0, cp = 0, ct = 0;

  for (int i = 0; i < s.length(); ++i) {
    if (s[i] == 'e' || 'E' == s[i])
      ++ce;
    else if (s[i] == 'g' || 'G' == s[i])
      ++cg;
    else if (s[i] == 'y' || 'Y' == s[i])
      ++cy;
    else if (s[i] == 'p' || 'P' == s[i])
      ++cp;
    else if (s[i] == 't' || 'T' == s[i])
      ++ct;
  }

  cout << min({ce, cg, cy, cp, ct});

  return 0;
}