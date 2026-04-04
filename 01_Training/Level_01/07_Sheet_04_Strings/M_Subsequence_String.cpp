/**
 * Author: Gezo
 * Problem: M Subsequence String
 * Source: Assiut University Training - Sheet #4
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/M
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
  // string s, h = "hello";
  // bool f;
  // int p = 0;

  // cin >> s;

  // for (int i = 0; i < h.length(); ++i) {
  //   f = false;

  //   for (int j = p; j < s.length(); ++j) {
  //     if (h[i] == s[j]) {
  //       f = true;
  //       p = ++j;
  //       break;
  //     }
  //   }

  //   if (!f) return cout << "NO", 0;
  // }

  // cout << "YES";

  // NOTE --- "Simpler solution"

  string s, h = "hello";
  int p = 0;

  cin >> s;

  for (int i = 0; i < s.length(); ++i) {
    if (h[p] == s[i]) ++p;

    if (p == h.length()) return cout << "YES", 0;
  }

  cout << "NO";

  return 0;
}