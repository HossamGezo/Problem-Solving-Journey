/**
 * Author: Gezo
 * Problem: B Print
 * Source: Assiut University Training - Sheet #4
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/B
 */

#include <iostream>
#include <string>
using namespace std;

void print(int n) {
  for (int i = 1; i <= n; ++i) {
    cout << i;

    if (i != n) cout << " ";
  }
}

int main() {
  int n;

  cin >> n;

  print(n);

  return 0;
}