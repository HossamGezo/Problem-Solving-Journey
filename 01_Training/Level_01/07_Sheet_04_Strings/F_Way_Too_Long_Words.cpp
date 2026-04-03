/**
 * Author: Hossam (HossamGezo)
 * Problem: F Way Too Long Words
 * Source: Assiut University Training - Sheet #4
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
  int t;
  string s;

  cin >> t;

  while (t--) {
    cin >> s;

    if (s.length() <= 10)
      cout << s << endl;
    else
      cout << s[0] << s.length() - 2 << s[s.length() - 1] << endl;
  }

  return 0;
}