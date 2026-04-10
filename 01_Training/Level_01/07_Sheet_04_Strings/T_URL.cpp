/**
 * Author: Gezo
 * Problem: T URL
 * Source: Assiut University Training - Sheet #4
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/T
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
  // string s;

  // cin >> s;

  // int eq = 1, l, r;

  // for (int i = 0; i < s.length(); ++i) {
  //   if (s[i] == '=') {
  //     if (eq == 1)
  //       cout << "username: ";
  //     else if (eq == 2)
  //       cout << "pwd: ";
  //     else if (eq == 3)
  //       cout << "profile: ";
  //     else if (eq == 4)
  //       cout << "role: ";
  //     else
  //       cout << "key: ";

  //     ++eq;

  //     l = i + 1;
  //   }

  //   if (s[i] == '&') {
  //     r = i - 1;
  //     cout << s.substr(l, (r - l) + 1) << endl;
  //   }
  // }

  // cout << s.substr(l, (r - l) + 1) << endl;

  // NOTE --- Another Solution

  string s, arr[5] = {"username: ", "pwd: ", "profile: ", "role: ", "key: "};

  cin >> s;

  s += '&';

  int l = 0, r = 0, p = 0;

  for (int i = 0; i < s.length(); ++i) {
    if (s[i] == '=')
      l = i + 1;
    else if (s[i] == '&') {
      r = i;

      arr[p] += s.substr(l, (r - l));

      ++p;
    }
  }

  for (int i = 0; i < 5; ++i) cout << arr[i] << endl;

  return 0;
}