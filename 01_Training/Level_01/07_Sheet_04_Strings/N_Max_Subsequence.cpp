/**
 * Author: Hossam (HossamGezo)
 * Problem: N Max Subsequence
 * Source: Assiut University Training - Sheet #4
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/N
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  string s, m;

  cin >> n >> s;

  m = s.front();

  for (int i = 1; i < n; ++i)
    if (m.back() != s[i]) m.push_back(s[i]);

  cout << m.length();

  return 0;
}