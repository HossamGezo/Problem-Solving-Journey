/**
 * Author: Gezo
 * Problem: B Let s use Getline
 * Source: Assiut University Training - Sheet #4
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/B
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;

  getline(cin, s);

  cout << s.substr(0, s.find('\\'));

  // NOTE --- Another Solution Without Using ' Built-in functions '

  // for (int i = 0; i < s.length(); ++i) {
  //   if (s[i] == '\\')
  //     break;
  //   else
  //     cout << s[i];
  // }

  return 0;
}