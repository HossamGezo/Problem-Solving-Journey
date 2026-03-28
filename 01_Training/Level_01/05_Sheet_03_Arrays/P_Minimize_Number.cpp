/**
 * Author: Hossam (HossamGezo)
 * Problem: P Minimize Number
 * Source: Assiut University Training - Sheet #3
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/P
 */

#include <iostream>
#include <limits>
using namespace std;

int main() {
  int n, cn = 0;
  bool f = false;

  cin >> n;

  int arr[n];

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];

    if (arr[i] % 2 != 0) f = true;
  }

  if (f) {
    cout << 0;
    return 0;
  }

  while (true) {
    for (int i = 0; i < n; ++i) {
      if (arr[i] % 2 != 0) {
        cout << cn;
        return 0;
      }

      arr[i] = arr[i] / 2;
    }

    ++cn;
  }

  return 0;
}