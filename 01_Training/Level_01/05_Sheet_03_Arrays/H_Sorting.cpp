/**
 * Author: Hossam (HossamGezo)
 * Problem: H Sorting
 * Source: Assiut University Training - Sheet #3
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/H
 */

#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int n;

  cin >> n;

  int arr[n];

  for (int i = 0; i < n; ++i) cin >> arr[i];

  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {
      if (arr[i] > arr[j]) swap(arr[i], arr[j]);
    }
  }

  for (int i = 0; i < n; ++i) cout << arr[i] << " ";

  return 0;
}