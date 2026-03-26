/**
 * Author: Hossam (HossamGezo)
 * Problem: A 1 to N
 * Source: Assiut University Training - Sheet #2
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/A
 */

#include <iostream>
using namespace std;

int main() {
  int n;

  cin >> n;

  for (int i = 0; i < n; ++i) {
    cout << i + 1 << endl;
  }

  return 0;
}