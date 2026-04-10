/**
 * Author: Gezo
 * Problem: N Numbers Histogram
 * Source: Assiut University Training - Sheet #2
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/N
 */

#include <iostream>
using namespace std;

int main() {
  char s;
  int n, m;

  cin >> s >> n;

  for (int i = 0; i < n; ++i) {
    cin >> m;

    for (int j = 1; j <= m; ++j) cout << s;

    cout << endl;
  }

  return 0;
}