/**
 * Author: Gezo
 * Problem: O Fibonacci
 * Source: Assiut University Training - Sheet #3
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/O
 */

#include <iostream>
using namespace std;

int main() {
  int n;

  cin >> n;

  // long long x = 0, y = 1, f;

  // if (n == 1) {
  //   cout << x;

  //   return 0;
  // }

  // if (n == 2) {
  //   cout << y;

  //   return 0;
  // }

  // for (int i = 2; i < n; ++i) {
  //   f = x + y;

  //   x = y;

  //   y = f;
  // }

  // cout << y;

  // NOTE --- Another Solution Using ' Array '

  long long fb[n];

  if (n <= 2) {
    cout << n - 1;
  } else {
    fb[0] = 0;

    fb[1] = 1;

    for (int i = 2; i < n; ++i) fb[i] = fb[i - 1] + fb[i - 2];

    cout << fb[n - 1];
  }

  return 0;
}