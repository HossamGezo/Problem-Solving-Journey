/**
 * Author: Gezo
 * Problem: B Even Numbers
 * Source: Assiut University Training - Sheet #2
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B
 */

#include <iostream>
using namespace std;

int main() {
  int n;

  cin >> n;

  if (n == 1) {
    cout << -1;
    return 0;
  }

  for (int i = 2; i <= n; i += 2) {
    cout << i << endl;
  }

  return 0;
}