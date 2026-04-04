/**
 * Author: Gezo
 * Problem: B Reversing
 * Source: Assiut University Training - Contest #3.1
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/B
 */

#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int n;

  cin >> n;

  int arr[n];

  for (int i = 0; i < n; ++i) cin >> arr[i];

  for (int i = 0; i < n; ++i)
    if (arr[i] == 0) reverse(arr, arr + i);

  for (int i = 0; i < n; ++i) cout << arr[i] << " ";

  return 0;
}