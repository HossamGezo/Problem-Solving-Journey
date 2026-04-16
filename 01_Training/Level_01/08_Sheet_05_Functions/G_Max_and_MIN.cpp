/**
 * Author: Gezo
 * Problem: G Max and MIN
 * Source: Assiut University Training - Sheet #5
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/G
 */

#include <iostream>
#include <limits>
using namespace std;

void solve(int arr[], int n) {
  int mn = INT_MAX;
  int mx = INT_MIN;

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];

    if (mn > arr[i]) mn = arr[i];

    if (mx < arr[i]) mx = arr[i];
  }

  cout << mn << " " << mx;
}

int main() {
  int n;

  cin >> n;

  int arr[n];

  solve(arr, n);

  return 0;
}