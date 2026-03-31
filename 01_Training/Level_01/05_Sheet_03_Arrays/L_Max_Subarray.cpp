/**
 * Author: Hossam (HossamGezo)
 * Problem: L Max Subarray
 * Source: Assiut University Training - Sheet #3
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/L
 */

#include <algorithm>
#include <iostream>
#include <limits>
using namespace std;

int main() {
  int t, n, mx;

  cin >> t;

  while (t--) {
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; ++i) cin >> arr[i];

    // for (int i = 0; i < n; ++i) {
    //   for (int j = i; j < n; ++j) {
    //     mx = INT_MIN;

    //     for (int k = i; k < j + 1; ++k)
    //       if (mx < arr[k]) mx = arr[k];

    //     cout << mx << " ";
    //   }
    // }

    // NOTE --- Another Solution Note: "Simpler solution"

    for (int i = 0; i < n; ++i) {
      mx = INT_MIN;

      for (int j = i; j < n; ++j) {
        if (mx < arr[j]) mx = arr[j];
        cout << mx << " ";
      }
    }

    // NOTE --- Another Solution Note: Using ' #include <algorithm> ' library "Simpler solution"

    // for (int i = 0; i < n; ++i) {
    //   mx = INT_MIN;

    //   for (int j = i; j < n; ++j) {
    //     mx = max(mx, arr[j]);
    //     cout << mx << " ";
    //   }
    // }

    cout << endl;
  }

  return 0;
}