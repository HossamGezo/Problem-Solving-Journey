/**
 * Author: Hossam (HossamGezo)
 * Problem: B Searching
 * Source: Assiut University Training - Sheet #3
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B
 */

#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int n, x, ans = -1;

  cin >> n;

  int arr[n];

  for (int i = 0; i < n; ++i) cin >> arr[i];

  cin >> x;

  for (int i = 0; i < n; ++i) {
    if (arr[i] == x) {
      ans = i;
      break;
    }
  }

  cout << ans;

  return 0;
}