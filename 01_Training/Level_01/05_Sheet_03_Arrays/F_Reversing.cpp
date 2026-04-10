/**
 * Author: Gezo
 * Problem: F Reversing
 * Source: Assiut University Training - Sheet #3
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F
 */

#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int n;

  cin >> n;

  int arr[n];

  for (int i = 0; i < n; ++i) cin >> arr[i];

  for (int i = n - 1; i >= 0; --i) cout << arr[i] << " ";

  // NOTE --- Another Solution Using ' #include <algorithm> ' library "reverse method"

  // int arr[n];

  // for (int i = 0; i < n; ++i) cin >> arr[i];

  // reverse(arr, arr + n);

  // for (int i = 0; i < n; ++i) cout << arr[i] << " ";

  // NOTE --- Another Solution Using ' #include <algorithm> ' library "swap method"

  // int arr[n];

  // for (int i = 0; i < n; ++i) cin >> arr[i];

  // for (int i = 0; i < n / 2; ++i) swap(arr[i], arr[(n - 1) - i]);

  // for (int i = 0; i < n; ++i) cout << arr[i] << " ";

  // NOTE --- Another Solution Using 2 Arrays

  // int arr[n], rev[n];

  // for (int i = 0; i < n; ++i) {
  //   cin >> arr[i];

  //   rev[n - (i + 1)] = arr[i];
  // }

  // for (int i = 0; i < n; ++i) cout << rev[i] << " ";

  return 0;
}