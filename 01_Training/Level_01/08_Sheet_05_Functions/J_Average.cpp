/**
 * Author: Gezo
 * Problem: J Average
 * Source: Assiut University Training - Sheet #5
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/J
 */

#include <iomanip>
#include <iostream>
using namespace std;

void solve(double arr[], int n) {
  double sum = 0;

  for (int i = 0; i < n; ++i) sum += arr[i];

  cout << fixed << setprecision(7) << sum / n;
}

int main() {
  int n;

  cin >> n;

  double arr[n];

  for (int i = 0; i < n; ++i) cin >> arr[i];

  solve(arr, n);

  return 0;
}