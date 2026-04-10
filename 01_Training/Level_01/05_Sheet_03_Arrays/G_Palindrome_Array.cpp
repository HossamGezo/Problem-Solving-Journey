/**
 * Author: Gezo
 * Problem: G Palindrome Array
 * Source: Assiut University Training - Sheet #3
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G
 */

#include <iostream>
using namespace std;

int main() {
  int n;

  cin >> n;

  int arr[n];

  for (int i = 0; i < n; ++i) cin >> arr[i];

  for (int i = 0; i < n / 2; ++i) {
    if (arr[i] != arr[(n - 1) - i]) {
      cout << "NO";
      return 0;
    }
  }

  cout << "YES";

  return 0;
}