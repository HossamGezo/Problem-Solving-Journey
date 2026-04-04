/**
 * Author: Gezo
 * Problem: F Break Number
 * Source: Assiut University Training - Contest #2
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/F
 */

#include <iostream>
using namespace std;

int main() {
  int t;
  long long n, sum, mx = 0;

  cin >> t;

  while (t--) {
    cin >> n;

    sum = 0;
    while (n) {
      if (n % 2 == 0)
        ++sum;
      else
        break;

      n /= 2;
    }

    if (sum > mx) mx = sum;
  }

  cout << mx;

  return 0;
}