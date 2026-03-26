/**
 * Author: Hossam (HossamGezo)
 * Problem: Y Easy Fibonacci
 * Source: Assiut University Training - Sheet #2
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Y
 */

#include <iostream>
using namespace std;

int main() {
  int n, x = 0, y = 1, sum;

  cin >> n;

  for (int i = 0; i < n; ++i) {
    if (i == 0)
      cout << x << " ";
    else if (i == 1)
      cout << y << " ";
    else {
      sum = x + y;

      cout << sum << " ";

      x = y;
      y = sum;
    }
  }

  return 0;
}