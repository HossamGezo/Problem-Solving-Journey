/**
 * Author: Hossam (HossamGezo)
 * Problem: K I Love strings
 * Source: Assiut University Training - Sheet #4
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/K
 */

#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
  // int t;
  // string s, m, mn, mx;

  // cin >> t;

  // while (t--) {
  //   cin >> s >> m;

  //   mn = m;
  //   mx = s;

  //   if (s.length() < m.length()) {
  //     mn = s;
  //     mx = m;
  //   }

  //   int i;
  //   for (i = 0; i < mn.length(); ++i) cout << s[i] << m[i];

  //   cout << mx.substr(i) << endl;
  // }

  // NOTE --- Another Solution

  int t;
  string s, m;

  cin >> t;

  while (t--) {
    cin >> s >> m;

    int i = 0, j = 0;
    while (i < s.length() || j < m.length()) {
      if (i < s.length()) cout << s[i];

      if (j < m.length()) cout << m[i];

      ++i;
      ++j;
    }

    cout << endl;
  }

  return 0;
}