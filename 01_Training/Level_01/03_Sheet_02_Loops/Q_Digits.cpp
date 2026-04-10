/**
 * Author: Gezo
 * Problem: Q Digits
 * Source: Assiut University Training - Sheet #2
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q
 */

#include <iostream>
using namespace std;

int main() {
  int t, n, r;

  cin >> t;

  for (int i = 0; i < t; ++i) {
    cin >> n;

    if (n == 0) {
      cout << 0 << endl;
      continue;
    }

    while (n) {
      r = n % 10;
      n /= 10;

      cout << r << " ";
    }

    cout << endl;
  }

  return 0;
}