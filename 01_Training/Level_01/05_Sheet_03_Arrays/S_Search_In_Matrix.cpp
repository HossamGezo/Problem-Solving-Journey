/**
 * Author: Gezo
 * Problem: S Search In Matrix
 * Source: Assiut University Training - Sheet #3
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S
 */

#include <iostream>
using namespace std;

int main() {
  int n, m, x;

  cin >> n >> m;

  int arr[n][m];

  for (int i = 0; i < n; ++i)
    for (int j = 0; j < m; ++j) cin >> arr[i][j];

  cin >> x;

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      if (arr[i][j] == x) {
        cout << "will not take number";
        return 0;
      }
    }
  }

  cout << "will take number";

  return 0;
}