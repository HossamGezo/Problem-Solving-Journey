/**
 * Author: Gezo
 * Problem: Z Clean Code
 * Source: Assiut University Training - Sheet #4
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/Z
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  bool isMultiComment = false;

  while (getline(cin, s)) {
    bool isComment = true;

    if (s.length() == 0 || s == " ") continue;

    for (int i = 0; i < s.length(); ++i) {
      if (s[i] == '/' && s[i + 1] == '/' && !isMultiComment)
        break;
      else if (s[i] == '/' && s[i + 1] == '*') {
        ++i;
        isMultiComment = true;
      } else if (s[i] == '*' && s[i + 1] == '/' && isMultiComment) {
        ++i;
        isMultiComment = false;
      } else if (!isMultiComment) {
        cout << s[i];
        isComment = false;
      }
    }

    if (!isComment && !isMultiComment) cout << endl;
  }

  return 0;
}
