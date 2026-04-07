/**
 * Author: Gezo
 * Problem: X Comparison
 * Source: Assiut University Training - Sheet #4
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/X
 */

#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s, m, mn;

  cin >> s;

  m = s, mn = s;

  for (int i = 1; i < s.length(); ++i) {
    sort(m.begin(), m.begin() + i);
    sort(m.begin() + i, m.end());

    mn = min(mn, m);

    m = s;
  }

  cout << mn;

  return 0;
}
