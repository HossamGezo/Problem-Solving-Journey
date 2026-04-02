/**
 * Author: Hossam (HossamGezo)
 * Problem: C Choose Elements
 * Source: Assiut University Training - Contest #3.1
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/C
 */

#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int n, k;
  long long sum = 0;

  cin >> n >> k;

  int arr[n];

  for (int i = 0; i < n; ++i) cin >> arr[i];

  sort(arr, arr + n);

  reverse(arr, arr + n);

  for (int i = 0; i < k; ++i) {
    if (arr[i] < 0) break;

    sum += arr[i];
  }

  cout << sum;

  return 0;
}