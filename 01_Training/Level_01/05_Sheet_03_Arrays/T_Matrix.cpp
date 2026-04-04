/**
 * Author: Gezo
 * Problem: T Matrix
 * Source: Assiut University Training - Sheet #3
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T
 */

#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int n;
  long long sump = 0, sums = 0;

  cin >> n;

  int arr[n][n];

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      cin >> arr[i][j];

      if (i == j) sump += arr[i][j];

      if ((n - 1) - i == j) {
        sums += arr[i][j];
      }
    }
  }

  cout << abs(sums - sump);

  return 0;
}