/**
 * Author: Hossam (HossamGezo)
 * Problem: F Multiplication table
 * Source: Assiut University Training - Sheet #2
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/F
 */

#include <iostream>
using namespace std;

int main() {
  int n;

  cin >> n;

  for (int i = 1; i <= 12; ++i) {
    cout << n << " * " << i << " = " << n * i << endl;
  }

  return 0;
}