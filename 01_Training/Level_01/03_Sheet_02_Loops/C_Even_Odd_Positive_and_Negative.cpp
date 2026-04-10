/**
 * Author: Gezo
 * Problem: C Even Odd Positive and Negative
 * Source: Assiut University Training - Sheet #2
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C
 */

#include <iostream>
using namespace std;

int main() {
  int n, m, ce, co, cp, cn;

  ce = co = cp = cn = 0;

  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> m;

    if (m % 2 == 0)
      ++ce;
    else
      ++co;

    if (m == 0) continue;

    if (m > 0)
      ++cp;
    else
      ++cn;
  }

  cout << "Even: " << ce << endl
       << "Odd: " << co << endl
       << "Positive: " << cp << endl
       << "Negative: " << cn;

  return 0;
}