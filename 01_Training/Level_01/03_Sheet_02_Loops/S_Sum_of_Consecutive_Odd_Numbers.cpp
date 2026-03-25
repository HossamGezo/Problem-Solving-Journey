/**
 * Author: Hossam (HossamGezo)
 * Problem: S Sum of Consecutive Odd Numbers
 * Source: Assiut University Training - Sheet #2
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/S
 */

#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int t, x, y, mn, mx, sum;

  cin >> t;

  while (t--) {
    cin >> x >> y;

    mn = min(x, y);
    mx = max(x, y);

    sum = 0;
    for (int i = mn + 1; i < mx; ++i) {
      if (i % 2 != 0) sum += i;
    }

    cout << sum << endl;
  }

  return 0;
}