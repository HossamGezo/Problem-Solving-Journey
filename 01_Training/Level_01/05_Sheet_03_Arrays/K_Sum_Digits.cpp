/**
 * Author: Hossam (HossamGezo)
 * Problem: K Sum Digits
 * Source: Assiut University Training - Sheet #3
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K
 */

#include <iostream>
using namespace std;

int main() {
  int t, n, sum = 0;

  cin >> t;

  char arr[t];

  for (int i = 0; i < t; ++i) {
    cin >> arr[i];

    sum += arr[i] - '0';
  }

  cout << sum;

  return 0;
}