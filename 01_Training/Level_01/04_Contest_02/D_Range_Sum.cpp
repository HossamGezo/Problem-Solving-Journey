/**
 * Author: Hossam (HossamGezo)
 * Problem: D Range Sum
 * Source: Assiut University Training - Contest #2
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/D
 */

#include <iostream>
using namespace std;

int main() {
  int t;
  long long l, r, swap;

  cin >> t;

  while (t--) {
    cin >> l >> r;

    if (l > r) {
      swap = r;
      r = l;
      l = swap;
    }

    cout << (((r * (r + 1)) / 2) - ((l * (l + 1)) / 2)) + l << endl;
  }

  return 0;
}