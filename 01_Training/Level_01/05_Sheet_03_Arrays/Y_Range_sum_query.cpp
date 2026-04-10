/**
 * Author: Gezo
 * Problem: Y Range sum query
 * Source: Assiut University Training - Sheet #3
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y
 */

#include <iostream>
using namespace std;

int main() {
  int n, q, l, r;
  long long sum = 0;

  cin >> n >> q;

  int arr[n];

  for (int i = 0; i < n; ++i) cin >> arr[i];  // O(n)

  // NOTE --- This solution will give you a "Time Limit Exceeded" error 'O(n^2)'

  // while (q--) {  // O(q * (r - l + 1)) = O(n * (n - 1 + 1)) = O(n*n) = O(n^2)
  //   cin >> l >> r;

  //   --l;
  //   --r;

  //   sum = 0;

  //   for (int i = l; i <= r; ++i) sum += arr[i];  // O(r - l + 1) = O(n - 1 + 1) = O(n)

  //   cout << sum << endl;
  // }

  // NOTE --- Optimized to O(n) using Prefix Sum (Partial Sum) Array

  long long prf[n];

  // NOTE - Using sum -

  // for (int i = 0; i < n; ++i) {  // O(n)
  //   sum += arr[i];

  //   prf[i] = sum;
  // }

  // NOTE - Without using sum -

  prf[0] = arr[0];

  for (int i = 1; i < n; ++i) prf[i] = prf[i - 1] + arr[i];  // O(n)

  while (q--) {  // O(q) = O(n)
    cin >> l >> r;

    --l;
    --r;

    // NOTE - Using conditions -

    // if (l == 0)
    //   cout << prf[r];  // O(1)
    // else
    //   cout << prf[r] - prf[l - 1];  // O(1)

    // cout << endl;

    // NOTE - Without using conditions -

    cout << prf[r] - prf[l] + arr[l] << endl;  // O(1)
  }

  return 0;
}