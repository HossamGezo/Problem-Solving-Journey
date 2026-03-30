/**
 * Author: Hossam (HossamGezo)
 * Problem: W Mirror Array
 * Source: Assiut University Training - Sheet #3
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/W
 */

#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int n, m;

  cin >> n >> m;

  int arr[n][m];

  for (int i = 0; i < n; ++i)
    for (int j = 0; j < m; ++j) cin >> arr[i][j];

  for (int i = 0; i < n; ++i) {
    for (int j = m - 1; j >= 0; --j) cout << arr[i][j] << " ";

    cout << endl;
  }

  // --- Another Solution Note: Using ' #include <algorithm> ' library

  // for (int i = 0; i < n; ++i) reverse(arr[i], arr[i] + m);

  // for (int i = 0; i < n; ++i) {
  //   for (int j = 0; j < m; ++j) cout << arr[i][j] << " ";

  //   cout << endl;
  // }

  return 0;
}