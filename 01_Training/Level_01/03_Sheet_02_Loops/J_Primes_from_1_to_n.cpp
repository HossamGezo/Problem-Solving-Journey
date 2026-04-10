/**
 * Author: Gezo
 * Problem: J Primes from 1 to n
 * Source: Assiut University Training - Sheet #2
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/J
 */

#include <iostream>
using namespace std;

int main() {
  int n;
  bool f;

  cin >> n;

  for (int i = 2; i <= n; ++i) {
    f = true;

    for (int j = 2; j < i; ++j) {
      if (i % j == 0) {
        f = false;
        break;
      }
    }

    if (f) cout << i << " ";
  }

  return 0;
}