/**
 * Author: Hossam (HossamGezo)
 * Problem: U Is B a subsequence of A
 * Source: Assiut University Training - Sheet #3
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/U
 */

#include <iostream>
using namespace std;

int main() {
  int n, m;

  cin >> n >> m;

  int a[n], b[m];

  for (int i = 0; i < n; ++i) cin >> a[i];

  for (int i = 0; i < m; ++i) cin >> b[i];

  // int f = 0, cn = 0

  // for (int i = 0; i < m; ++i) {
  //   for (int j = f; j < n; ++j) {
  //     if (b[i] == a[j]) {
  //       f = j + 1;
  //       ++cn;
  //       break;
  //     }
  //   }
  // }

  // if (cn == m)
  //   cout << "YES";
  // else
  //   cout << "NO";

  // NOTE --- Another Solution Note: "Simpler solution"

  int idx = 0;

  for (int i = 0; i < n; ++i) {
    if (a[i] == b[idx]) ++idx;

    if (idx == m) {
      cout << "YES";

      return 0;
    }
  }

  cout << "NO";

  return 0;
}