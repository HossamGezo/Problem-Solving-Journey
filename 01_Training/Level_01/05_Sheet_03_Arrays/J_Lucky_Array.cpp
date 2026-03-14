/**
 * Author: Hossam (HossamGezo)
 * Problem: J Lucky Array
 * Source: Assiut University Training - Sheet #3
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J
 */

#include <iostream>
using namespace std;

int main() {
  int n, mn = 1e9 + 7, cn = 0;

  cin >> n;

  int arr[n];

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];

    if (mn > arr[i]) {
      mn = arr[i];
      cn = 1;
    } else if (mn == arr[i])
      ++cn;
  }

  if (cn % 2 == 0)
    cout << "Unlucky";
  else
    cout << "Lucky";

  return 0;
}