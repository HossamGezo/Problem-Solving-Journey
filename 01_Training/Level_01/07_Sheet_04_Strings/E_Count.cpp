/**
 * Author: Gezo
 * Problem: E Count
 * Source: Assiut University Training - Sheet #4
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/E
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  long long sum = 0;

  cin >> s;

  for (int i = 0; i < s.length(); ++i) sum += s[i] - '0';

  cout << sum;

  return 0;
}