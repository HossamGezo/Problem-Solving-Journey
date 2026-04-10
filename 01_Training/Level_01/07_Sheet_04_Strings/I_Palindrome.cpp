/**
 * Author: Gezo
 * Problem: I Palindrome
 * Source: Assiut University Training - Sheet #4
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I
 */

#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;

  cin >> s;

  // bool f = true;

  // for (int i = 0; i < s.length() / 2; ++i)
  //   if (s[i] != s[s.length() - 1 - i]) f = false;

  // if (f)
  //   cout << "YES";
  // else
  //   cout << "NO";

  // NOTE --- Another Solution Using ' #include <algorithm> ' library "Simpler solution"

  string m;

  m = s;

  reverse(s.begin(), s.end());

  if (s == m)
    cout << "YES";
  else
    cout << "NO";

  return 0;
}