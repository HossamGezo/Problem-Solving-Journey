/**
 * Author: Gezo
 * Problem: H Good or Bad
 * Source: Assiut University Training - Sheet #4
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/H
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
  int t;
  string s;
  bool f;

  cin >> t;

  while (t--) {
    cin >> s;

    f = false;

    // if (s.length() < 3)
    //   cout << "Bad\n";
    // else {
    //   for (int i = 1; i < s.length() - 1; ++i) {
    //     if (s[i - 1] == '0' && s[i] == '1' && s[i + 1] == '0') {
    //       f = true;
    //       break;
    //     } else if (s[i - 1] == '1' && s[i] == '0' && s[i + 1] == '1') {
    //       f = true;
    //       break;
    //     }
    //   }

    //   if (f)
    //     cout << "Good\n";
    //   else
    //     cout << "Bad\n";
    // }

    // NOTE --- Another Solution Using ' substr method ' "Simpler solution"

    for (int i = 0; i < s.length(); ++i) {
      if (s.substr(i, 3) == "010" || s.substr(i, 3) == "101") {
        f = true;
        break;
      }
    }

    if (f)
      cout << "Good\n";
    else
      cout << "Bad\n";
  }

  return 0;
}