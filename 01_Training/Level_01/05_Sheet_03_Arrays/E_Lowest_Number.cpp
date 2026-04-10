/**
 * Author: Gezo
 * Problem: E Lowest Number
 * Source: Assiut University Training - Sheet #3
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E
 */

#include <iostream>
using namespace std;

int main() {
  int n, mn = 1e9, idx = 0;

  cin >> n;

  int arr[n];

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];

    if (arr[i] < mn) {
      mn = arr[i];
      idx = i + 1;
    }
  }

  cout << mn << " " << idx;

  return 0;
}