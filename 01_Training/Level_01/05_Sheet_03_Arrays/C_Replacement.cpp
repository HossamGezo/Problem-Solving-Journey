/**
 * Author: Hossam (HossamGezo)
 * Problem: C Replacement
 * Source: Assiut University Training - Sheet #3
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C
 */

#include <iostream>
using namespace std;

int main() {
  int n;

  cin >> n;

  int arr[n];

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];

    if (arr[i] < 0)
      arr[i] = 2;
    else if (arr[i] > 0)
      arr[i] = 1;

    cout << arr[i] << " ";
  }

  return 0;
}