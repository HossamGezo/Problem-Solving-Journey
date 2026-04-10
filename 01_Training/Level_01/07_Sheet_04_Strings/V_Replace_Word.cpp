/**
 * Author: Gezo
 * Problem: V Replace Word
 * Source: Assiut University Training - Sheet #4
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/V
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;

  cin >> s;

  // for (int i = 0; i < s.length(); ++i) {
  //   if (s[i] != 'E')
  //     cout << s[i];
  //   else {
  //     if (s[i + 1] == 'G' && s[i + 2] == 'Y' && s[i + 3] == 'P' && s[i + 4] == 'T') {
  //       cout << " ";
  //       i += 4;
  //     } else
  //       cout << s[i];
  //   }
  // }

  // NOTE --- Another Solution

  for (int i = 0; i < s.length(); ++i) {
    if (s.substr(i, 5) == "EGYPT") {
      cout << " ";
      i += 4;
    } else
      cout << s[i];
  }

  return 0;
}