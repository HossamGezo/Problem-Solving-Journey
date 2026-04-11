/**
 * Author: Gezo
 * Problem: F Equation
 * Source: Assiut University Training - Sheet #5
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/F
 */

#include <cmath>
#include <iostream>
using namespace std;

void solve(int x, int n) {
  long long r = pow(x, 0) - 1;

  for (int i = 2; i <= n; i += 2) {
    r += pow(x, i);
  }

  cout << r;
}

int main() {
  int x, n;

  cin >> x >> n;

  solve(x, n);

  return 0;
}