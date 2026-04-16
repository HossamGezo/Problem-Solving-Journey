/**
 * Author: Gezo
 * Problem: K Shift Right
 * Source: Assiut University Training - Sheet #5
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/K
 */

#include <iostream>
using namespace std;

void solve(int x, int arr[], int n) {
  x %= n;

  for (int i = n - x; i < n; ++i) cout << arr[i] << " ";

  for (int i = 0; i < n - x; ++i) cout << arr[i] << " ";
}

int main() {
  int n, x;

  cin >> n >> x;

  int arr[n];

  for (int i = 0; i < n; ++i) cin >> arr[i];

  solve(x, arr, n);

  return 0;
}