/**
 * Author: Gezo
 * Problem: X Convert To Decimal 2
 * Source: Assiut University Training - Sheet #2
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/X
 */

#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int t;
  long long n, m, sum, total;

  cin >> t;

  while (t--) {
    cin >> n;

    m = n;
    sum = 0;
    while (n) {
      if (n % 2 != 0) sum++;

      n /= 2;
    }

    total = 0;
    for (int i = 0; i < sum; ++i) total += pow(2, i);

    cout << total << endl;
  }
  return 0;
}