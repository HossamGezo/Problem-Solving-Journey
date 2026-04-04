/**
 * Author: Gezo
 * Problem: C Finding Minimums
 * Source: Assiut University Training - Contest #2
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/C
 */

#include <iostream>
using namespace std;

int main() {
  int n, k, t, cn = 0, mn;

  cin >> n >> k;

  for (int i = 0; i < n; ++i) {
    cin >> t;

    if (cn == 0) mn = t;

    if (t < mn) mn = t;

    ++cn;

    if (cn == k || i + 1 == n) {
      cout << mn << " ";
      cn = 0;
    }
  }

  return 0;
}