/**
 * Author: Hossam (HossamGezo)
 * Problem: M Replace MinMax
 * Source: Assiut University Training - Sheet #3
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M
 */

#include <algorithm>
#include <iostream>
#include <limits>
using namespace std;

int main() {
  int n, idxmn = 0, idxmx = 0;

  cin >> n;

  int arr[n];

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];

    if (arr[idxmn] > arr[i]) idxmn = i;
    if (arr[idxmx] < arr[i]) idxmx = i;
  }

  swap(arr[idxmn], arr[idxmx]);

  for (int i = 0; i < n; ++i) cout << arr[i] << " ";

  return 0;
}