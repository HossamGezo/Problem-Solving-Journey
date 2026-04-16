/**
 * Author: Gezo
 * Problem: L New Array
 * Source: Assiut University Training - Sheet #5
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/L
 */

#include <iostream>
using namespace std;

void solve(int a[], int b[], int n) {
  for (int i = 0; i < n * 2; ++i) {
    if (i >= n)
      cout << a[i - n] << " ";  // Also you can do the following : cout << a[i % n] << " ";
    else
      cout << b[i] << " ";
  }
}

int main() {
  int n;

  cin >> n;

  int a[n], b[n];

  for (int i = 0; i < n; ++i) cin >> a[i];

  for (int i = 0; i < n; ++i) cin >> b[i];

  solve(a, b, n);

  return 0;
}