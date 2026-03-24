/**
 * Author: Hossam (HossamGezo)
 * Problem: P Shape 1
 * Source: Assiut University Training - Sheet #2
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/P
 */

#include <iostream>
using namespace std;

int main() {
  int n;

  cin >> n;

  for (int i = n; i >= 1; --i) {
    for (int j = 1; j <= i; ++j) cout << "*";

    cout << endl;
  }
  return 0;
}