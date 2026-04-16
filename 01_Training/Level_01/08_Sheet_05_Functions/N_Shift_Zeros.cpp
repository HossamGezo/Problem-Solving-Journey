/**
 * Author: Gezo
 * Problem: N Shift Zeros
 * Source: Assiut University Training - Sheet #5
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/N
 */

#include <iostream>
using namespace std;

void solve(int cn) {
  for (int i = 0; i < cn; ++i) cout << 0 << " ";
}

int main() {
  int n;

  cin >> n;

  int val, res[n], cn = 0;

  for (int i = 0; i < n; ++i) {
    cin >> val;

    if (val != 0)
      cout << val << " ";
    else
      ++cn;
  }

  solve(cn);

  return 0;
}