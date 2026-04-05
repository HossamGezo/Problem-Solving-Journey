/**
 * Author: Gezo
 * Problem: Q Reverse Words
 * Source: Assiut University Training - Sheet #4
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/Q
 */

#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;

  getline(cin, s);

  int l = 0, r = 0;

  for (int i = 0; i < s.length(); ++i) {
    if (s[i] == ' ') {
      r = i;

      reverse(s.begin() + l, s.begin() + r);

      l = i + 1;
    }
  }

  reverse(s.begin() + l, s.begin() + s.length());

  cout << s;

  return 0;
}