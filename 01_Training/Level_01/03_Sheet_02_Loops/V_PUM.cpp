/**
 * Author: Hossam (HossamGezo)
 * Problem: V PUM
 * Source: Assiut University Training - Sheet #2
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/V
 */

#include <iostream>
using namespace std;

int main() {
  int n, c = 1;

  cin >> n;

  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= 3; ++j) cout << c++ << " ";

    c++;

    cout << "PUM" << endl;
  }

  return 0;
}