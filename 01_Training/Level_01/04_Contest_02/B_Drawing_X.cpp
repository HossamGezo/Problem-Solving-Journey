/**
 * Author: Gezo
 * Problem: B Drawing X
 * Source: Assiut University Training - Contest #2
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/B
 */

#include <iostream>
using namespace std;

int main() {
  int n, s, e;

  cin >> n;

  s = 0;
  e = n - 1;

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (s == e && (j == n / 2))
        cout << "X";
      else if (j == s)
        cout << "\\";
      else if (j == e)
        cout << "/";
      else
        cout << "*";
    }

    ++s;
    --e;

    cout << endl;
  }

  return 0;
}