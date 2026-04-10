/**
 * Author: Gezo
 * Problem: W Shape 3
 * Source: Assiut University Training - Sheet #2
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/W
 */

#include <iostream>
using namespace std;

int main() {
  int n;

  cin >> n;

  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= n - i; ++j) cout << " ";

    for (int k = 1; k <= (i * 2) - 1; ++k) cout << "*";

    cout << endl;
  }

  for (int i = n; i >= 1; --i) {
    for (int j = n - i; j >= 1; --j) cout << " ";

    for (int k = (i * 2) - 1; k >= 1; --k) cout << "*";

    cout << endl;
  }

  return 0;
}