/**
 * Author: Gezo
 * Problem: S Max Split
 * Source: Assiut University Training - Sheet #4
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/S
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
  // string s, m = "";

  // cin >> s;

  // int l = 0, cl = 0, cr = 0, cn = 0;

  // for (int i = 0; i < s.length(); ++i) {
  //   if (s[i] == 'L')
  //     ++cl;
  //   else
  //     ++cr;

  //   if (cl == cr) {
  //     m += s.substr(l, (i - l) + 1) + ',';
  //     cl = 0;
  //     cr = 0;
  //     l = i + 1;
  //     ++cn;
  //   }
  // }

  // cout << cn << endl;

  // for (int i = 0; i < m.length() - 1; ++i) {
  //   if (m[i] == ',') {
  //     cout << endl;
  //     continue;
  //   }

  //   cout << m[i];
  // }

  // NOTE --- Another Solution

  string s, arr[507];

  cin >> s;

  int p = 0, cl = 0, cr = 0;

  for (int i = 0; i < s.length(); ++i) {
    arr[p] += s[i];

    if (s[i] == 'L')
      ++cl;
    else
      ++cr;

    if (cl == cr) {
      cl = 0;
      cr = 0;
      ++p;
    }
  }

  cout << p << endl;

  for (int i = 0; i < p; ++i) cout << arr[i] << endl;

  return 0;
}