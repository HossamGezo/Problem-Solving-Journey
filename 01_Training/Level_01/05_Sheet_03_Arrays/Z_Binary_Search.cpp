/**
 * Author: Hossam (HossamGezo)
 * Problem: Z Binary Search
 * Source: Assiut University Training - Sheet #3
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z
 */

#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int n, q, x;
  bool f;

  cin >> n >> q;

  int arr[n];

  for (int i = 0; i < n; ++i) cin >> arr[i];  // O(n)

  // NOTE --- This solution will give you a "Time Limit Exceeded" error 'O(n^2)'

  // while (q--) {  // O(q) = O(n) => O(n) * O(n) = O(n^2)
  //   cin >> x;

  //   f = true;

  //   for (int i = 0; i < n; ++i) { // O(n)
  //     if (x == arr[i]) {
  //       cout << "found\n";
  //       f = false;
  //       break;
  //     }
  //   }

  //   if (f) cout << "not found\n";
  // }

  // NOTE --- Optimized to O(n long(n)) using Binary Search

  sort(arr, arr + n);

  while (q--) {  // O(q) = O(n) => O(n) * O(log n) = O(n log n)
    cin >> x;

    int l = 0, r = n - 1, mid, ans = -1;

    while (l <= r) {  // O(log n)
      mid = (r + l) / 2;

      if (arr[mid] <= x) {
        l = mid + 1;
        ans = mid;
      } else
        r = mid - 1;
    }

    if (arr[ans] == x)
      cout << "found\n";
    else
      cout << "not found\n";
  }

  return 0;
}