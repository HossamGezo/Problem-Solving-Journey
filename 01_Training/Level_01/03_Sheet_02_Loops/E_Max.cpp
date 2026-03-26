/**
 * Author: Hossam (HossamGezo)
 * Problem: E Max
 * Source: Assiut University Training - Sheet #2
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E
 */

#include <iostream>
using namespace std;

int main() {
  int n, m, mx = 0;

  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> m;

    if (m > mx) mx = m;
  }

  cout << mx;

  return 0;
}