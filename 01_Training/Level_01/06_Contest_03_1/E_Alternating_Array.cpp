/**
 * Author: Gezo
 * Problem: E Alternating Array
 * Source: Assiut University Training - Contest #3.1
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/E
 */

#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int n, cn = 0, kn = 0;

  cin >> n;

  int arr[n];

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];

    if (i % 2 == 0 && arr[i] < 0)
      ++cn;
    else if (i % 2 != 0 && arr[i] > 0)
      ++cn;

    if (i % 2 == 0 && arr[i] > 0)
      ++kn;
    else if (i % 2 != 0 && arr[i] < 0)
      ++kn;
  }

  cout << min(cn, kn);

  return 0;
}