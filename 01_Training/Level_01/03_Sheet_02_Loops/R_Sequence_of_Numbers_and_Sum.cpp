/**
 * Author: Gezo
 * Problem: R Sequence of Numbers and Sum
 * Source: Assiut University Training - Sheet #2
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/R
 */

#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int n, m, mn, mx, sum;

  while (true) {
    cin >> n >> m;

    mn = min(n, m);
    mx = max(n, m);

    if (n <= 0 || m <= 0) break;

    sum = 0;
    for (int i = mn; i <= mx; ++i) {
      cout << i << " ";

      sum += i;
    }

    cout << "sum =" << sum << endl;
  }

  return 0;
}