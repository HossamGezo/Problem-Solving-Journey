/**
 * Author: Gezo
 * Problem: U Some Sums
 * Source: Assiut University Training - Sheet #2
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/U
 */

#include <iostream>
using namespace std;

int main() {
  int n, a, b, t, r, sum, total = 0;

  cin >> n >> a >> b;

  for (int i = 1; i <= n; ++i) {
    t = i;
    sum = 0;
    while (t) {
      r = t % 10;

      sum += r;

      t /= 10;
    }

    if (sum >= a && sum <= b) {
      total += i;
    }
  }

  cout << total;

  return 0;
}