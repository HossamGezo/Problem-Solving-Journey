/**
 * Author: Gezo
 * Problem: P Count Words
 * Source: Assiut University Training - Sheet #4
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/P
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
  // string s;
  // int cn = 0;

  // getline(cin, s);

  // for (int i = 0; i < s.length(); ++i) {
  //   if (!(('a' <= s[i] && s[i] <= 'z') || ('A' <= s[i] && s[i] <= 'Z'))) {
  //     if (i != 0 && ('a' <= s[i - 1] && s[i - 1] <= 'z') || ('A' <= s[i - 1] && s[i - 1] <= 'Z'))
  //       ++cn;
  //   }
  // }

  // if (('a' <= s.back() && s.back() <= 'z') || ('A' <= s.back() && s.back() <= 'Z')) ++cn;

  // cout << cn;

  // NOTE --- Another Solution - we start from 1 because of this test case: "! tot I taw a tat."

  string s;
  int cn = 1;

  getline(cin, s);

  for (int i = 1; i < s.length() - 1; ++i)
    if (!(('A' <= s[i] && s[i] <= 'Z') || ('a' <= s[i] && s[i] <= 'z')))
      if ((('A' <= s[i + 1] && s[i + 1] <= 'Z') || ('a' <= s[i + 1] && s[i + 1] <= 'z'))) ++cn;

  cout << cn;

  return 0;
}