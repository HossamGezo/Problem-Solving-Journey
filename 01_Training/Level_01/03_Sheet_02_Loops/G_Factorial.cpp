/**
 * Author: Gezo
 * Problem: G Factorial
 * Source: Assiut University Training - Sheet #2
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G
 */

#include <iostream>
using namespace std;

int main() {
  int n, m;
  long long sum;

  cin >> n;

  while (n--) {
    cin >> m;
    sum = 1;
    for (int i = 1; i <= m; ++i) {
      sum *= i;
    }
    cout << sum << endl;
  }

  return 0;
}