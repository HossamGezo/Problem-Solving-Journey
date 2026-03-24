/**
 * Author: Hossam (HossamGezo)
 * Problem: M Lucky Numbers
 * Source: Assiut University Training - Sheet #2
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M
 */

#include <iostream>
using namespace std;

int main() {
  int a, b, c, r;
  bool f, k = true;

  cin >> a >> b;

  for (int i = a; i <= b; ++i) {
    c = i;
    f = true;

    while (c) {
      r = c % 10;
      c /= 10;

      if (r != 4 && r != 7) {
        f = false;
        break;
      }
    }

    if (f) {
      cout << i << " ";
      k = false;
    }
  }

  if (k) cout << -1;

  return 0;
}