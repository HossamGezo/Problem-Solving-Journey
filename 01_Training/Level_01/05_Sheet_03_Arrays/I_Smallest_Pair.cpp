/**
 * Author: Hossam (HossamGezo)
 * Problem: I Smallest Pair
 * Source: Assiut University Training - Sheet #3
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I
 */

#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int t, n;
  long long total, mn;

  cin >> t;

  while (t--) {
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; ++i) cin >> arr[i];

    mn = 1e18 + 7;

    for (int i = 0; i < n; ++i) {
      for (int j = i + 1; j < n; ++j) {
        total = arr[i] + arr[j] + (j + 1) - (i + 1);

        mn = min(mn, total);
      }
    }

    cout << mn << endl;
  }

  return 0;
}