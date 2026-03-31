/**
 * Author: Hossam (HossamGezo)
 * Problem: V Frequency Array
 * Source: Assiut University Training - Sheet #3
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V
 */

#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int n, m, idx;

  cin >> n >> m;

  int arr[m + 1];

  fill(arr, arr + m + 1, 0);

  for (int i = 0; i < n; ++i) {
    cin >> idx;

    if (idx <= m) ++arr[idx];
  }

  for (int i = 1; i <= m; ++i) cout << arr[i] << endl;

  return 0;
}