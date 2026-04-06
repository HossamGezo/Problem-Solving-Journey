/**
 * Author: Gezo
 * Problem: W Encrypt Decrypt Message
 * Source: Assiut University Training - Sheet #4
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/W
 */

#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string k = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
  string o = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

  int q;
  string s;

  cin >> q >> s;

  // if (q == 1)
  //   for (int i = 0; i < s.length(); ++i) cout << k[o.find(s[i])];
  // else
  //   for (int i = 0; i < s.length(); ++i) cout << o[k.find(s[i])];

  // NOTE --- Another Solution

  char f1[150], f2[150];

  for (int i = 0; i < k.length(); ++i) f1[o[i]] = k[i], f2[k[i]] = o[i];

  if (q == 1)
    for (int i = 0; i < s.length(); ++i) cout << f1[s[i]];
  else
    for (int i = 0; i < s.length(); ++i) cout << f2[s[i]];

  return 0;
}