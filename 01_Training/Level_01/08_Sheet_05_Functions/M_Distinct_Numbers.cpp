/**
 * Author: Gezo
 * Problem: M Distinct Numbers
 * Source: Assiut University Training - Sheet #5
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/M
 */

#include <iostream>
using namespace std;

void solve(int frq[], int n) {
  long long cn = 0;

  for (int i = 0; i < n; ++i)
    if (frq[i] != 0) ++cn;

  cout << cn;
}

int main() {
  int n;

  cin >> n;

  int arr[n], frq[2007] = {};

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];

    arr[i] = 1000 + arr[i];

    frq[arr[i]]++;
  }

  n = 2007;

  solve(frq, n);

  return 0;
}