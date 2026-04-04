/**
 * Author: Gezo
 * Problem: Q Count Subarrays
 * Source: Assiut University Training - Sheet #3
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Q
 */

#include <iostream>
#include <limits>
using namespace std;

int main() {
  int t, n, mx, cn = 0;

  cin >> t;

  while (t--) {
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; ++i) cin >> arr[i];

    cn = 0;

    for (int i = 0; i < n; ++i) {
      mx = INT_MIN;

      for (int j = i; j < n; ++j) {
        if (mx < arr[j]) {
          mx = arr[j];
          ++cn;
        } else
          break;
      }
    }

    cout << cn << endl;
  }

  return 0;
}