/**
 * Author: Hossam (HossamGezo)
 * Problem: F Front End
 * Source: Assiut University Training - Contest #3.1
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/F
 */

#include <iostream>
using namespace std;

int main() {
  int n;

  cin >> n;

  int arr[n];

  for (int i = 0; i < n; ++i) cin >> arr[i];

  for (int i = 0; i < n / 2; ++i) cout << arr[i] << " " << arr[(n - 1) - i] << " ";

  if (n % 2 != 0) cout << arr[n / 2];

  return 0;
}